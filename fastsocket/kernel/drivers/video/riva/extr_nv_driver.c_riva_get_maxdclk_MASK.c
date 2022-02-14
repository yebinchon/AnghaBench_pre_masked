
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int Architecture; int PFB; int PMC; } ;
struct riva_par {TYPE_1__ riva; } ;
typedef TYPE_1__ RIVA_HW_INST ;







 int FUNC_0 (int ,int) ;

unsigned long FUNC_1(struct riva_par *VAR_0)
{
 RIVA_HW_INST *VAR_1 = &VAR_0->riva;
 unsigned long VAR_2 = 0;

 switch (VAR_1->Architecture) {
 case 132:
  if (FUNC_0(VAR_1->PFB, 0x00000000) & 0x00000020) {
   if (((FUNC_0(VAR_1->PMC, 0x00000000) & 0xF0) == 0x20)
       && ((FUNC_0(VAR_1->PMC,0x00000000)&0x0F) >= 0x02)) {



    VAR_2 = 800000;
   } else {
    VAR_2 = 1000000;
   }
  } else {



   VAR_2 = 1000000;
  }
  break;
 case 131:
 case 130:
 case 129:
 case 128:
  switch ((FUNC_0(VAR_1->PFB, 0x00000000) >> 3) & 0x00000003) {
  case 3:
   VAR_2 = 800000;
   break;
  default:
   VAR_2 = 1000000;
   break;
  }
  break;
 }
 return VAR_2;
}
