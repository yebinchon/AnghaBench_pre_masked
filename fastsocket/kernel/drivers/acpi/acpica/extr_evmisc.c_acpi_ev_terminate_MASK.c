
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_9(void)
{
 u32 VAR_9;
 acpi_status VAR_10;

 FUNC_2(VAR_7);

 if (VAR_4) {







  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
   VAR_10 = FUNC_5(VAR_9, 0);
   if (FUNC_1(VAR_10)) {
    FUNC_0((VAR_2,
         "Could not disable fixed event %d",
         (u32) VAR_9));
   }
  }



  VAR_10 = FUNC_8(VAR_6, ((void*)0));



  VAR_10 = FUNC_7();
  if (FUNC_1(VAR_10)) {
   FUNC_0((VAR_2, "Could not remove SCI handler"));
  }

  VAR_10 = FUNC_6();
  if (FUNC_1(VAR_10)) {
   FUNC_0((VAR_2,
        "Could not remove Global Lock handler"));
  }
 }



 VAR_10 = FUNC_8(VAR_3, ((void*)0));



 if (VAR_5 == VAR_1) {
  VAR_10 = FUNC_4();
  if (FUNC_1(VAR_10)) {
   FUNC_3((VAR_2, "AcpiDisable failed"));
  }
 }
 VAR_8;
}
