
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct semaphore {int dummy; } ;
typedef int acpi_status ;
typedef int **** acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct semaphore* FUNC_1 (int) ;
 int FUNC_2 (struct semaphore*,int ,int) ;
 int FUNC_3 (struct semaphore*,int ) ;

acpi_status
FUNC_4(u32 VAR_3, u32 VAR_4, acpi_handle * VAR_5)
{
 struct semaphore *VAR_6 = ((void*)0);

 VAR_6 = FUNC_1(sizeof(struct semaphore));
 if (!VAR_6)
  return VAR_1;
 FUNC_2(VAR_6, 0, sizeof(struct semaphore));

 FUNC_3(VAR_6, VAR_4);

 *VAR_5 = *(acpi_handle *) VAR_6;

 FUNC_0((VAR_0, "Creating semaphore[%p|%d].\n",
     *VAR_5, VAR_4));

 return VAR_2;
}
