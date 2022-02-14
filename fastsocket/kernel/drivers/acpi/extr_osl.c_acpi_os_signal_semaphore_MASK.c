
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct semaphore {int dummy; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct semaphore*) ;

acpi_status FUNC_2(acpi_handle VAR_4, u32 VAR_5)
{
 struct semaphore *VAR_6 = (struct semaphore *)VAR_4;

 if (!VAR_6 || (VAR_5 < 1))
  return VAR_1;

 if (VAR_5 > 1)
  return VAR_3;

 FUNC_0((VAR_0, "Signaling semaphore[%p|%d]\n", VAR_4,
     VAR_5));

 FUNC_1(VAR_6);

 return VAR_2;
}
