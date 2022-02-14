
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_smb_hc {int wait; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct acpi_smb_hc*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct acpi_smb_hc *VAR_1, int VAR_2)
{
 if (FUNC_2(VAR_1->wait, FUNC_1(VAR_1),
          FUNC_0(VAR_2)))
  return 0;





 if (FUNC_1(VAR_1))
  return 0;
 else
  return -VAR_0;
}
