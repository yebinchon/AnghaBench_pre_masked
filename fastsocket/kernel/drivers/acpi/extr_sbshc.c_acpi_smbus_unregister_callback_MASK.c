
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_smb_hc {int lock; int * context; int * callback; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct acpi_smb_hc *VAR_0)
{
 FUNC_0(&VAR_0->lock);
 VAR_0->callback = ((void*)0);
 VAR_0->context = ((void*)0);
 FUNC_1(&VAR_0->lock);
 return 0;
}
