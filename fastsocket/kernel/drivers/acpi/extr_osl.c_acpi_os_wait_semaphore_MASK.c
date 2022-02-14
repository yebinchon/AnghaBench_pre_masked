
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct semaphore {int dummy; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct semaphore*,long) ;
 long FUNC_4 (scalar_t__) ;

acpi_status FUNC_5(acpi_handle VAR_7, u32 VAR_8, u16 VAR_9)
{
 acpi_status VAR_10 = VAR_3;
 struct semaphore *VAR_11 = (struct semaphore *)VAR_7;
 long VAR_12;
 int VAR_13 = 0;

 if (!VAR_11 || (VAR_8 < 1))
  return VAR_2;

 if (VAR_8 > 1)
  return VAR_4;

 FUNC_0((VAR_0, "Waiting for semaphore[%p|%d|%d]\n",
     VAR_7, VAR_8, VAR_9));

 if (VAR_9 == VAR_1)
  VAR_12 = VAR_6;
 else
  VAR_12 = FUNC_4(VAR_9);

 VAR_13 = FUNC_3(VAR_11, VAR_12);
 if (VAR_13)
  VAR_10 = VAR_5;

 if (FUNC_1(VAR_10)) {
  FUNC_0((VAR_0,
      "Failed to acquire semaphore[%p|%d|%d], %s",
      VAR_7, VAR_8, VAR_9,
      FUNC_2(VAR_10)));
 } else {
  FUNC_0((VAR_0,
      "Acquired semaphore[%p|%d|%d]", VAR_7,
      VAR_8, VAR_9));
 }

 return VAR_10;
}
