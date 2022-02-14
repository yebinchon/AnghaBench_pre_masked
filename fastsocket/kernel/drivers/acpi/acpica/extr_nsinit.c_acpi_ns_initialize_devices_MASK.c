
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct acpi_evaluate_info {int dummy; } ;
struct acpi_device_walk_info {scalar_t__ device_count; scalar_t__ num_STA; scalar_t__ num_INI; TYPE_1__* evaluate_info; } ;
typedef int acpi_status ;
struct TYPE_4__ {int flags; int * parameters; int pathname; int prefix_node; } ;


 TYPE_1__* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_8 (int ,int ,int ,int ,int ,struct acpi_device_walk_info*,int *) ;
 int VAR_16 ;
 int FUNC_9 (int ) ;

acpi_status FUNC_10(void)
{
 acpi_status VAR_17;
 struct acpi_device_walk_info VAR_18;

 FUNC_5(VAR_16);



 VAR_18.device_count = 0;
 VAR_18.num_STA = 0;
 VAR_18.num_INI = 0;

 FUNC_1((VAR_0,
         "Initializing Device/Processor/Thermal objects "
         "by executing _INI methods:"));



 VAR_17 = FUNC_8(VAR_4, VAR_3,
     VAR_5, VAR_8,
     VAR_14, &VAR_18, ((void*)0));
 if (FUNC_3(VAR_17)) {
  goto error_exit;
 }



 VAR_18.evaluate_info =
     FUNC_0(sizeof(struct acpi_evaluate_info));
 if (!VAR_18.evaluate_info) {
  VAR_17 = VAR_7;
  goto error_exit;
 }






 VAR_18.evaluate_info->prefix_node = VAR_12;
 VAR_18.evaluate_info->pathname = VAR_9;
 VAR_18.evaluate_info->parameters = ((void*)0);
 VAR_18.evaluate_info->flags = VAR_1;

 VAR_17 = FUNC_7(VAR_18.evaluate_info);
 if (FUNC_6(VAR_17)) {
  VAR_18.num_INI++;
 }



 VAR_17 = FUNC_8(VAR_4, VAR_3,
     VAR_5, VAR_8,
     VAR_15, &VAR_18, ((void*)0));






 if (VAR_11 >= VAR_2) {
  VAR_13 = VAR_10;
 }

 FUNC_4(VAR_18.evaluate_info);
 if (FUNC_3(VAR_17)) {
  goto error_exit;
 }

 FUNC_1((VAR_0,
         "\nExecuted %hd _INI methods requiring %hd _STA executions "
         "(examined %hd objects)\n",
         VAR_18.num_INI, VAR_18.num_STA, VAR_18.device_count));

 FUNC_9(VAR_17);

      error_exit:
 FUNC_2((VAR_6, VAR_17, "During device initialization"));
 FUNC_9(VAR_17);
}
