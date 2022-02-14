
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ alarm; scalar_t__ done; } ;
union acpi_smb_status {int raw; TYPE_1__ fields; } ;
typedef int u8 ;
struct acpi_smb_hc {int lock; int wait; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct acpi_smb_hc*) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct acpi_smb_hc*,int ,int*) ;
 int FUNC_4 (struct acpi_smb_hc*,int ,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(void *VAR_4)
{
 struct acpi_smb_hc *VAR_5 = VAR_4;
 union acpi_smb_status VAR_6;
 u8 VAR_7;
 if (FUNC_3(VAR_5, VAR_1, &VAR_6.raw))
  return 0;

 if (VAR_6.fields.done)
  FUNC_5(&VAR_5->wait);
 if (!VAR_6.fields.alarm)
  return 0;
 FUNC_1(&VAR_5->lock);
 FUNC_3(VAR_5, VAR_0, &VAR_7);
 VAR_6.fields.alarm = 0;
 FUNC_4(VAR_5, VAR_1, VAR_6.raw);

 switch (VAR_7 >> 1) {
  case 129:
  case 128:
  case 130:
   FUNC_0(VAR_2,
     VAR_3, VAR_5);
  default:;
 }
 FUNC_2(&VAR_5->lock);
 return 0;
}
