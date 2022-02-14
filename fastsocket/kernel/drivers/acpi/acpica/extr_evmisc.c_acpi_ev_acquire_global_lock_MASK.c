
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef int u16 ;
typedef scalar_t__ acpi_status ;
typedef int acpi_cpu_flags ;
struct TYPE_3__ {int os_mutex; } ;
struct TYPE_4__ {TYPE_1__ mutex; } ;


 int FUNC_0 (int ,void*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 TYPE_2__* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 int VAR_16 ;
 int FUNC_10 (scalar_t__) ;

acpi_status FUNC_11(u16 VAR_17)
{
 acpi_cpu_flags VAR_18;
 acpi_status VAR_19 = VAR_2;
 u8 VAR_20 = VAR_4;

 FUNC_3(VAR_16);





 VAR_19 = FUNC_5(
   VAR_13->mutex.os_mutex, 0);
 if (VAR_19 == VAR_3) {
  if (VAR_9 == FUNC_8()) {
   VAR_6++;
   return VAR_2;
  }
 }

 if (FUNC_2(VAR_19)) {
  VAR_19 = FUNC_5(
    VAR_13->mutex.os_mutex,
    VAR_17);
 }
 if (FUNC_2(VAR_19)) {
  FUNC_10(VAR_19);
 }

 VAR_9 = FUNC_8();
 VAR_6++;
 VAR_12++;
 if (VAR_12 == 0) {
  VAR_12 = 1;
 }





 if (!VAR_14) {
  VAR_11 = VAR_5;
  FUNC_10(VAR_2);
 }

 VAR_18 = FUNC_7(VAR_8);

 do {



  FUNC_0(VAR_10, VAR_20);
  if (VAR_20) {
   VAR_11 = VAR_5;

   FUNC_1((VAR_0,
       "Acquired hardware Global Lock\n"));
   break;
  }

  VAR_7 = VAR_5;

  FUNC_9(VAR_8, VAR_18);





  FUNC_1((VAR_0,
      "Waiting for hardware Global Lock\n"));





  VAR_19 = FUNC_6(
      VAR_15,
      VAR_1);

  VAR_18 = FUNC_7(VAR_8);

 } while (FUNC_4(VAR_19));

 VAR_7 = VAR_4;

 FUNC_9(VAR_8, VAR_18);

 FUNC_10(VAR_19);
}
