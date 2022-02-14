
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* coalition_t ;
struct TYPE_11__ {int active_count; int type; int id; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,void*,void (*) (TYPE_1__*,void*,VAR_1)) ;
 int FUNC_2 (char*,TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_2 ;

void FUNC_6(coalition_t VAR_3, void *VAR_4,
        void (*VAR_5)(coalition_t, void *, VAR_6))
{
 FUNC_0(VAR_3 != VAR_0);

 FUNC_2("iterating tasks in coalition %p id:%llu type:%s, active_count:%u",
   VAR_3, VAR_3->id, FUNC_3(VAR_3->type), VAR_3->active_count);

 FUNC_4(VAR_3);

 FUNC_1(VAR_3, VAR_2, VAR_4, VAR_5);

 FUNC_5(VAR_3);
}
