
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int *,int *,unsigned long long*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(void)
{
 unsigned long long VAR_2 = 0;
 acpi_status VAR_3 = VAR_0;





 if (VAR_1) {
  VAR_3 = FUNC_1(VAR_1, ((void*)0),
        ((void*)0), &VAR_2);
  if (FUNC_0(VAR_3))
   FUNC_2("Error reading display status\n");
 }

 VAR_2 &= 0x0F;

 return VAR_2;
}
