
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MultiExecutorType ;






__attribute__((used)) static char *
FUNC_0(MultiExecutorType VAR_0)
{
 switch (VAR_0)
 {
  case 130:
  {
   return "adaptive";
  }

  case 128:
  {
   return "task-tracker";
  }

  case 129:
  {
   return "insert-select";
  }

  default:
  {
   return "unknown";
  }
 }
}
