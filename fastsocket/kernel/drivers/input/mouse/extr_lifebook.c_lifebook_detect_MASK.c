
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* serio; } ;
struct psmouse {char* vendor; char* name; TYPE_2__ ps2dev; } ;
struct TYPE_3__ {int phys; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

int FUNC_2(struct psmouse *VAR_2, bool VAR_3)
{
        if (!FUNC_0(VAR_1))
                return -1;

 if (VAR_0 &&
     FUNC_1(VAR_2->ps2dev.serio->phys, VAR_0))
  return -1;

 if (VAR_3) {
  VAR_2->vendor = "Fujitsu";
  VAR_2->name = "Lifebook TouchScreen";
 }

        return 0;
}
