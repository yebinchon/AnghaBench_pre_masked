
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ps2dev {TYPE_1__* serio; } ;
struct psmouse {struct ps2dev ps2dev; struct fsp_data* private; } ;
struct fsp_data {int buttons; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct psmouse*,int) ;
 int FUNC_3 (struct psmouse*,int) ;
 scalar_t__ FUNC_4 (struct psmouse*,int) ;
 scalar_t__ FUNC_5 (struct psmouse*,int ,int*) ;
 scalar_t__ FUNC_6 (struct psmouse*,int ,int) ;
 int FUNC_7 (struct ps2dev*,unsigned char*,int ) ;

__attribute__((used)) static int FUNC_8(struct psmouse *VAR_9)
{
 struct fsp_data *VAR_10 = VAR_9->private;
 struct ps2dev *VAR_11 = &VAR_9->ps2dev;
 unsigned char VAR_12[2];
 int VAR_13;





 VAR_12[0] = 200;
 FUNC_7(VAR_11, VAR_12, VAR_8);
 VAR_12[0] = 200;
 FUNC_7(VAR_11, VAR_12, VAR_8);
 VAR_12[0] = 80;
 FUNC_7(VAR_11, VAR_12, VAR_8);

 FUNC_7(VAR_11, VAR_12, VAR_7);
 if (VAR_12[0] != 0x04) {
  FUNC_0(&VAR_9->ps2dev.serio->dev,
   "Unable to enable 4 bytes packet format.\n");
  return -VAR_0;
 }

 if (FUNC_5(VAR_9, VAR_6, &VAR_13)) {
  FUNC_0(&VAR_9->ps2dev.serio->dev,
   "Unable to read SYSCTL5 register.\n");
  return -VAR_0;
 }

 VAR_13 &= ~(VAR_3 | VAR_4 | VAR_1);

 VAR_13 &= ~VAR_5;
 if (VAR_10->buttons == 0x06) {

  VAR_13 |= VAR_2;
 }

 if (FUNC_6(VAR_9, VAR_6, VAR_13)) {
  FUNC_0(&VAR_9->ps2dev.serio->dev,
   "Unable to set up required mode bits.\n");
  return -VAR_0;
 }





 if (FUNC_4(VAR_9, 1))
  FUNC_1(&VAR_9->ps2dev.serio->dev,
    "Failed to enable OPC tag mode.\n");


 FUNC_3(VAR_9, 1);
 FUNC_2(VAR_9, 1);

 return 0;
}
