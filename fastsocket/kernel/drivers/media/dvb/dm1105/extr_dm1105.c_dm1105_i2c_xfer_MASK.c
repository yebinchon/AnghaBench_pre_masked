
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int flags; int addr; int len; int* buf; } ;
struct i2c_adapter {struct dm1105_dev* algo_data; } ;
struct dm1105_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct i2c_adapter *VAR_4,
       struct i2c_msg *VAR_5, int VAR_6)
{
 struct dm1105_dev *VAR_7 ;

 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 u8 VAR_16;

 VAR_7 = VAR_4->algo_data;
 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  FUNC_1(VAR_0, 0x00);
  if (VAR_5[VAR_10].flags & VAR_3) {

   VAR_8 = VAR_5[VAR_10].addr << 1;
   VAR_8 |= 1;
   FUNC_1(VAR_1, VAR_8);
   for (VAR_14 = 0; VAR_14 < VAR_5[VAR_10].len; VAR_14++)
    FUNC_1(VAR_1 + VAR_14 + 1, 0);

   FUNC_1(VAR_0, 0x81 + VAR_5[VAR_10].len);
   for (VAR_11 = 0; VAR_11 < 55; VAR_11++) {
    FUNC_2(10);
    VAR_16 = FUNC_0(VAR_2);
    if ((VAR_16 & 0xc0) == 0x40)
     break;
   }
   if (VAR_11 >= 55)
    return -1;

   for (VAR_14 = 0; VAR_14 < VAR_5[VAR_10].len; VAR_14++) {
    VAR_9 = FUNC_0(VAR_1 + VAR_14 + 1);
    if (VAR_9 < 0)
     goto err;
    VAR_5[VAR_10].buf[VAR_14] = VAR_9;
   }
  } else if ((VAR_5[VAR_10].buf[0] == 0xf7) && (VAR_5[VAR_10].addr == 0x55)) {


   VAR_13 = VAR_5[VAR_10].len - 1;
   VAR_12 = 1;
   do {
    FUNC_1(VAR_1, VAR_5[VAR_10].addr << 1);
    FUNC_1(VAR_1 + 1, 0xf7);
    for (VAR_14 = 0; VAR_14 < (VAR_13 > 48 ? 48 : VAR_13); VAR_14++) {
     VAR_15 = VAR_5[VAR_10].buf[VAR_12 + VAR_14];
     FUNC_1(VAR_1 + VAR_14 + 2, VAR_15);
    }
    FUNC_1(VAR_0, 0x82 + (VAR_13 > 48 ? 48 : VAR_13));
    for (VAR_11 = 0; VAR_11 < 25; VAR_11++) {
     FUNC_2(10);
     VAR_16 = FUNC_0(VAR_2);
     if ((VAR_16 & 0xc0) == 0x40)
      break;
    }

    if (VAR_11 >= 25)
     return -1;

    VAR_12 += 48;
    VAR_13 -= 48;
   } while (VAR_13 > 0);
  } else {

   FUNC_1(VAR_1, VAR_5[VAR_10].addr << 1);
   for (VAR_14 = 0; VAR_14 < VAR_5[VAR_10].len; VAR_14++) {
    VAR_15 = VAR_5[VAR_10].buf[VAR_14];
    FUNC_1(VAR_1 + VAR_14 + 1, VAR_15);
   }
   FUNC_1(VAR_0, 0x81 + VAR_5[VAR_10].len);
   for (VAR_11 = 0; VAR_11 < 25; VAR_11++) {
    FUNC_2(10);
    VAR_16 = FUNC_0(VAR_2);
    if ((VAR_16 & 0xc0) == 0x40)
     break;
   }

   if (VAR_11 >= 25)
    return -1;
  }
 }
 return VAR_6;
 err:
 return VAR_9;
}
