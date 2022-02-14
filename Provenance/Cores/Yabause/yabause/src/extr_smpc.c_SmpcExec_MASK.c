
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ s32 ;
struct TYPE_6__ {int timing; } ;
struct TYPE_5__ {int COMREG; scalar_t__ SF; } ;
struct TYPE_4__ {int LineCount; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_3__* VAR_0 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 TYPE_2__* VAR_1 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;

void FUNC_12(s32 VAR_4) {
   if (VAR_0->timing > 0) {

      if (VAR_2)
      {
         if (VAR_3.LineCount == 207)
         {
            VAR_0->timing = -1;
            VAR_2 = 0;
         }
      }
      VAR_0->timing -= VAR_4;
      if (VAR_0->timing <= 0) {
         switch(VAR_1->COMREG) {
            case 0x0:
               FUNC_0("smpc\t: MSHON not implemented\n");
               break;
            case 0x2:
               FUNC_0("smpc\t: SSHON\n");
               FUNC_11();
               break;
            case 0x3:
               FUNC_0("smpc\t: SSHOFF\n");
               FUNC_10();
               break;
            case 0x6:
               FUNC_0("smpc\t: SNDON\n");
               FUNC_9();
               break;
            case 0x7:
               FUNC_0("smpc\t: SNDOFF\n");
               FUNC_8();
               break;
            case 0x8:
               FUNC_0("smpc\t: CDON not implemented\n");
               break;
            case 0x9:
               FUNC_0("smpc\t: CDOFF not implemented\n");
               break;
            case 0xD:
               FUNC_0("smpc\t: SYSRES not implemented\n");
               break;
            case 0xE:
               FUNC_0("smpc\t: CKCHG352\n");
               FUNC_2();
               break;
            case 0xF:
               FUNC_0("smpc\t: CKCHG320\n");
               FUNC_1();
               break;
            case 0x10:
               FUNC_0("smpc\t: INTBACK\n");
               FUNC_3();
               break;
            case 0x17:
               FUNC_0("smpc\t: SETSMEM\n");
               FUNC_7();
               break;
            case 0x18:
               FUNC_0("smpc\t: NMIREQ\n");
               FUNC_4();
               break;
            case 0x19:
               FUNC_0("smpc\t: RESENAB\n");
               FUNC_6();
               break;
            case 0x1A:
               FUNC_0("smpc\t: RESDISA\n");
               FUNC_5();
               break;
            default:
               FUNC_0("smpc\t: Command %02X not implemented\n", VAR_1->COMREG);
               break;
         }

         VAR_1->SF = 0;
      }
   }
}
