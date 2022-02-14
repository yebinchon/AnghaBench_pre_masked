
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; } ;
union acpi_object {TYPE_1__ integer; int member_0; } ;
struct acpi_object_list {int member_0; union acpi_object* member_1; } ;
typedef int acpi_status ;
typedef int * acpi_handle ;
struct TYPE_4__ {int max_brightness; int acpi_handle; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int *,struct acpi_object_list*,int *) ;
 int FUNC_2 (int ,char*,int **) ;
 TYPE_2__* VAR_6 ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static int FUNC_4(int VAR_7)
{
 acpi_status VAR_8 = VAR_1;
 union acpi_object VAR_9 = { VAR_0 };
 struct acpi_object_list VAR_10 = { 1, &VAR_9 };
 acpi_handle VAR_11 = ((void*)0);

 FUNC_3(VAR_5, "set lcd level via SBLL [%d]\n",
      VAR_7);

 if (VAR_7 < 0 || VAR_7 >= VAR_6->max_brightness)
  return -VAR_2;

 VAR_8 = FUNC_2(VAR_6->acpi_handle, "SBLL", &VAR_11);
 if (FUNC_0(VAR_8)) {
  FUNC_3(VAR_4, "SBLL not present\n");
  return -VAR_3;
 }

 VAR_9 = VAR_7;

 VAR_8 = FUNC_1(VAR_11, ((void*)0), &VAR_10, ((void*)0));
 if (FUNC_0(VAR_8))
  return -VAR_3;

 return 0;
}
