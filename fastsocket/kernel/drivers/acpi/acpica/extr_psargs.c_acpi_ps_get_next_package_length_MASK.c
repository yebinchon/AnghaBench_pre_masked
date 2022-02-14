
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct acpi_parse_state {int* aml; } ;
typedef scalar_t__ acpi_size ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static u32
FUNC_2(struct acpi_parse_state *VAR_1)
{
 u8 *VAR_2 = VAR_1->aml;
 u32 VAR_3 = 0;
 u32 VAR_4;
 u8 VAR_5 = 0x3F;

 FUNC_0(VAR_0);





 VAR_4 = (VAR_2[0] >> 6);
 VAR_1->aml += ((acpi_size) VAR_4 + 1);



 while (VAR_4) {







  VAR_3 |= (VAR_2[VAR_4] << ((VAR_4 << 3) - 4));

  VAR_5 = 0x0F;
  VAR_4--;
 }



 VAR_3 |= (VAR_2[0] & VAR_5);
 FUNC_1(VAR_3);
}
