
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* serio; } ;
struct psmouse {TYPE_5__ ps2dev; } ;
struct TYPE_6__ {scalar_t__ event; } ;
struct TYPE_7__ {TYPE_1__ power_state; } ;
struct TYPE_8__ {TYPE_2__ power; } ;
struct TYPE_9__ {TYPE_3__ dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct psmouse*) ;

__attribute__((used)) static int FUNC_3(struct psmouse *VAR_1)
{



 if (FUNC_1(FUNC_0(0xb2)))
  if (VAR_1->ps2dev.serio->dev.power.power_state.event !=
    VAR_0)
   return 0;

 FUNC_2(VAR_1);

 return 0;
}
