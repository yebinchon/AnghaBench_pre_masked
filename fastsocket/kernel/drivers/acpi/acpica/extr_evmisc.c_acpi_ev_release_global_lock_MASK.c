
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef int acpi_status ;
struct TYPE_3__ {int os_mutex; } ;
struct TYPE_4__ {TYPE_1__ mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 TYPE_2__* VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_13 ;
 int FUNC_6 (int ) ;

acpi_status FUNC_7(void)
{
 u8 VAR_14 = VAR_6;
 acpi_status VAR_15 = VAR_5;

 FUNC_1(VAR_13);



 if (!VAR_10) {
  FUNC_3((VAR_3,
         "Cannot release the ACPI Global Lock, it has not been acquired"));
  FUNC_6(VAR_4);
 }

 VAR_7--;
 if (VAR_7 > 0) {
  return VAR_5;
 }

 if (VAR_12) {



  FUNC_2(VAR_9, VAR_14);





  if (VAR_14) {
   VAR_15 =
       FUNC_5
       (VAR_0,
        VAR_2);
  }

  FUNC_0((VAR_1,
      "Released hardware Global Lock\n"));
 }

 VAR_10 = VAR_6;


 VAR_8 = ((void*)0);
 VAR_7 = 0;
 FUNC_4(VAR_11->mutex.os_mutex);
 FUNC_6(VAR_15);
}
