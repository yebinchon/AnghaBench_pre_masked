
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_buffer {scalar_t__ pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 unsigned long long VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int *,unsigned long long*) ;
 int FUNC_3 (int ,int ,struct acpi_buffer*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*,char*,...) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int
FUNC_6(acpi_handle VAR_4, unsigned long long *VAR_5)
{
 int VAR_6 = -1;
 unsigned long long VAR_7, VAR_8;
 acpi_status VAR_9;
 struct acpi_buffer VAR_10 = { VAR_0, ((void*)0) };

 FUNC_3(VAR_4, VAR_1, &VAR_10);
 FUNC_4("Checking slot on path: %s\n", (char *)VAR_10.pointer);

 if (VAR_3) {

  VAR_9 = FUNC_2(VAR_4, "_STA", ((void*)0), &VAR_8);
  if (FUNC_1(VAR_9) && !(VAR_8 & VAR_2))
   goto out;
 }

 VAR_9 = FUNC_2(VAR_4, "_ADR", ((void*)0), &VAR_7);
 if (FUNC_0(VAR_9)) {
  FUNC_4("_ADR returned %d on %s\n", VAR_9, (char *)VAR_10.pointer);
  goto out;
 }


 VAR_9 = FUNC_2(VAR_4, "_SUN", ((void*)0), VAR_5);
 if (FUNC_0(VAR_9)) {
  FUNC_4("_SUN returned %d on %s\n", VAR_9, (char *)VAR_10.pointer);
  goto out;
 }

 VAR_6 = (VAR_7 >> 16) & 0xffff;
out:
 FUNC_5(VAR_10.pointer);
 return VAR_6;
}
