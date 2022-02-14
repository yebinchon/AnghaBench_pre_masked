
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int acpi_status ;
struct TYPE_2__ {int handle; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int *,unsigned long long*) ;
 TYPE_1__* VAR_1 ;

int FUNC_2(void)
{
 acpi_status VAR_2;
 unsigned long long VAR_3;

 if (!VAR_1)
  return -VAR_0;

 VAR_2 = FUNC_1(VAR_1->handle, "_LID", ((void*)0),
           &VAR_3);
 if (FUNC_0(VAR_2))
  return -VAR_0;

 return !!VAR_3;
}
