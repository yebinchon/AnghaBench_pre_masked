
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct task_pend_token {int dummy; } ;
struct TYPE_7__ {int base_pri; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int,int ,int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,struct task_pend_token*) ;
 int FUNC_5 (TYPE_1__*) ;

void
FUNC_6(thread_t VAR_7)
{
 FUNC_1(VAR_4,
                           (FUNC_0(VAR_2, (VAR_3 | VAR_5))) | VAR_1,
                           FUNC_5(VAR_7), FUNC_2(VAR_7),
                           FUNC_3(VAR_7), VAR_7->base_pri, 0);


 struct task_pend_token VAR_8 = {};

 FUNC_4(VAR_7, VAR_6, &VAR_8);

 FUNC_1(VAR_4,
                           (FUNC_0(VAR_2, (VAR_3 | VAR_5))) | VAR_0,
                           FUNC_5(VAR_7), FUNC_2(VAR_7),
                           FUNC_3(VAR_7), VAR_7->base_pri, 0);
}
