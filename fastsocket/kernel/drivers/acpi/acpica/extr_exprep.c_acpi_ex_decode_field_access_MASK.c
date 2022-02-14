
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_3__ {int bit_length; int start_field_bit_offset; } ;
union acpi_operand_object {TYPE_2__ common; TYPE_1__ common_field; } ;
typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;

 int FUNC_2 (int ,int ,int) ;
 int VAR_3 ;
 int FUNC_3 (int) ;

__attribute__((used)) static u32
FUNC_4(union acpi_operand_object *VAR_4,
       u8 VAR_5, u32 * VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;

 FUNC_1(VAR_3);

 VAR_7 = (VAR_5 & VAR_2);

 switch (VAR_7) {
 case 133:
  VAR_8 = 1;
  VAR_9 = 8;
  break;

 case 131:
 case 132:
  VAR_8 = 1;
  VAR_9 = 8;
  break;

 case 128:
  VAR_8 = 2;
  VAR_9 = 16;
  break;

 case 130:
  VAR_8 = 4;
  VAR_9 = 32;
  break;

 case 129:
  VAR_8 = 8;
  VAR_9 = 64;
  break;

 default:


  FUNC_0((VAR_1, "Unknown field access type %X", VAR_7));
  FUNC_3(0);
 }

 if (VAR_4->common.type == VAR_0) {





  VAR_8 = 1;
 }

 *VAR_6 = VAR_8;
 FUNC_3(VAR_9);
}
