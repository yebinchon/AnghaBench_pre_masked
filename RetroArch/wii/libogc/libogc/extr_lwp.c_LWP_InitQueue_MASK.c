
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ object; int tqueue; } ;
typedef TYPE_2__ tqueue_st ;
typedef int s32 ;
typedef scalar_t__ lwpq_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,int ,int ) ;
 TYPE_2__* FUNC_4 () ;

s32 FUNC_5(lwpq_t *VAR_3)
{
 tqueue_st *VAR_4;

 if(!VAR_3) return -1;

 VAR_4 = FUNC_4();
 if(!VAR_4) return -1;

 FUNC_3(&VAR_4->tqueue,VAR_2,VAR_1,0);

 *VAR_3 = (lwpq_t)(FUNC_1(VAR_0)|FUNC_0(VAR_4->object.id));
 FUNC_2();

 return 0;
}
