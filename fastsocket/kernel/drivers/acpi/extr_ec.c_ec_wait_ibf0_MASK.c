
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec {int wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct acpi_ec*) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (int ,int ,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct acpi_ec *VAR_3)
{
 unsigned long VAR_4 = VAR_2 + FUNC_1(VAR_0);

 while (FUNC_2(VAR_2, VAR_4))
  if (FUNC_3(VAR_3->wait, FUNC_0(VAR_3),
     FUNC_1(1)))
   return 0;
 return -VAR_1;
}
