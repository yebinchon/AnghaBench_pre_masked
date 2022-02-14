
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sema; } ;
typedef TYPE_1__ sema_st ;
typedef int sem_t ;
typedef int s32 ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 () ;

s32 FUNC_4(sem_t VAR_0)
{
 sema_st *VAR_1 = FUNC_2(VAR_0);
 if(!VAR_1) return -1;

 FUNC_0(&VAR_1->sema,-1);
 FUNC_3();

 FUNC_1(VAR_1);
 return 0;
}
