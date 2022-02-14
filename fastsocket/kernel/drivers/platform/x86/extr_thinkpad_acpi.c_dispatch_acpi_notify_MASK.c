
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ibm_struct {TYPE_1__* acpi; } ;
typedef int acpi_handle ;
struct TYPE_2__ {int (* notify ) (struct ibm_struct*,int ) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ibm_struct*,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1(acpi_handle VAR_2, u32 VAR_3, void *VAR_4)
{
 struct ibm_struct *VAR_5 = VAR_4;

 if (VAR_1 != VAR_0)
  return;

 if (!VAR_5 || !VAR_5->acpi || !VAR_5->acpi->notify)
  return;

 VAR_5->acpi->notify(VAR_5, VAR_3);
}
