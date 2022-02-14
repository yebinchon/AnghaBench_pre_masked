
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int serio; } ;
struct psmouse {TYPE_1__ ps2dev; } ;
typedef enum psmouse_state { ____Placeholder_psmouse_state } psmouse_state ;


 int FUNC_0 (struct psmouse*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct psmouse *VAR_0, enum psmouse_state VAR_1)
{
 FUNC_2(VAR_0->ps2dev.serio);
 FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_0->ps2dev.serio);
}
