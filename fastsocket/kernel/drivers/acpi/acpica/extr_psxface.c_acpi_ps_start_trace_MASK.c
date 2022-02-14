
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
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
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

 VAR_5 = VAR_3;
 VAR_4 = VAR_2;

 VAR_3 = 0x00FFFFFF;
 VAR_2 = VAR_1;

 if (VAR_7) {
  VAR_3 = VAR_7;
 }
 if (VAR_6) {
  VAR_2 = VAR_6;
 }

      exit:
 (void)FUNC_3(VAR_0);
}
