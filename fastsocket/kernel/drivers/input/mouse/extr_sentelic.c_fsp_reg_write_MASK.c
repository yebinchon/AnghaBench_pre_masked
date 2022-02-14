
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ps2dev {TYPE_1__* serio; } ;
struct psmouse {struct ps2dev ps2dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,int,int) ;
 unsigned char FUNC_1 (int) ;
 unsigned char FUNC_2 (int) ;
 int FUNC_3 (struct ps2dev*) ;
 int FUNC_4 (struct ps2dev*) ;
 scalar_t__ FUNC_5 (struct ps2dev*,unsigned char,int ) ;

__attribute__((used)) static int FUNC_6(struct psmouse *VAR_2, int VAR_3, int VAR_4)
{
 struct ps2dev *VAR_5 = &VAR_2->ps2dev;
 unsigned char VAR_6;
 int VAR_7 = -1;

 FUNC_3(VAR_5);

 if (FUNC_5(VAR_5, 0xf3, VAR_0) < 0)
  goto out;

 if ((VAR_6 = FUNC_1(VAR_3)) != VAR_3) {

  FUNC_5(VAR_5, 0x74, VAR_1);
 } else {
  if ((VAR_6 = FUNC_2(VAR_3)) != VAR_3) {

   FUNC_5(VAR_5, 0x77, VAR_1);
  } else {

   FUNC_5(VAR_5, 0x55, VAR_1);
  }
 }

 FUNC_5(VAR_5, VAR_6, VAR_1);

 if (FUNC_5(VAR_5, 0xf3, VAR_0) < 0)
  return -1;

 if ((VAR_6 = FUNC_1(VAR_4)) != VAR_4) {

  FUNC_5(VAR_5, 0x47, VAR_1);
 } else if ((VAR_6 = FUNC_2(VAR_4)) != VAR_4) {

  FUNC_5(VAR_5, 0x44, VAR_1);
 } else {

  FUNC_5(VAR_5, 0x33, VAR_1);
 }


 FUNC_5(VAR_5, VAR_6, VAR_1);
 VAR_7 = 0;

 out:
 FUNC_4(VAR_5);
 FUNC_0(&VAR_5->serio->dev, "WRITE REG: 0x%02x to 0x%02x (rc = %d)\n",
  VAR_3, VAR_4, VAR_7);
 return VAR_7;
}
