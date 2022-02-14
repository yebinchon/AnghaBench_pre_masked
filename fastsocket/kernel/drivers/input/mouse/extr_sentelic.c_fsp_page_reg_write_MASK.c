
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
 int FUNC_0 (int *,char*,int,int) ;
 unsigned char FUNC_1 (int) ;
 unsigned char FUNC_2 (int) ;
 int FUNC_3 (struct ps2dev*) ;
 int FUNC_4 (struct ps2dev*) ;
 scalar_t__ FUNC_5 (struct ps2dev*,unsigned char,int ) ;

__attribute__((used)) static int FUNC_6(struct psmouse *VAR_2, int VAR_3)
{
 struct ps2dev *VAR_4 = &VAR_2->ps2dev;
 unsigned char VAR_5;
 int VAR_6 = -1;

 FUNC_3(VAR_4);

 if (FUNC_5(VAR_4, 0xf3, VAR_0) < 0)
  goto out;

 FUNC_5(VAR_4, 0x38, VAR_1);
 FUNC_5(VAR_4, 0x88, VAR_1);

 if (FUNC_5(VAR_4, 0xf3, VAR_0) < 0)
  return -1;

 if ((VAR_5 = FUNC_1(VAR_3)) != VAR_3) {
  FUNC_5(VAR_4, 0x47, VAR_1);
 } else if ((VAR_5 = FUNC_2(VAR_3)) != VAR_3) {

  FUNC_5(VAR_4, 0x44, VAR_1);
 } else {

  FUNC_5(VAR_4, 0x33, VAR_1);
 }

 FUNC_5(VAR_4, VAR_5, VAR_1);
 VAR_6 = 0;

 out:
 FUNC_4(VAR_4);
 FUNC_0(&VAR_4->serio->dev, "WRITE PAGE REG: to 0x%02x (rc = %d)\n",
  VAR_3, VAR_6);
 return VAR_6;
}
