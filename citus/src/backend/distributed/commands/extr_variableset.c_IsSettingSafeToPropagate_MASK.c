
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t Index ;


 size_t FUNC_0 (char const**) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static bool
FUNC_2(char *VAR_0)
{

 const char *VAR_1[] = {
  "citus.propagate_set_commands",
  "client_encoding",
  "exit_on_error",
  "max_stack_depth"
 };
 Index VAR_2 = 0;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++)
 {
  if (FUNC_1(VAR_1[VAR_2], VAR_0) == 0)
  {
   return 0;
  }
 }

 return 1;
}
