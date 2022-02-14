
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_14__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_15__ {int all; } ;
struct TYPE_26__ {int all; } ;
struct TYPE_24__ {int all; } ;
struct TYPE_22__ {int all; } ;
struct TYPE_20__ {int P; } ;
struct TYPE_21__ {TYPE_2__ part; int all; } ;
struct TYPE_17__ {TYPE_10__ MUL; TYPE_8__ ALU; TYPE_6__ P; TYPE_4__ AC; int WA0; int RA0; int RY; int RX; int CT; int DataRamReadAddress; int DataRamPage; int delayed; int jmpaddr; int LOP; int TOP; int PC; TYPE_3__ ProgControlPort; int MD; int ProgramRam; } ;
typedef TYPE_12__ scudspregs_struct ;
struct TYPE_27__ {int all; } ;
struct TYPE_25__ {int all; } ;
struct TYPE_23__ {int all; } ;
struct TYPE_19__ {int all; } ;
struct TYPE_16__ {int all; } ;
struct TYPE_18__ {TYPE_11__ MUL; TYPE_9__ ALU; TYPE_7__ P; TYPE_5__ AC; int WA0; int RA0; int RY; int RX; int CT; int DataRamReadAddress; int DataRamPage; int delayed; int jmpaddr; int LOP; int TOP; int PC; TYPE_1__ ProgControlPort; int MD; int ProgramRam; } ;


 TYPE_14__* VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

void FUNC_1(scudspregs_struct *VAR_1) {
   if (VAR_1 != ((void*)0)) {
      FUNC_0(VAR_1->ProgramRam, VAR_0->ProgramRam, sizeof(u32) * 256);
      FUNC_0(VAR_1->MD, VAR_0->MD, sizeof(u32) * 64 * 4);

      VAR_1->ProgControlPort.all = VAR_0->ProgControlPort.all;
      VAR_1->ProgControlPort.part.P = VAR_1->PC = VAR_0->PC;
      VAR_1->TOP = VAR_0->TOP;
      VAR_1->LOP = VAR_0->LOP;
      VAR_1->jmpaddr = VAR_0->jmpaddr;
      VAR_1->delayed = VAR_0->delayed;
      VAR_1->DataRamPage = VAR_0->DataRamPage;
      VAR_1->DataRamReadAddress = VAR_0->DataRamReadAddress;
      FUNC_0(VAR_1->CT, VAR_0->CT, sizeof(u8) * 4);
      VAR_1->RX = VAR_0->RX;
      VAR_1->RY = VAR_0->RY;
      VAR_1->RA0 = VAR_0->RA0;
      VAR_1->WA0 = VAR_0->WA0;

      VAR_1->AC.all = VAR_0->AC.all;
      VAR_1->P.all = VAR_0->P.all;
      VAR_1->ALU.all = VAR_0->ALU.all;
      VAR_1->MUL.all = VAR_0->MUL.all;
   }
}
