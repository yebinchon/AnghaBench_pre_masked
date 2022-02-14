
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_sys_data {int ** resource; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(int VAR_2, struct pci_sys_data *VAR_3)
{
 if (VAR_2 >= 1)
  return 0;

 VAR_3->resource[0] = &VAR_0;
 VAR_3->resource[1] = &VAR_1;
 VAR_3->resource[2] = ((void*)0);

 return 1;
}
