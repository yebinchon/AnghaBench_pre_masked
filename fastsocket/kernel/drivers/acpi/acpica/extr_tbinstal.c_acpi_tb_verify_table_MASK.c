
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_table_desc {int flags; int length; scalar_t__ pointer; int signature; int address; } ;
typedef int acpi_status ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;

acpi_status FUNC_5(struct acpi_table_desc *VAR_6)
{
 acpi_status VAR_7 = VAR_4;

 FUNC_1(VAR_5);



 if (!VAR_6->pointer) {
  if ((VAR_6->flags & VAR_2) ==
      VAR_1) {
   VAR_6->pointer =
       FUNC_2(VAR_6->address,
            VAR_6->length);
  }
  if (!VAR_6->pointer) {
   FUNC_4(VAR_3);
  }
 }



 if (!FUNC_0(&VAR_6->signature, VAR_0)) {



  VAR_7 =
      FUNC_3(VAR_6->pointer,
         VAR_6->length);
 }

 FUNC_4(VAR_7);
}
