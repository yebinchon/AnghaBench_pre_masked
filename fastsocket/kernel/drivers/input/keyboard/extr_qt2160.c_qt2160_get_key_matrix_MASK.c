
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct qt2160_data {int key_matrix; int * keycodes; struct input_dev* input; struct i2c_client* client; } ;
struct input_dev {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct i2c_client*,int ,int*,int) ;

__attribute__((used)) static int FUNC_5(struct qt2160_data *VAR_1)
{
 struct i2c_client *VAR_2 = VAR_1->client;
 struct input_dev *VAR_3 = VAR_1->input;
 u8 VAR_4[6];
 u16 VAR_5, VAR_6;
 int VAR_7, VAR_8, VAR_9;

 FUNC_0(&VAR_2->dev, "requesting keys...\n");





 VAR_7 = FUNC_4(VAR_2, VAR_0, VAR_4, 6);
 if (VAR_7) {
  FUNC_1(&VAR_2->dev,
   "could not perform chip read.\n");
  return VAR_7;
 }

 VAR_5 = VAR_1->key_matrix;
 VAR_1->key_matrix = VAR_6 = (VAR_4[2] << 8) | VAR_4[1];

 VAR_9 = 0x01;
 for (VAR_8 = 0; VAR_8 < 16; ++VAR_8, VAR_9 <<= 1) {
  int VAR_10 = VAR_6 & VAR_9;

  if ((VAR_5 & VAR_9) != VAR_10) {
   FUNC_2(VAR_3, VAR_1->keycodes[VAR_8], VAR_10);
   FUNC_0(&VAR_2->dev, "key %d %s\n",
    VAR_8, VAR_10 ? "pressed" : "released");
  }
 }

 FUNC_3(VAR_3);

 return 0;
}
