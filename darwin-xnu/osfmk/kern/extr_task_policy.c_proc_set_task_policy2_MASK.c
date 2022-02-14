
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int task_t ;
struct task_pend_token {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int,int ,int ,int ,int,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int,int,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct task_pend_token*) ;
 int FUNC_6 (int ,struct task_pend_token*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct task_pend_token*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

void
FUNC_11(task_t VAR_4,
                      int VAR_5,
                      int VAR_6,
                      int VAR_7,
                      int VAR_8)
{
 struct task_pend_token VAR_9 = {};

 FUNC_3(VAR_4);

 FUNC_1(VAR_2,
                           (FUNC_0(VAR_6, (VAR_5 | VAR_3))) | VAR_1,
                           FUNC_4(VAR_4), FUNC_9(VAR_4),
                           FUNC_10(VAR_4), VAR_7, 0);

 FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);

 FUNC_6(VAR_4, &VAR_9);

 FUNC_1(VAR_2,
                           (FUNC_0(VAR_6, (VAR_5 | VAR_3))) | VAR_0,
                           FUNC_4(VAR_4), FUNC_9(VAR_4),
                           FUNC_10(VAR_4), FUNC_8(&VAR_9), 0);

 FUNC_7(VAR_4);

 FUNC_5(VAR_4, &VAR_9);
}
