
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_4__ {size_t mslc; TYPE_1__* slot; } ;
struct TYPE_3__ {int addr_counter; int env_phase; int last_env; } ;






 int VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static u16 FUNC_0(void)
{
   u8 VAR_2, VAR_3, VAR_4;

   VAR_2 = (VAR_1.slot[VAR_1.mslc].addr_counter >> (VAR_0 + 12)) & 0xF;

   switch (VAR_1.slot[VAR_1.mslc].env_phase) {
      case 131:
         VAR_3 = 0;
         break;
      case 130:
         VAR_3 = 1;
         break;
      case 128:
         VAR_3 = 2;
         break;
      case 129:
         VAR_3 = 3;
         break;
   }

   VAR_4 = 0x1f - (VAR_1.slot[VAR_1.mslc].last_env >> 27);

   return (VAR_2 << 7) | (VAR_3 << 5) | VAR_4;
}
