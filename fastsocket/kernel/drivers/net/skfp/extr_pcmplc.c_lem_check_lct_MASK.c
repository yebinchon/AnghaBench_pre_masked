
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ lct_extended; scalar_t__ lct_long; scalar_t__ lct_medium; scalar_t__ lct_short; } ;
struct s_smc {TYPE_1__ s; } ;
struct lem_counter {scalar_t__ lem_errors; } ;
struct s_phy {int lc_test; void* pc_lem_fail; scalar_t__ np; struct fddi_mib_p* mib; struct lem_counter lem; } ;
struct fddi_mib_p {int fddiPORTLem_Ct; scalar_t__ fddiPORTLCTFail_Ct; int fddiPORTLem_Reject_Ct; } ;


 int FUNC_0 (int,char*,scalar_t__,int ) ;
 void* VAR_0 ;




 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct s_smc *VAR_3, struct s_phy *VAR_4)
{
 struct lem_counter *VAR_5 = &VAR_4->lem ;
 struct fddi_mib_p *VAR_6 ;
 int VAR_7 ;

 VAR_6 = VAR_4->mib ;

 VAR_4->pc_lem_fail = VAR_0 ;
 VAR_7 = FUNC_2(FUNC_1(((int)VAR_4->np),VAR_1)) ;
 VAR_5->lem_errors += VAR_7 ;
 VAR_6->fddiPORTLem_Ct += VAR_7 ;
 if (VAR_5->lem_errors) {
  switch(VAR_4->lc_test) {
  case 128:
   if (VAR_5->lem_errors >= VAR_3->s.lct_short)
    VAR_4->pc_lem_fail = VAR_2 ;
   break ;
  case 129:
   if (VAR_5->lem_errors >= VAR_3->s.lct_medium)
    VAR_4->pc_lem_fail = VAR_2 ;
   break ;
  case 130:
   if (VAR_5->lem_errors >= VAR_3->s.lct_long)
    VAR_4->pc_lem_fail = VAR_2 ;
   break ;
  case 131:
   if (VAR_5->lem_errors >= VAR_3->s.lct_extended)
    VAR_4->pc_lem_fail = VAR_2 ;
   break ;
  }
  FUNC_0(1," >>errors : %d\n",VAR_5->lem_errors,0) ;
 }
 if (VAR_4->pc_lem_fail) {
  VAR_6->fddiPORTLCTFail_Ct++ ;
  VAR_6->fddiPORTLem_Reject_Ct++ ;
 }
 else
  VAR_6->fddiPORTLCTFail_Ct = 0 ;
}
