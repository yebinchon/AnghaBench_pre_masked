
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* serio; } ;
struct psmouse {int * private; TYPE_3__ ps2dev; } ;
struct TYPE_4__ {int kobj; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct psmouse *VAR_1)
{
 FUNC_1(&VAR_1->ps2dev.serio->dev.kobj, &VAR_0);

 FUNC_0(VAR_1->private);
 VAR_1->private = ((void*)0);
}
