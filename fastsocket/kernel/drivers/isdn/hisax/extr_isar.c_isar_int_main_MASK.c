
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct isar_reg {int iis; int cmsb; int bstat; int clsb; scalar_t__ par; } ;
struct IsdnCardState {int debug; int (* BC_Write_Reg ) (struct IsdnCardState*,int,int ,int ) ;TYPE_3__* bcs; } ;
struct BCState {int mode; int err_rdo; int err_tx; } ;
struct TYPE_4__ {struct isar_reg* reg; } ;
struct TYPE_5__ {TYPE_1__ isar; } ;
struct TYPE_6__ {TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (struct IsdnCardState*,int) ;
 int * VAR_10 ;
 int FUNC_2 (struct IsdnCardState*,char*,...) ;
 int FUNC_3 (struct IsdnCardState*,struct isar_reg*) ;
 int FUNC_4 (struct BCState*,int) ;
 int FUNC_5 (struct BCState*,int) ;
 int FUNC_6 (struct BCState*,struct isar_reg*) ;
 int FUNC_7 (struct IsdnCardState*,struct BCState*) ;
 int FUNC_8 (struct IsdnCardState*,struct isar_reg*,int *) ;
 struct BCState* FUNC_9 (struct IsdnCardState*,int) ;
 int FUNC_10 (int *,char*,int,int) ;
 int FUNC_11 (struct IsdnCardState*,int,int ,int ) ;
 int FUNC_12 (struct IsdnCardState*,int,int ,int ) ;
 int FUNC_13 (struct IsdnCardState*,int,int ,int ) ;
 int FUNC_14 (struct IsdnCardState*,int,int ,int ) ;
 int FUNC_15 (struct IsdnCardState*,int,int ,int ) ;

void
FUNC_16(struct IsdnCardState *VAR_11)
{
 struct isar_reg *VAR_12 = VAR_11->bcs[0].hw.isar.reg;
 struct BCState *VAR_13;

 FUNC_3(VAR_11, VAR_12);
 switch (VAR_12->iis & VAR_3) {
  case 128:
   if ((VAR_13 = FUNC_9(VAR_11, VAR_12->iis >> 6))) {
    FUNC_7(VAR_11, VAR_13);
   } else {
    FUNC_2(VAR_11, "isar spurious IIS_RDATA %x/%x/%x",
     VAR_12->iis, VAR_12->cmsb, VAR_12->clsb);
    VAR_11->BC_Write_Reg(VAR_11, 1, VAR_2, 0);
   }
   break;
  case 133:
   VAR_11->BC_Write_Reg(VAR_11, 1, VAR_2, 0);
   VAR_12->bstat |= VAR_12->cmsb;
   FUNC_1(VAR_11, VAR_12->cmsb);
   break;
  case 136:
   if (VAR_11->debug & VAR_6)
    FUNC_2(VAR_11, "Buffer STEV dpath%d msb(%x)",
     VAR_12->iis>>6, VAR_12->cmsb);
   VAR_11->BC_Write_Reg(VAR_11, 1, VAR_2, 0);
   break;
  case 130:
   if ((VAR_13 = FUNC_9(VAR_11, VAR_12->iis >> 6))) {
    FUNC_8(VAR_11, VAR_12, (u_char *)VAR_12->par);
    if (VAR_13->mode == VAR_8) {
     FUNC_5(VAR_13, VAR_12->cmsb);
    } else if (VAR_13->mode == VAR_7) {
     FUNC_4(VAR_13, VAR_12->cmsb);
    } else if (VAR_12->cmsb == VAR_9) {
     if (VAR_11->debug & VAR_4)
      FUNC_2(VAR_11, "pump stev TIMER");
    } else {
     if (VAR_11->debug & VAR_6)
      FUNC_2(VAR_11, "isar IIS_PSTEV pmode %d stat %x",
       VAR_13->mode, VAR_12->cmsb);
    }
   } else {
    FUNC_2(VAR_11, "isar spurious IIS_PSTEV %x/%x/%x",
     VAR_12->iis, VAR_12->cmsb, VAR_12->clsb);
    VAR_11->BC_Write_Reg(VAR_11, 1, VAR_2, 0);
   }
   break;
  case 129:
   if ((VAR_13 = FUNC_9(VAR_11, VAR_12->iis >> 6))) {
    FUNC_8(VAR_11, VAR_12, (u_char *)VAR_12->par);
    FUNC_6(VAR_13, VAR_12);
   } else {
    FUNC_2(VAR_11, "isar spurious IIS_PSTRSP %x/%x/%x",
     VAR_12->iis, VAR_12->cmsb, VAR_12->clsb);
    VAR_11->BC_Write_Reg(VAR_11, 1, VAR_2, 0);
   }
   break;
  case 134:
  case 135:
  case 131:
   FUNC_8(VAR_11, VAR_12, (u_char *)VAR_12->par);
   if ((VAR_11->debug & (VAR_4 | VAR_5))
    == VAR_4) {
    u_char *VAR_14=VAR_10;

    VAR_14 += FUNC_10(VAR_10, "msg iis(%x) msb(%x)",
     VAR_12->iis, VAR_12->cmsb);
    FUNC_0(VAR_14, (u_char *)VAR_12->par, VAR_12->clsb);
    FUNC_2(VAR_11, VAR_10);
   }
   break;
  case 132:
   FUNC_8(VAR_11, VAR_12, VAR_10);
   if (VAR_11->debug & VAR_6)
    FUNC_2(VAR_11, "invalid msg his:%x",
     VAR_12->cmsb);
   break;
  default:
   FUNC_8(VAR_11, VAR_12, VAR_10);
   if (VAR_11->debug & VAR_6)
    FUNC_2(VAR_11, "unhandled msg iis(%x) ctrl(%x/%x)",
     VAR_12->iis, VAR_12->cmsb, VAR_12->clsb);
   break;
 }
}
