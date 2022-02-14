
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctlr_info {scalar_t__ commands_outstanding; scalar_t__ max_commands; } ;



__attribute__((used)) static unsigned long FUNC_0(struct ctlr_info *VAR_0)
{
 if (VAR_0->commands_outstanding >= VAR_0->max_commands)
  return 1;
 else
  return 0;

}
