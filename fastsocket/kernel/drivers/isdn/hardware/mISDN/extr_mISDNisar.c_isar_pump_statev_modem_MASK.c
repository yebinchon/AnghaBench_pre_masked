
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct isar_ch {TYPE_1__* is; int dpath; } ;
struct TYPE_2__ {int name; int Flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct isar_ch*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int,int ,int ,int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void
FUNC_6(struct isar_ch *VAR_4, u8 VAR_5) {
 u8 VAR_6 = FUNC_0(VAR_4->dpath);

 switch (VAR_5) {
 case 140:
  FUNC_2("%s: pump stev TIMER\n", VAR_4->is->name);
  break;
 case 138:
  FUNC_2("%s: pump stev CONNECT\n", VAR_4->is->name);
  FUNC_1(VAR_4, VAR_0);
  break;
 case 139:
  FUNC_2("%s: pump stev NO CONNECT\n", VAR_4->is->name);
  FUNC_4(VAR_4->is, VAR_6 | VAR_2, 0, 0, ((void*)0));
  FUNC_1(VAR_4, VAR_1);
  break;
 case 128:
  FUNC_2("%s: pump stev V24 OFF\n", VAR_4->is->name);
  break;
 case 136:
  FUNC_2("%s: pump stev CTS ON\n", VAR_4->is->name);
  break;
 case 137:
  FUNC_2("%s pump stev CTS OFF\n", VAR_4->is->name);
  break;
 case 134:
  FUNC_2("%s: pump stev CARRIER ON\n", VAR_4->is->name);
  FUNC_5(VAR_3, &VAR_4->is->Flags);
  FUNC_4(VAR_4->is, VAR_6 | VAR_2, 0, 0, ((void*)0));
  break;
 case 135:
  FUNC_2("%s: pump stev CARRIER OFF\n", VAR_4->is->name);
  break;
 case 132:
  FUNC_2("%s: pump stev DSR ON\n", VAR_4->is->name);
  break;
 case 133:
  FUNC_2("%s: pump stev DSR_OFF\n", VAR_4->is->name);
  break;
 case 129:
  FUNC_2("%s: pump stev REMOTE RETRAIN\n", VAR_4->is->name);
  break;
 case 130:
  FUNC_2("%s: pump stev REMOTE RENEGOTIATE\n", VAR_4->is->name);
  break;
 case 131:
  FUNC_2("%s: pump stev GSTN CLEAR\n", VAR_4->is->name);
  break;
 default:
  FUNC_3("u%s: nknown pump stev %x\n", VAR_4->is->name, VAR_5);
  break;
 }
}
