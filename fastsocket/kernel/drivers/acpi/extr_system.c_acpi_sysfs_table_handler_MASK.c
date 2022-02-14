
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_table_attr {int node; int attr; } ;
typedef int acpi_status ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct acpi_table_attr*,void*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct acpi_table_attr*) ;
 struct acpi_table_attr* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static acpi_status
FUNC_5(u32 VAR_7, void *VAR_8, void *VAR_9)
{
 struct acpi_table_attr *VAR_10;

 switch (VAR_7) {
 case 129:
  VAR_10 =
   FUNC_2(sizeof(struct acpi_table_attr), VAR_4);
  if (!VAR_10)
   return VAR_2;

  FUNC_0(VAR_10, VAR_8);
  if (FUNC_4(VAR_6,
     &VAR_10->attr)) {
   FUNC_1(VAR_10);
   return VAR_1;
  } else
   FUNC_3(&VAR_10->node,
     &VAR_5);
  break;
 case 128:





  break;
 default:
  return VAR_0;
 }
 return VAR_3;
}
