
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,struct acpi_namespace_node*) ;
 int FUNC_5 (int ,struct acpi_namespace_node*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int VAR_4 ;
 int FUNC_12 (int ) ;

acpi_status
FUNC_13(u32 VAR_5, struct acpi_namespace_node *VAR_6)
{
 acpi_status VAR_7;

 FUNC_2(VAR_4);
 VAR_7 = FUNC_10(VAR_1);
 if (FUNC_1(VAR_7)) {
  FUNC_12(VAR_7);
 }



 if (FUNC_7(VAR_5)) {
  VAR_7 = VAR_2;
  goto unlock;
 }

 FUNC_0((VAR_0,
     "**** Loading table into namespace ****\n"));

 VAR_7 = FUNC_6(VAR_5);
 if (FUNC_1(VAR_7)) {
  goto unlock;
 }

 VAR_7 = FUNC_5(VAR_5, VAR_6);
 if (FUNC_3(VAR_7)) {
  FUNC_9(VAR_5, VAR_3);
 } else {
  (void)FUNC_8(VAR_5);
 }

      unlock:
 (void)FUNC_11(VAR_1);

 if (FUNC_1(VAR_7)) {
  FUNC_12(VAR_7);
 }







 FUNC_0((VAR_0,
     "**** Begin Table Method Parsing and Object Initialization\n"));

 VAR_7 = FUNC_4(VAR_5, VAR_6);

 FUNC_0((VAR_0,
     "**** Completed Table Method Parsing and Object Initialization\n"));

 FUNC_12(VAR_7);
}
