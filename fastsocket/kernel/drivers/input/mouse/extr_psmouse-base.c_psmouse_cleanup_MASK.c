
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct serio {struct serio* parent; TYPE_1__ id; } ;
struct psmouse {int (* pt_deactivate ) (struct psmouse*) ;int ps2dev; int (* cleanup ) (struct psmouse*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (struct psmouse*) ;
 int FUNC_4 (struct psmouse*) ;
 int VAR_2 ;
 int FUNC_5 (struct psmouse*) ;
 struct psmouse* FUNC_6 (struct serio*) ;
 int FUNC_7 (struct psmouse*) ;
 int FUNC_8 (struct psmouse*) ;

__attribute__((used)) static void FUNC_9(struct serio *VAR_3)
{
 struct psmouse *VAR_4 = FUNC_6(VAR_3);
 struct psmouse *VAR_5 = ((void*)0);

 FUNC_0(&VAR_2);

 if (VAR_3->parent && VAR_3->id.type == VAR_1) {
  VAR_5 = FUNC_6(VAR_3->parent);
  FUNC_4(VAR_5);
 }

 FUNC_4(VAR_4);

 if (VAR_4->cleanup)
  VAR_4->cleanup(VAR_4);

 FUNC_5(VAR_4);





 FUNC_2(&VAR_4->ps2dev, ((void*)0), VAR_0);

 if (VAR_5) {
  if (VAR_5->pt_deactivate)
   VAR_5->pt_deactivate(VAR_5);

  FUNC_3(VAR_5);
 }

 FUNC_1(&VAR_2);
}
