
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* serio; } ;
struct psmouse {TYPE_1__ ps2dev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct psmouse*,int ,int*) ;
 int FUNC_2 (struct psmouse*,int ,int) ;
 int FUNC_3 (struct psmouse*,int) ;

__attribute__((used)) static int FUNC_4(struct psmouse *VAR_3, bool VAR_4)
{
 int VAR_5, VAR_6;
 int VAR_7 = 0;

 if (FUNC_1(VAR_3, VAR_2, &VAR_5) == -1) {
  FUNC_0(&VAR_3->ps2dev.serio->dev, "Unable get OPC state.\n");
  return -VAR_0;
 }

 if (VAR_4)
  VAR_6 = VAR_5 | VAR_1;
 else
  VAR_6 = VAR_5 & ~VAR_1;


 if (VAR_6 != VAR_5) {
  FUNC_3(VAR_3, 1);
  VAR_7 = FUNC_2(VAR_3, VAR_2, VAR_6);
  FUNC_3(VAR_3, 0);
 }

 if (VAR_7 != 0) {
  FUNC_0(&VAR_3->ps2dev.serio->dev,
   "Unable to enable OPC tag.\n");
  VAR_7 = -VAR_0;
 }

 return VAR_7;
}
