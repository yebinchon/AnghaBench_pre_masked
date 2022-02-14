
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int byte; int word; } ;
typedef size_t u8 ;
typedef scalar_t__ u16 ;
struct stub_chip {size_t pointer; int* words; } ;
struct i2c_adapter {int dev; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;




 char VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 struct stub_chip* VAR_5 ;

__attribute__((used)) static s32 FUNC_1(struct i2c_adapter * VAR_6, u16 VAR_7, unsigned short VAR_8,
 char VAR_9, u8 VAR_10, int VAR_11, union i2c_smbus_data * VAR_12)
{
 s32 VAR_13;
 int VAR_14;
 struct stub_chip *VAR_15 = ((void*)0);


 for (VAR_14 = 0; VAR_14 < VAR_3 && VAR_4[VAR_14]; VAR_14++) {
  if (VAR_7 == VAR_4[VAR_14]) {
   VAR_15 = VAR_5 + VAR_14;
   break;
  }
 }
 if (!VAR_15)
  return -VAR_0;

 switch (VAR_11) {

 case 129:
  FUNC_0(&VAR_6->dev, "smbus quick - addr 0x%02x\n", VAR_7);
  VAR_13 = 0;
  break;

 case 131:
  if (VAR_9 == VAR_2) {
   VAR_15->pointer = VAR_10;
   FUNC_0(&VAR_6->dev, "smbus byte - addr 0x%02x, "
     "wrote 0x%02x.\n",
     VAR_7, VAR_10);
  } else {
   VAR_12->byte = VAR_15->words[VAR_15->pointer++] & 0xff;
   FUNC_0(&VAR_6->dev, "smbus byte - addr 0x%02x, "
     "read  0x%02x.\n",
     VAR_7, VAR_12->byte);
  }

  VAR_13 = 0;
  break;

 case 130:
  if (VAR_9 == VAR_2) {
   VAR_15->words[VAR_10] &= 0xff00;
   VAR_15->words[VAR_10] |= VAR_12->byte;
   FUNC_0(&VAR_6->dev, "smbus byte data - addr 0x%02x, "
     "wrote 0x%02x at 0x%02x.\n",
     VAR_7, VAR_12->byte, VAR_10);
  } else {
   VAR_12->byte = VAR_15->words[VAR_10] & 0xff;
   FUNC_0(&VAR_6->dev, "smbus byte data - addr 0x%02x, "
     "read  0x%02x at 0x%02x.\n",
     VAR_7, VAR_12->byte, VAR_10);
  }
  VAR_15->pointer = VAR_10 + 1;

  VAR_13 = 0;
  break;

 case 128:
  if (VAR_9 == VAR_2) {
   VAR_15->words[VAR_10] = VAR_12->word;
   FUNC_0(&VAR_6->dev, "smbus word data - addr 0x%02x, "
     "wrote 0x%04x at 0x%02x.\n",
     VAR_7, VAR_12->word, VAR_10);
  } else {
   VAR_12->word = VAR_15->words[VAR_10];
   FUNC_0(&VAR_6->dev, "smbus word data - addr 0x%02x, "
     "read  0x%04x at 0x%02x.\n",
     VAR_7, VAR_12->word, VAR_10);
  }

  VAR_13 = 0;
  break;

 default:
  FUNC_0(&VAR_6->dev, "Unsupported I2C/SMBus command\n");
  VAR_13 = -VAR_1;
  break;
 }

 return VAR_13;
}
