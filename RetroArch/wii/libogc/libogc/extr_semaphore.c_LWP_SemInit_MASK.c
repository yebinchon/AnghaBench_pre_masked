
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int id; } ;
struct TYPE_7__ {TYPE_1__ object; int sema; } ;
typedef TYPE_2__ sema_st ;
typedef scalar_t__ sem_t ;
typedef int s32 ;
struct TYPE_8__ {int mode; int max_cnt; } ;
typedef TYPE_3__ lwp_semattr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (int *,TYPE_3__*,int ) ;
 int FUNC_4 () ;

s32 FUNC_5(sem_t *VAR_2,u32 VAR_3,u32 VAR_4)
{
 lwp_semattr VAR_5;
 sema_st *VAR_6;

 if(!VAR_2) return -1;

 VAR_6 = FUNC_2();
 if(!VAR_6) return -1;

 VAR_5.max_cnt = VAR_4;
 VAR_5.mode = VAR_1;
 FUNC_3(&VAR_6->sema,&VAR_5,VAR_3);

 *VAR_2 = (sem_t)(FUNC_1(VAR_0)|FUNC_0(VAR_6->object.id));
 FUNC_4();
 return 0;
}
