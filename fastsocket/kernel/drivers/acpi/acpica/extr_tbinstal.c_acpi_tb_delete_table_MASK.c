
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_table_desc {int flags; int * pointer; int length; } ;


 int FUNC_0 (int *) ;


 int VAR_0 ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct acpi_table_desc *VAR_1)
{

 if (!VAR_1->pointer) {
  return;
 }
 switch (VAR_1->flags & VAR_0) {
 case 128:
  FUNC_1(VAR_1->pointer, VAR_1->length);
  break;
 case 129:
  FUNC_0(VAR_1->pointer);
  break;
 default:;
 }

 VAR_1->pointer = ((void*)0);
}
