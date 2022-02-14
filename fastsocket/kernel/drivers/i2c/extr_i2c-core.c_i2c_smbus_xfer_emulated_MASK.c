
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {unsigned char byte; int word; int* block; } ;
typedef unsigned char u8 ;
typedef int u16 ;
struct i2c_msg {unsigned short member_1; int member_2; unsigned char* member_3; int len; unsigned short flags; int member_0; } ;
struct i2c_adapter {int dev; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;

 unsigned char VAR_5 ;






 char VAR_6 ;

 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_msg*) ;
 int FUNC_2 (unsigned char,struct i2c_msg*) ;
 unsigned char FUNC_3 (int ,struct i2c_msg*) ;
 int FUNC_4 (struct i2c_adapter*,struct i2c_msg*,int) ;

__attribute__((used)) static s32 FUNC_5(struct i2c_adapter * VAR_7, u16 VAR_8,
                                   unsigned short VAR_9,
                                   char VAR_10, u8 VAR_11, int VAR_12,
                                   union i2c_smbus_data * VAR_13)
{




 unsigned char VAR_14[VAR_5+3];
 unsigned char VAR_15[VAR_5+2];
 int VAR_16 = VAR_10 == VAR_6?2:1;
 struct i2c_msg VAR_17[2] = { { VAR_8, VAR_9, 1, VAR_14 },
                           { VAR_8, VAR_9 | VAR_3, 0, VAR_15 }
                         };
 int VAR_18;
 u8 VAR_19 = 0;
 int VAR_20;

 VAR_14[0] = VAR_11;
 switch(VAR_12) {
 case 129:
  VAR_17[0].len = 0;

  VAR_17[0].flags = VAR_9 | (VAR_10 == VAR_6 ?
     VAR_3 : 0);
  VAR_16 = 1;
  break;
 case 133:
  if (VAR_10 == VAR_6) {

   VAR_17[0].flags = VAR_3 | VAR_9;
   VAR_16 = 1;
  }
  break;
 case 132:
  if (VAR_10 == VAR_6)
   VAR_17[1].len = 1;
  else {
   VAR_17[0].len = 2;
   VAR_14[1] = VAR_13->byte;
  }
  break;
 case 128:
  if (VAR_10 == VAR_6)
   VAR_17[1].len = 2;
  else {
   VAR_17[0].len=3;
   VAR_14[1] = VAR_13->word & 0xff;
   VAR_14[2] = VAR_13->word >> 8;
  }
  break;
 case 130:
  VAR_16 = 2;
  VAR_10 = VAR_6;
  VAR_17[0].len = 3;
  VAR_17[1].len = 2;
  VAR_14[1] = VAR_13->word & 0xff;
  VAR_14[2] = VAR_13->word >> 8;
  break;
 case 135:
  if (VAR_10 == VAR_6) {
   VAR_17[1].flags |= VAR_4;
   VAR_17[1].len = 1;

  } else {
   VAR_17[0].len = VAR_13->block[0] + 2;
   if (VAR_17[0].len > VAR_5 + 2) {
    FUNC_0(&VAR_7->dev,
     "Invalid block write size %d\n",
     VAR_13->block[0]);
    return -VAR_0;
   }
   for (VAR_18 = 1; VAR_18 < VAR_17[0].len; VAR_18++)
    VAR_14[VAR_18] = VAR_13->block[VAR_18-1];
  }
  break;
 case 134:
  VAR_16 = 2;
  VAR_10 = VAR_6;
  if (VAR_13->block[0] > VAR_5) {
   FUNC_0(&VAR_7->dev,
    "Invalid block write size %d\n",
    VAR_13->block[0]);
   return -VAR_0;
  }
  VAR_17[0].len = VAR_13->block[0] + 2;
  for (VAR_18 = 1; VAR_18 < VAR_17[0].len; VAR_18++)
   VAR_14[VAR_18] = VAR_13->block[VAR_18-1];
  VAR_17[1].flags |= VAR_4;
  VAR_17[1].len = 1;

  break;
 case 131:
  if (VAR_10 == VAR_6) {
   VAR_17[1].len = VAR_13->block[0];
  } else {
   VAR_17[0].len = VAR_13->block[0] + 1;
   if (VAR_17[0].len > VAR_5 + 1) {
    FUNC_0(&VAR_7->dev,
     "Invalid block write size %d\n",
     VAR_13->block[0]);
    return -VAR_0;
   }
   for (VAR_18 = 1; VAR_18 <= VAR_13->block[0]; VAR_18++)
    VAR_14[VAR_18] = VAR_13->block[VAR_18];
  }
  break;
 default:
  FUNC_0(&VAR_7->dev, "Unsupported transaction %d\n", VAR_12);
  return -VAR_1;
 }

 VAR_18 = ((VAR_9 & VAR_2) && VAR_12 != 129
          && VAR_12 != 131);
 if (VAR_18) {

  if (!(VAR_17[0].flags & VAR_3)) {
   if (VAR_16 == 1)
    FUNC_1(&VAR_17[0]);
   else
    VAR_19 = FUNC_3(0, &VAR_17[0]);
  }

  if (VAR_17[VAR_16-1].flags & VAR_3)
   VAR_17[VAR_16-1].len++;
 }

 VAR_20 = FUNC_4(VAR_7, VAR_17, VAR_16);
 if (VAR_20 < 0)
  return VAR_20;


 if (VAR_18 && (VAR_17[VAR_16-1].flags & VAR_3)) {
  VAR_20 = FUNC_2(VAR_19, &VAR_17[VAR_16-1]);
  if (VAR_20 < 0)
   return VAR_20;
 }

 if (VAR_10 == VAR_6)
  switch(VAR_12) {
   case 133:
    VAR_13->byte = VAR_14[0];
    break;
   case 132:
    VAR_13->byte = VAR_15[0];
    break;
   case 128:
   case 130:
    VAR_13->word = VAR_15[0] | (VAR_15[1] << 8);
    break;
   case 131:
    for (VAR_18 = 0; VAR_18 < VAR_13->block[0]; VAR_18++)
     VAR_13->block[VAR_18+1] = VAR_15[VAR_18];
    break;
   case 135:
   case 134:
    for (VAR_18 = 0; VAR_18 < VAR_15[0] + 1; VAR_18++)
     VAR_13->block[VAR_18] = VAR_15[VAR_18];
    break;
  }
 return 0;
}
