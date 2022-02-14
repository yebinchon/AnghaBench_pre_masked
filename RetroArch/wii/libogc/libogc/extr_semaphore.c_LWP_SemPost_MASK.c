
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ object; int sema; } ;
typedef TYPE_2__ sema_st ;
typedef int sem_t ;
typedef int s32 ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 () ;

s32 FUNC_3(sem_t VAR_0)
{
 sema_st *VAR_1 = FUNC_0(VAR_0);
 if(!VAR_1) return -1;

 FUNC_1(&VAR_1->sema,VAR_1->object.id);
 FUNC_2();

 return 0;
}
