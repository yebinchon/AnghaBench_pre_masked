
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em_function_data {int (* fn ) () ;int ret; } ;


 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct em_function_data *VAR_1 = VAR_0;
 int VAR_2 = VAR_1->fn();
 if (VAR_2)
  VAR_1->ret = VAR_2;
}
