
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tps_key_entry {int keycode; } ;
struct topstar_hkey {int inputdev; } ;
struct acpi_device {int dummy; } ;


 struct topstar_hkey* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 struct tps_key_entry* FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct acpi_device *VAR_0, u32 VAR_1)
{
 struct tps_key_entry *VAR_2;
 static bool VAR_3[2];
 bool *VAR_4;
 struct topstar_hkey *VAR_5 = FUNC_0(VAR_0);


 if (VAR_1 == 0x83 || VAR_1 == 0x84) {
  VAR_4 = &VAR_3[VAR_1 - 0x83];
  if (*VAR_4) {
   *VAR_4 = 0;
   return;
  }
  *VAR_4 = 1;
 }





 if (VAR_1 == 0x97)
  VAR_1 = 0x96;

 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2) {
  FUNC_1(VAR_5->inputdev, VAR_2->keycode, 1);
  FUNC_2(VAR_5->inputdev);
  FUNC_1(VAR_5->inputdev, VAR_2->keycode, 0);
  FUNC_2(VAR_5->inputdev);
  return;
 }


 if (VAR_1 == 0x8e || VAR_1 == 0x8f || VAR_1 == 0x90)
  return;

 FUNC_3("unknown event = 0x%02x\n", VAR_1);
}
