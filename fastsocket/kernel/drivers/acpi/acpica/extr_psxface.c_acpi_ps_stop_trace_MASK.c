
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct acpi_evaluate_info {TYPE_2__* resolved_node; } ;
typedef int acpi_status ;
struct TYPE_3__ {scalar_t__ integer; } ;
struct TYPE_4__ {TYPE_1__ name; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct acpi_evaluate_info *VAR_9)
{
 acpi_status VAR_10;

 FUNC_1();

 VAR_10 = FUNC_2(VAR_0);
 if (FUNC_0(VAR_10)) {
  return;
 }

 if ((!VAR_8) ||
     (VAR_8 != VAR_9->resolved_node->name.integer)) {
  goto exit;
 }



 if (VAR_7 & 1) {
  VAR_8 = 0;
  VAR_6 = 0;
  VAR_5 = 0;
 }

 VAR_2 = VAR_4;
 VAR_1 = VAR_3;

      exit:
 (void)FUNC_3(VAR_0);
}
