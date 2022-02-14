
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct acpi_sbs {int hc; scalar_t__ manager_present; } ;
struct acpi_battery {int id; int alarm_capacity; struct acpi_sbs* sbs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int,int *) ;
 int FUNC_1 (int ,int ,int ,int,int *,int) ;

__attribute__((used)) static int FUNC_2(struct acpi_battery *VAR_4)
{
 struct acpi_sbs *VAR_5 = VAR_4->sbs;
 u16 VAR_6, VAR_7 = 1 << (VAR_4->id + 12);

 int VAR_8;


 if (VAR_5->manager_present) {
  VAR_8 = FUNC_0(VAR_5->hc, VAR_2, VAR_1,
    0x01, (u8 *)&VAR_6);
  if (VAR_8)
   goto end;
  if ((VAR_6 & 0xf000) != VAR_7) {
   VAR_6 &= 0x0fff;
   VAR_6 |= VAR_7;
  VAR_8 = FUNC_1(VAR_5->hc, VAR_3,
      VAR_1,
      0x01, (u8 *)&VAR_6, 2);
  if (VAR_8)
   goto end;
  }
 }
 VAR_8 = FUNC_1(VAR_5->hc, VAR_3, VAR_0,
    0x01, (u8 *)&VAR_4->alarm_capacity, 2);
      end:
 return VAR_8;
}
