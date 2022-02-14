
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int tqueue; } ;
typedef TYPE_2__ tqueue_st ;
typedef int s32 ;
typedef int lwpq_t ;
struct TYPE_6__ {int id; int * queue; int * ret_arg_1; int * ret_arg; scalar_t__ ret_code; } ;
struct TYPE_8__ {TYPE_1__ wait; } ;
typedef TYPE_3__ lwp_cntrl ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 TYPE_2__* FUNC_5 (int ) ;
 TYPE_3__* VAR_1 ;

s32 FUNC_6(lwpq_t VAR_2)
{
 u32 VAR_3;
 tqueue_st *VAR_4;
 lwp_cntrl *VAR_5 = ((void*)0);

 VAR_4 = FUNC_5(VAR_2);
 if(!VAR_4) return -1;

 VAR_5 = VAR_1;
 FUNC_0(VAR_3);
 FUNC_3(&VAR_4->tqueue);
 VAR_5->wait.ret_code = 0;
 VAR_5->wait.ret_arg = ((void*)0);
 VAR_5->wait.ret_arg_1 = ((void*)0);
 VAR_5->wait.queue = &VAR_4->tqueue;
 VAR_5->wait.id = VAR_2;
 FUNC_1(VAR_3);
 FUNC_4(&VAR_4->tqueue,VAR_0);
 FUNC_2();
 return 0;
}
