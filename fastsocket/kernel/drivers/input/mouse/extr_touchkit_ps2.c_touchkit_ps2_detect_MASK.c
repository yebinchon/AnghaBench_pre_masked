
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {char* vendor; char* name; int pktsize; int protocol_handler; int ps2dev; struct input_dev* dev; } ;
struct input_dev {int* evbit; int keybit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int,int,unsigned char) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct input_dev*,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int *,unsigned char*,int) ;
 int VAR_11 ;

int FUNC_5(struct psmouse *VAR_12, bool VAR_13)
{
 struct input_dev *VAR_14 = VAR_12->dev;
 unsigned char VAR_15[3];
 int VAR_16;

 VAR_15[0] = VAR_8;
 VAR_15[1] = VAR_7;
 VAR_16 = FUNC_1(2, 3, VAR_6);

 if (FUNC_4(&VAR_12->ps2dev, VAR_15, VAR_16))
  return -VAR_3;

 if (VAR_15[0] != VAR_6 || VAR_15[1] != 0x01 ||
     VAR_15[2] != VAR_7)
  return -VAR_3;

 if (VAR_13) {
  VAR_14->evbit[0] = FUNC_0(VAR_5) | FUNC_0(VAR_4);
  FUNC_2(VAR_2, VAR_14->keybit);
  FUNC_3(VAR_14, VAR_0, 0, VAR_9, 0, 0);
  FUNC_3(VAR_14, VAR_1, 0, VAR_10, 0, 0);

  VAR_12->vendor = "eGalax";
  VAR_12->name = "Touchscreen";
  VAR_12->protocol_handler = VAR_11;
  VAR_12->pktsize = 5;
 }

 return 0;
}
