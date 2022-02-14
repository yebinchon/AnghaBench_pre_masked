
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int acpi_status ;
typedef int acpi_cpu_flags ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static u32 FUNC_5(void *VAR_6)
{
 acpi_status VAR_7;
 acpi_cpu_flags VAR_8;

 VAR_8 = FUNC_2(VAR_4);

 if (!VAR_3) {
  goto out;
 }



 VAR_7 = FUNC_4(VAR_5, 1);
 if (FUNC_1(VAR_7)) {
  FUNC_0((VAR_1, "Could not signal Global Lock semaphore"));
 }

 VAR_3 = VAR_2;

 out:
 FUNC_3(VAR_4, VAR_8);

 return (VAR_0);
}
