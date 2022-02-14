
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct serio {TYPE_1__ dev; } ;
struct atkbd {int dev; int event_work; } ;


 int VAR_0 ;
 int FUNC_0 (struct atkbd*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct atkbd*) ;
 int FUNC_4 (struct serio*) ;
 struct atkbd* FUNC_5 (struct serio*) ;
 int FUNC_6 (struct serio*,int *) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static void FUNC_8(struct serio *VAR_1)
{
 struct atkbd *VAR_2 = FUNC_5(VAR_1);

 FUNC_0(VAR_2);


 FUNC_1(&VAR_2->event_work);

 FUNC_7(&VAR_1->dev.kobj, &VAR_0);
 FUNC_2(VAR_2->dev);
 FUNC_4(VAR_1);
 FUNC_6(VAR_1, ((void*)0));
 FUNC_3(VAR_2);
}
