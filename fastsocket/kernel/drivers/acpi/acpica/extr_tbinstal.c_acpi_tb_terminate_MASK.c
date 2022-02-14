
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {size_t count; int flags; int * tables; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;

void FUNC_6(void)
{
 u32 VAR_5;

 FUNC_2(VAR_4);

 (void)FUNC_4(VAR_1);



 for (VAR_5 = 0; VAR_5 < VAR_3.count; ++VAR_5) {
  FUNC_3(&VAR_3.tables[VAR_5]);
 }





 if (VAR_3.flags & VAR_2) {
  FUNC_1(VAR_3.tables);
 }

 VAR_3.tables = ((void*)0);
 VAR_3.flags = 0;
 VAR_3.count = 0;

 FUNC_0((VAR_0, "ACPI Tables freed\n"));
 (void)FUNC_5(VAR_1);
}
