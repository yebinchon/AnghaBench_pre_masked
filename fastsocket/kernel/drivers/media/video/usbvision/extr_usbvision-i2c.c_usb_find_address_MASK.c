
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {unsigned short flags; int addr; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_adapter*,unsigned char,int) ;
 int FUNC_2 (struct i2c_adapter*,unsigned char,int) ;

__attribute__((used)) static inline int FUNC_3(struct i2c_adapter *VAR_3,
       struct i2c_msg *VAR_4, int VAR_5,
       unsigned char *VAR_6)
{
 unsigned short VAR_7 = VAR_4->flags;

 unsigned char VAR_8;
 int VAR_9;
 if ((VAR_7 & VAR_2)) {

  VAR_8 = 0xf0 | ((VAR_4->addr >> 7) & 0x03);

  VAR_9 = FUNC_2(VAR_3, VAR_8, VAR_5);
  if (VAR_9 != 1) {
   FUNC_0(&VAR_3->dev,
    "died at extended address code,	while writing\n");
   return -VAR_0;
  }
  VAR_6[0] = VAR_8;
  if (VAR_7 & VAR_1) {

   VAR_8 |= 0x01;
   VAR_9 = FUNC_1(VAR_3, VAR_8, VAR_5);
   if (VAR_9 != 1) {
    FUNC_0(&VAR_3->dev,
     "died at extended address code, while reading\n");
    return -VAR_0;
   }
  }

 } else {
  VAR_8 = (VAR_4->addr << 1);
  if (VAR_7 & VAR_1)
   VAR_8 |= 1;

  VAR_6[0] = VAR_8;
  if (VAR_7 & VAR_1)
   VAR_9 = FUNC_1(VAR_3, VAR_8, VAR_5);
  else
   VAR_9 = FUNC_2(VAR_3, VAR_8, VAR_5);

  if (VAR_9 != 1)
   return -VAR_0;
 }
 return 0;
}
