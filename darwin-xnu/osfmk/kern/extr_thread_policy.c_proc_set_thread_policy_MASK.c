
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
struct task_pend_token {int dummy; } ;


 int FUNC_0 (int ,int,int,int,int ,struct task_pend_token*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct task_pend_token*) ;

void
FUNC_4(thread_t VAR_0,
                       int VAR_1,
                       int VAR_2,
                       int VAR_3)
{
 struct task_pend_token VAR_4 = {};

 FUNC_1(VAR_0);

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, 0, &VAR_4);

 FUNC_2(VAR_0);

 FUNC_3(VAR_0, &VAR_4);
}
