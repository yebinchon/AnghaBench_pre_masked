
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct isar_reg {int* par; } ;
struct IsdnCardState {int debug; } ;
struct TYPE_5__ {int conmsg; TYPE_1__* reg; } ;
struct TYPE_6__ {TYPE_2__ isar; } ;
struct BCState {int conmsg; TYPE_3__ hw; struct IsdnCardState* cs; } ;
struct TYPE_4__ {int Flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct IsdnCardState*,char*,int) ;
 char** VAR_3 ;
 char** VAR_4 ;
 int FUNC_1 (int,char*,char*,char*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct BCState *VAR_5, struct isar_reg *VAR_6) {
 struct IsdnCardState *VAR_7 = VAR_5->cs;
 u_char VAR_8 = VAR_6->par[0];
 u_char VAR_9;

 if (!FUNC_2(VAR_0, &VAR_5->hw.isar.reg->Flags))
  return;
 if (VAR_8 > 14) {
  if (VAR_7->debug & VAR_2)
   FUNC_0(VAR_7, "wrong pstrsp ril=%d",VAR_8);
  VAR_8 = 15;
 }
 switch(VAR_6->par[1]) {
  case 0:
   VAR_9 = 0;
   break;
  case 0x20:
   VAR_9 = 2;
   break;
  case 0x40:
   VAR_9 = 3;
   break;
  case 0x41:
   VAR_9 = 4;
   break;
  case 0x51:
   VAR_9 = 5;
   break;
  case 0x61:
   VAR_9 = 6;
   break;
  case 0x71:
   VAR_9 = 7;
   break;
  case 0x82:
   VAR_9 = 8;
   break;
  case 0x92:
   VAR_9 = 9;
   break;
  case 0xa2:
   VAR_9 = 10;
   break;
  default:
   VAR_9 = 1;
   break;
 }
 FUNC_1(VAR_5->hw.isar.conmsg,"%s %s", VAR_3[VAR_8], VAR_4[VAR_9]);
 VAR_5->conmsg = VAR_5->hw.isar.conmsg;
 if (VAR_7->debug & VAR_1)
  FUNC_0(VAR_7, "pump strsp %s", VAR_5->conmsg);
}
