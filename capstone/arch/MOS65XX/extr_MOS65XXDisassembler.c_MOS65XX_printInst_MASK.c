
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct SStream {int dummy; } ;
struct TYPE_9__ {int name; } ;
struct TYPE_8__ {size_t ins; int am; } ;
struct TYPE_7__ {unsigned char Opcode; int address; TYPE_1__* Operands; } ;
struct TYPE_6__ {unsigned int ImmVal; } ;
typedef TYPE_2__ MCInst ;


 TYPE_5__* VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (struct SStream*,char*,...) ;
 int FUNC_1 (struct SStream*,int ) ;

void FUNC_2(MCInst *VAR_2, struct SStream *VAR_3, void *VAR_4)
{

 unsigned char VAR_5 = VAR_2->Opcode;

 FUNC_1(VAR_3, VAR_0[VAR_1[VAR_2->Opcode].ins].name);
 unsigned int VAR_6 = VAR_2->Operands[0].ImmVal;

 switch (VAR_1[VAR_5].am) {
  default:
   break;

  case 135:
   break;

  case 137:
   FUNC_0(VAR_3, " a");
   break;

  case 140:
   FUNC_0(VAR_3, " $0x%04x", VAR_6);
   break;

  case 136:
   FUNC_0(VAR_3, " #$0x%02x", VAR_6);
   break;

  case 130:
   FUNC_0(VAR_3, " $0x%02x", VAR_6);
   break;

  case 139:
   FUNC_0(VAR_3, " $0x%04x, x", VAR_6);
   break;

  case 138:
   FUNC_0(VAR_3, " $0x%04x, y", VAR_6);
   break;

  case 129:
   FUNC_0(VAR_3, " $0x%02x, x", VAR_6);
   break;

  case 128:
   FUNC_0(VAR_3, " $0x%02x, y", VAR_6);
   break;

  case 131:
   FUNC_0(VAR_3, " $0x%04x", VAR_2->address + (signed char) VAR_6 + 2);
   break;

  case 134:
   FUNC_0(VAR_3, " ($0x%04x)", VAR_6);
   break;

  case 133:
   FUNC_0(VAR_3, " ($0x%02x, x)", VAR_6);
   break;

  case 132:
   FUNC_0(VAR_3, " ($0x%02x), y", VAR_6);
   break;
 }

}
