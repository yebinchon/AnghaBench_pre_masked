
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int timing; int intback; } ;
struct TYPE_3__ {int COMREG; int* IREG; int SF; } ;


 int FUNC_0 (char*,...) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(void) {
   switch(VAR_1->COMREG) {
      case 0x0:
         FUNC_0("smpc\t: MSHON not implemented\n");
         VAR_0->timing = 1;
         return;
      case 0x8:
         FUNC_0("smpc\t: CDON not implemented\n");
         VAR_0->timing = 1;
         return;
      case 0x9:
         FUNC_0("smpc\t: CDOFF not implemented\n");
         VAR_0->timing = 1;
         return;
      case 0xD:
      case 0xE:
      case 0xF:
         VAR_0->timing = 1;
         return;
      case 0x10:
         if (VAR_0->intback)
         {
            VAR_0->timing = 16000;
            VAR_2 = 1;
         }
         else {


            if ((VAR_1->IREG[0] == 0x01) && (VAR_1->IREG[1] & 0x8))
            {

               VAR_0->timing = 250;
            }
            else if ((VAR_1->IREG[0] == 0x01) && ((VAR_1->IREG[1] & 0x8) == 0))
            {

               VAR_0->timing = 250;
            }
            else if ((VAR_1->IREG[0] == 0) && (VAR_1->IREG[1] & 0x8))
            {

             VAR_0->timing = 16000;
               VAR_2 = 1;
            }
         }
         return;
      case 0x17:
         VAR_0->timing = 1;
         return;
      case 0x2:
         VAR_0->timing = 1;
         return;
      case 0x3:
         VAR_0->timing = 1;
         return;
      case 0x6:
      case 0x7:
      case 0x18:
      case 0x19:
      case 0x1A:
         VAR_0->timing = 1;
         return;
      default:
         FUNC_0("smpc\t: unimplemented command: %02X\n", VAR_1->COMREG);
         VAR_1->SF = 0;
         break;
   }
}
