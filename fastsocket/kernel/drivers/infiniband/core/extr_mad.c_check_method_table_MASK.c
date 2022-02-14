
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mad_mgmt_method_table {scalar_t__* agent; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ib_mad_mgmt_method_table *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (VAR_1->agent[VAR_2])
   return 1;
 return 0;
}
