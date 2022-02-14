
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_table_header {int dummy; } ;
struct acpi_table_attr {int node; int attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,struct acpi_table_header**) ;
 int FUNC_1 (int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct acpi_table_attr*,struct acpi_table_header*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct acpi_table_attr*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 struct acpi_table_attr* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int ,int *) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_10(void)
{
 struct acpi_table_attr *VAR_10;
 struct acpi_table_header *VAR_11 = ((void*)0);
 int VAR_12 = 0;
 int VAR_13;

 VAR_9 = FUNC_4("tables", VAR_5);
 if (!VAR_9)
  goto err;

 VAR_8 = FUNC_4("dynamic", VAR_9);
 if (!VAR_8)
  goto err_dynamic_tables;

 do {
  VAR_13 = FUNC_0(VAR_12, &VAR_11);
  if (!VAR_13) {
   VAR_12++;
   VAR_10 = ((void*)0);
   VAR_10 =
       FUNC_7(sizeof(struct acpi_table_attr), VAR_3);
   if (!VAR_10)
    return -VAR_2;

   FUNC_2(VAR_10, VAR_11);
   VAR_13 =
       FUNC_9(VAR_9,
        &VAR_10->attr);
   if (VAR_13) {
    FUNC_3(VAR_10);
    return VAR_13;
   } else
    FUNC_8(&VAR_10->node,
           &VAR_7);
  }
 } while (!VAR_13);
 FUNC_6(VAR_9, VAR_4);
 FUNC_6(VAR_8, VAR_4);
 VAR_13 = FUNC_1(VAR_6, ((void*)0));

 return VAR_13 == VAR_0 ? 0 : -VAR_1;
err_dynamic_tables:
 FUNC_5(VAR_9);
err:
 return -VAR_2;
}
