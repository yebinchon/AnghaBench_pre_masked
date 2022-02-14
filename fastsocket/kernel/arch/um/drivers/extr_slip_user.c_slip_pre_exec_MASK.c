
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slip_pre_exec_data {scalar_t__ stdin; scalar_t__ stdout; scalar_t__ close_me; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct slip_pre_exec_data *VAR_1 = VAR_0;

 if (VAR_1->stdin >= 0)
  FUNC_1(VAR_1->stdin, 0);
 FUNC_1(VAR_1->stdout, 1);
 if (VAR_1->close_me >= 0)
  FUNC_0(VAR_1->close_me);
}
