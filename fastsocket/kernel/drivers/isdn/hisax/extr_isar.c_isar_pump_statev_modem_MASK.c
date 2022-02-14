
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct IsdnCardState {int debug; } ;
struct TYPE_5__ {TYPE_1__* reg; int dpath; } ;
struct TYPE_6__ {TYPE_2__ isar; } ;
struct BCState {TYPE_3__ hw; int st; struct IsdnCardState* cs; } ;
struct TYPE_4__ {int Flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct IsdnCardState*,char*,...) ;
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (struct IsdnCardState*,int,int ,int ,int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(struct BCState *VAR_6, u_char VAR_7) {
 struct IsdnCardState *VAR_8 = VAR_6->cs;
 u_char VAR_9 = FUNC_0(VAR_6->hw.isar.dpath);

 switch(VAR_7) {
  case 140:
   if (VAR_8->debug & VAR_2)
    FUNC_1(VAR_8, "pump stev TIMER");
   break;
  case 138:
   if (VAR_8->debug & VAR_2)
    FUNC_1(VAR_8, "pump stev CONNECT");
   FUNC_2(VAR_6->st, VAR_3 | VAR_5, ((void*)0));
   break;
  case 139:
   if (VAR_8->debug & VAR_2)
    FUNC_1(VAR_8, "pump stev NO CONNECT");
   FUNC_3(VAR_8, VAR_9 | VAR_0, 0, 0, ((void*)0));
   FUNC_2(VAR_6->st, VAR_4 | VAR_5, ((void*)0));
   break;
  case 128:
   if (VAR_8->debug & VAR_2)
    FUNC_1(VAR_8, "pump stev V24 OFF");
   break;
  case 136:
   if (VAR_8->debug & VAR_2)
    FUNC_1(VAR_8, "pump stev CTS ON");
   break;
  case 137:
   if (VAR_8->debug & VAR_2)
    FUNC_1(VAR_8, "pump stev CTS OFF");
   break;
  case 134:
   if (VAR_8->debug & VAR_2)
    FUNC_1(VAR_8, "pump stev CARRIER ON");
   FUNC_4(VAR_1, &VAR_6->hw.isar.reg->Flags);
   FUNC_3(VAR_8, VAR_9 | VAR_0, 0, 0, ((void*)0));
   break;
  case 135:
   if (VAR_8->debug & VAR_2)
    FUNC_1(VAR_8, "pump stev CARRIER OFF");
   break;
  case 132:
   if (VAR_8->debug & VAR_2)
    FUNC_1(VAR_8, "pump stev DSR ON");
   break;
  case 133:
   if (VAR_8->debug & VAR_2)
    FUNC_1(VAR_8, "pump stev DSR_OFF");
   break;
  case 129:
   if (VAR_8->debug & VAR_2)
    FUNC_1(VAR_8, "pump stev REMOTE RETRAIN");
   break;
  case 130:
   if (VAR_8->debug & VAR_2)
    FUNC_1(VAR_8, "pump stev REMOTE RENEGOTIATE");
   break;
  case 131:
   if (VAR_8->debug & VAR_2)
    FUNC_1(VAR_8, "pump stev GSTN CLEAR", VAR_7);
   break;
  default:
   if (VAR_8->debug & VAR_2)
    FUNC_1(VAR_8, "unknown pump stev %x", VAR_7);
   break;
 }
}
