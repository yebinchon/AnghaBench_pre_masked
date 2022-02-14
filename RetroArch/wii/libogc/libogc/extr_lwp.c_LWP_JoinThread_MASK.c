
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int s32 ;
typedef int lwp_t ;
struct TYPE_6__ {int id; int * queue; void* ret_arg; int * ret_arg_1; scalar_t__ ret_code; } ;
struct TYPE_7__ {int join_list; TYPE_1__ wait; } ;
typedef TYPE_2__ lwp_cntrl ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 TYPE_2__* VAR_2 ;

s32 FUNC_7(lwp_t VAR_3,void **VAR_4)
{
 u32 VAR_5;
 void *VAR_6;
 lwp_cntrl *VAR_7,*VAR_8;

 VAR_8 = FUNC_2(VAR_3);
 if(!VAR_8) return 0;

 if(FUNC_4(VAR_8)) {
  FUNC_3();
  return VAR_0;
 }

 VAR_7 = VAR_2;
 FUNC_0(VAR_5);
 FUNC_5(&VAR_8->join_list);
 VAR_7->wait.ret_code = 0;
 VAR_7->wait.ret_arg_1 = ((void*)0);
 VAR_7->wait.ret_arg = (void*)&VAR_6;
 VAR_7->wait.queue = &VAR_8->join_list;
 VAR_7->wait.id = VAR_3;
 FUNC_1(VAR_5);
 FUNC_6(&VAR_8->join_list,VAR_1);
 FUNC_3();

 if(VAR_4) *VAR_4 = VAR_6;
 return 0;
}
