
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_namespace_node {struct acpi_namespace_node* parent; int name; } ;
typedef int acpi_status ;
typedef int acpi_size ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int *) ;
 int VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char VAR_5 ;
 struct acpi_namespace_node* VAR_6 ;

acpi_status
FUNC_3(struct acpi_namespace_node *VAR_7,
       acpi_size VAR_8, char *VAR_9)
{
 acpi_size VAR_10;
 struct acpi_namespace_node *VAR_11;

 FUNC_1();



 VAR_10 = VAR_8 - 1;
 if (VAR_10 < VAR_0) {
  VAR_9[0] = VAR_5;
  VAR_9[1] = 0;
  return (VAR_4);
 }



 VAR_11 = VAR_7;
 VAR_9[VAR_10] = 0;

 while ((VAR_10 > VAR_0) && (VAR_11 != VAR_6)) {
  VAR_10 -= VAR_0;



  FUNC_2((VAR_9 + VAR_10), &VAR_11->name);
  VAR_11 = VAR_11->parent;



  VAR_10--;
  VAR_9[VAR_10] = VAR_1;
 }



 VAR_9[VAR_10] = VAR_5;

 if (VAR_10 != 0) {
  FUNC_0((VAR_3,
       "Could not construct external pathname; index=%X, size=%X, Path=%s",
       (u32) VAR_10, (u32) VAR_8, &VAR_9[VAR_8]));

  return (VAR_2);
 }

 return (VAR_4);
}
