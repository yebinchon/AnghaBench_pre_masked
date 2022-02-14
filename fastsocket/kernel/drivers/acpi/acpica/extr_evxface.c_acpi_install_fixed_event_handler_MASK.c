
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
typedef int acpi_status ;
typedef int * acpi_event_handler ;
struct TYPE_2__ {int * context; int * handler; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int (*) (size_t,int *,void*)) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (size_t) ;
 int FUNC_6 (size_t,int ) ;
 TYPE_1__* VAR_6 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

acpi_status
FUNC_10(u32 VAR_7,
     acpi_event_handler VAR_8, void *VAR_9)
{
 acpi_status VAR_10;

 FUNC_2(FUNC_10);



 if (VAR_7 > VAR_1) {
  FUNC_9(VAR_4);
 }

 VAR_10 = FUNC_7(VAR_2);
 if (FUNC_1(VAR_10)) {
  FUNC_9(VAR_10);
 }



 if (((void*)0) != VAR_6[VAR_7].handler) {
  VAR_10 = VAR_3;
  goto cleanup;
 }



 VAR_6[VAR_7].handler = VAR_8;
 VAR_6[VAR_7].context = VAR_9;

 VAR_10 = FUNC_5(VAR_7);
 if (FUNC_3(VAR_10))
  VAR_10 = FUNC_6(VAR_7, 0);
 if (FUNC_1(VAR_10)) {
  FUNC_4((VAR_5, "Could not enable fixed event %X",
         VAR_7));



  VAR_6[VAR_7].handler = ((void*)0);
  VAR_6[VAR_7].context = ((void*)0);
 } else {
  FUNC_0(*(VAR_0,
      "Enabled fixed event %X, Handler=%p\n", VAR_7,
      VAR_8));
 }

      cleanup:
 (void)FUNC_8(VAR_2);
 FUNC_9(VAR_10);
}
