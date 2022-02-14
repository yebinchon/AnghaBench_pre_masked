
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvcs_struct {int p_partition_ID; int p_unit_address; } ;



__attribute__((used)) static int FUNC_0(struct hvcs_struct *VAR_0)
{
 if ((!VAR_0->p_unit_address) || (!VAR_0->p_partition_ID))
  return 0;
 return 1;
}
