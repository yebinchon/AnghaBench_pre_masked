
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int PRAMDAC0; } ;
struct riva_par {int FlatPanel; int Chipset; void* SecondCRTC; TYPE_1__ riva; } ;


 void* VAR_0 ;
 int FUNC_0 (int ,int) ;
 void* VAR_1 ;
 scalar_t__ FUNC_1 (struct riva_par*,int) ;
 int FUNC_2 (struct riva_par*) ;

__attribute__((used)) static void
FUNC_3(struct riva_par *VAR_2)
{
 if (VAR_2->FlatPanel == 1) {
  switch(VAR_2->Chipset & 0xffff) {
  case 0x0174:
  case 0x0175:
  case 0x0176:
  case 0x0177:
  case 0x0179:
  case 0x017C:
  case 0x017D:
  case 0x0186:
  case 0x0187:

  case 0x0286:
  case 0x028C:
  case 0x0316:
  case 0x0317:
  case 0x031A:
  case 0x031B:
  case 0x031C:
  case 0x031D:
  case 0x031E:
  case 0x031F:
  case 0x0324:
  case 0x0325:
  case 0x0328:
  case 0x0329:
  case 0x032C:
  case 0x032D:
   VAR_2->SecondCRTC = VAR_1;
   break;
  default:
   VAR_2->SecondCRTC = VAR_0;
   break;
  }
 } else {
  if(FUNC_1(VAR_2, 0)) {

   if (FUNC_0(VAR_2->riva.PRAMDAC0, 0x0000052C) & 0x100)
    VAR_2->SecondCRTC = VAR_1;
   else
    VAR_2->SecondCRTC = VAR_0;
  } else
  if (FUNC_1(VAR_2, 1)) {
   if(FUNC_0(VAR_2->riva.PRAMDAC0, 0x0000252C) & 0x100)
    VAR_2->SecondCRTC = VAR_1;
   else
    VAR_2->SecondCRTC = VAR_0;
  } else
   VAR_2->SecondCRTC = VAR_0;
 }
 FUNC_2(VAR_2);
}
