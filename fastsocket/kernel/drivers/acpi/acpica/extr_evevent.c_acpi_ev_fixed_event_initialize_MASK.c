
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
typedef int acpi_status ;
struct TYPE_4__ {int * context; int * handler; } ;
struct TYPE_3__ {int enable_register_id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static acpi_status FUNC_2(void)
{
 u32 VAR_5;
 acpi_status VAR_6;





 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_3[VAR_5].handler = ((void*)0);
  VAR_3[VAR_5].context = ((void*)0);



  if (VAR_4[VAR_5].enable_register_id != 0xFF) {
   VAR_6 =
       FUNC_1(VAR_4
          [VAR_5].enable_register_id,
          VAR_0);
   if (FUNC_0(VAR_6)) {
    return (VAR_6);
   }
  }
 }

 return (VAR_2);
}
