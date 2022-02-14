
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int *,int *,int *) ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int,int ) ;

__attribute__((used)) static int FUNC_5(int VAR_2)
{
 int VAR_3 = 0;
 acpi_status VAR_4 = 0;

 VAR_3 = VAR_2 ? 1 : 0;

 if (VAR_3 == FUNC_2())
  return 0;

 if (VAR_1) {
  VAR_4 = FUNC_1(VAR_1,
           ((void*)0), ((void*)0), ((void*)0));

  if (FUNC_0(VAR_4))
   FUNC_3("Error switching LCD\n");
 }

 FUNC_4(((void*)0), VAR_3, VAR_0);
 return 0;
}
