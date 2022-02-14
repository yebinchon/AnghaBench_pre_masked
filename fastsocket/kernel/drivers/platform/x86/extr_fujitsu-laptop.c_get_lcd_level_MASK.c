
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ acpi_status ;
struct TYPE_2__ {unsigned long long brightness_level; int brightness_changed; int acpi_handle; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*,int *,unsigned long long*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(void)
{
 unsigned long long VAR_3 = 0;
 acpi_status VAR_4 = VAR_0;

 FUNC_1(VAR_1, "get lcd level via GBLL\n");

 VAR_4 =
     FUNC_0(VAR_2->acpi_handle, "GBLL", ((void*)0), &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_2->brightness_level = VAR_3 & 0x0fffffff;

 if (VAR_3 & 0x80000000)
  VAR_2->brightness_changed = 1;
 else
  VAR_2->brightness_changed = 0;

 return VAR_2->brightness_level;
}
