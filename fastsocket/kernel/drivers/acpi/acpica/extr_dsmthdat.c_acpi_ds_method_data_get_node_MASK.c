
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct acpi_walk_state {struct acpi_namespace_node* arguments; struct acpi_namespace_node* local_variables; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;

acpi_status
FUNC_3(u8 VAR_7,
        u32 VAR_8,
        struct acpi_walk_state *VAR_9,
        struct acpi_namespace_node **VAR_10)
{
 FUNC_1(VAR_6);




 switch (VAR_7) {
 case 128:

  if (VAR_8 > VAR_1) {
   FUNC_0((VAR_3,
        "Local index %d is invalid (max %d)",
        VAR_8, VAR_1));
   FUNC_2(VAR_2);
  }



  *VAR_10 = &VAR_9->local_variables[VAR_8];
  break;

 case 129:

  if (VAR_8 > VAR_0) {
   FUNC_0((VAR_3,
        "Arg index %d is invalid (max %d)",
        VAR_8, VAR_0));
   FUNC_2(VAR_2);
  }



  *VAR_10 = &VAR_9->arguments[VAR_8];
  break;

 default:
  FUNC_0((VAR_3, "Type %d is invalid", VAR_7));
  FUNC_2(VAR_5);
 }

 FUNC_2(VAR_4);
}
