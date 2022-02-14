
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct cm_work {int cm_event; } ;
struct TYPE_4__ {int (* cm_handler ) (TYPE_1__*,int *) ;} ;
struct cm_id_private {TYPE_1__ id; int lock; int work_count; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int *) ;
 struct cm_work* FUNC_2 (struct cm_id_private*) ;
 int FUNC_3 (struct cm_id_private*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (struct cm_work*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_10(struct cm_id_private *VAR_0,
       struct cm_work *VAR_1)
{
 int VAR_2;


 VAR_2 = VAR_0->id.cm_handler(&VAR_0->id, &VAR_1->cm_event);
 FUNC_5(VAR_1);

 while (!VAR_2 && !FUNC_1(-1, &VAR_0->work_count)) {
  FUNC_6(&VAR_0->lock);
  VAR_1 = FUNC_2(VAR_0);
  FUNC_7(&VAR_0->lock);
  FUNC_0(!VAR_1);
  VAR_2 = VAR_0->id.cm_handler(&VAR_0->id,
      &VAR_1->cm_event);
  FUNC_5(VAR_1);
 }
 FUNC_3(VAR_0);
 if (VAR_2)
  FUNC_4(&VAR_0->id, VAR_2);
}
