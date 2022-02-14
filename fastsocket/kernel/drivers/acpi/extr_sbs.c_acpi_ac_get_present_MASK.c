
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct acpi_sbs {int charger_present; int hc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int,int *) ;

__attribute__((used)) static int FUNC_1(struct acpi_sbs *VAR_2)
{
 int VAR_3;
 u16 VAR_4;

 VAR_3 = FUNC_0(VAR_2->hc, VAR_1, VAR_0,
     0x13, (u8 *) & VAR_4);
 if (!VAR_3)
  VAR_2->charger_present = (VAR_4 >> 15) & 0x1;
 return VAR_3;
}
