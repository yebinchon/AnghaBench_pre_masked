
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_dtrace_helpers; } ;
typedef TYPE_1__ proc_t ;
struct TYPE_6__ {void* dthps_actions; } ;
typedef TYPE_2__ dtrace_helpers_t ;
typedef int dtrace_helper_action_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_2 (int,int ) ;

__attribute__((used)) static dtrace_helpers_t *
FUNC_3(proc_t *VAR_5)
{
 dtrace_helpers_t *VAR_6;

 FUNC_1(&VAR_4, VAR_2);
 FUNC_0(VAR_5->p_dtrace_helpers == ((void*)0));

 VAR_6 = FUNC_2(sizeof (dtrace_helpers_t), VAR_1);
 VAR_6->dthps_actions = FUNC_2(sizeof (dtrace_helper_action_t *) *
     VAR_0, VAR_1);

 VAR_5->p_dtrace_helpers = VAR_6;
 VAR_3++;

 return (VAR_6);
}
