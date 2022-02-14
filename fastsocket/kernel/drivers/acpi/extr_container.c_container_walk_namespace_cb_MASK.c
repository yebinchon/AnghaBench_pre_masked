
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {char* string; } ;
struct acpi_device_info {int valid; TYPE_1__ hardware_id; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_1 (int ,struct acpi_device_info**) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct acpi_device_info*) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static acpi_status
FUNC_6(acpi_handle VAR_4,
       u32 VAR_5, void *VAR_6, void **VAR_7)
{
 char *VAR_8 = ((void*)0);
 struct acpi_device_info *VAR_9;
 acpi_status VAR_10;
 int *VAR_11 = VAR_6;

 VAR_10 = FUNC_1(VAR_4, &VAR_9);
 if (FUNC_0(VAR_10)) {
  return VAR_2;
 }

 if (VAR_9->valid & VAR_1)
  VAR_8 = VAR_9->hardware_id.string;

 if (VAR_8 == ((void*)0)) {
  goto end;
 }

 if (FUNC_5(VAR_8, "ACPI0004") && FUNC_5(VAR_8, "PNP0A05") &&
     FUNC_5(VAR_8, "PNP0A06")) {
  goto end;
 }

 switch (*VAR_11) {
 case 129:
  FUNC_2(VAR_4,
         VAR_0,
         VAR_3, ((void*)0));
  break;
 case 128:
  FUNC_3(VAR_4,
        VAR_0,
        VAR_3);
  break;
 default:
  break;
 }

      end:
 FUNC_4(VAR_9);

 return VAR_2;
}
