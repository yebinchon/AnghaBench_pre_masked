
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int* mdmreg; int* msn; int* lmsn; scalar_t__ mdmcmdl; int plmsn; int pmsn; int profile; } ;
struct TYPE_6__ {int xmit_size; TYPE_2__ emu; } ;
typedef TYPE_1__ modem_info ;
typedef TYPE_2__ atemu ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(modem_info * VAR_6, int VAR_7)
{
 atemu *VAR_8 = &VAR_6->emu;
 if ((VAR_8->mdmreg[VAR_4] & VAR_0) || VAR_7) {
  FUNC_2(VAR_8->mdmreg, VAR_8->profile, VAR_2);
  FUNC_2(VAR_8->msn, VAR_8->pmsn, VAR_3);
  FUNC_2(VAR_8->lmsn, VAR_8->plmsn, VAR_1);
  VAR_6->xmit_size = VAR_8->mdmreg[VAR_5] * 16;
 }






 VAR_8->mdmcmdl = 0;
}
