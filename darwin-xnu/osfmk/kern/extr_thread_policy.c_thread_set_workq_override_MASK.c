
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int thread_t ;
struct task_pend_token {scalar_t__ tpt_update_sockets; } ;
typedef int spl_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,scalar_t__,int ,struct task_pend_token*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct task_pend_token*) ;
 int FUNC_6 (int ) ;

void
FUNC_7(thread_t VAR_3, uint32_t VAR_4)
{
 struct task_pend_token VAR_5 = {};

 FUNC_0(VAR_4 < VAR_2);

 spl_t VAR_6 = FUNC_2();
 FUNC_4(VAR_3);

 FUNC_1(VAR_3, VAR_0,
   VAR_1, VAR_4, 0, &VAR_5);

 FUNC_0(VAR_5.tpt_update_sockets == 0);

 FUNC_6(VAR_3);
 FUNC_3(VAR_6);

 FUNC_5(VAR_3, &VAR_5);
}
