
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ card_type; int chipset; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (void*) ;
 int FUNC_1 (void*,char*) ;
 int FUNC_2 (void*,int,int) ;
 int FUNC_3 (void*,int ,int,int) ;

void
FUNC_4(void *VAR_1, u8 VAR_2)
{
 if (FUNC_0(VAR_1)->card_type < VAR_0) {
  u8 VAR_3 = (VAR_2 == 1) ? 3 : VAR_2;
  if (FUNC_0(VAR_1)->chipset == 0x11) {

   FUNC_2(VAR_1, 0, 0x1f);
   FUNC_2(VAR_1, 1, 0x1f);
  }

  FUNC_3(VAR_1, 0, 0x44, VAR_3);

  if (FUNC_0(VAR_1)->chipset == 0x11) {
   FUNC_3(VAR_1, 0, 0x2e, VAR_3);
   FUNC_3(VAR_1, 0, 0x2e, VAR_3);
  }
 } else
  FUNC_1(VAR_1, "wrvgaowner after nv4x\n");
}
