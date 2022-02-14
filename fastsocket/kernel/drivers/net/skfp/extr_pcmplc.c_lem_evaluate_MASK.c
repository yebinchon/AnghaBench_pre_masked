
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct s_smc {int dummy; } ;
struct lem_counter {int lem_errors; int lem_float_ber; int lem_on; } ;
struct s_phy {int np; void* pc_lem_fail; struct fddi_mib_p* mib; struct lem_counter lem; } ;
struct fddi_mib_p {int fddiPORTLem_Ct; int fddiPORTLer_Estimate; int fddiPORTLer_Alarm; int fddiPORTLerFlag; int fddiPORTLer_Cutoff; int fddiPORTLem_Reject_Ct; } ;


 int FUNC_0 (int,char*,int,int) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct s_smc*,int,int ) ;
 int FUNC_4 (struct s_smc*,struct s_phy*,int) ;
 int FUNC_5 (struct s_smc*,int) ;
 int FUNC_6 (struct s_smc*,int ,int,int) ;

__attribute__((used)) static void FUNC_7(struct s_smc *VAR_8, struct s_phy *VAR_9)
{
 int VAR_10 ;
 u_long VAR_11 ;
 struct lem_counter *VAR_12 = &VAR_9->lem ;
 struct fddi_mib_p *VAR_13 ;
 int VAR_14 ;

 VAR_13 = VAR_9->mib ;

 if (!VAR_12->lem_on)
  return ;

 VAR_11 = FUNC_2(FUNC_1(((int) VAR_9->np),VAR_5)) ;
 VAR_12->lem_errors += VAR_11 ;
 VAR_13->fddiPORTLem_Ct += VAR_11 ;

 VAR_11 = VAR_12->lem_errors ;
  if (!VAR_11) VAR_10 = 15 ;
 else if (VAR_11 <= 9) VAR_10 = 9 ;
 else if (VAR_11 <= 99) VAR_10 = 8 ;
 else if (VAR_11 <= 999) VAR_10 = 7 ;
 else if (VAR_11 <= 9999) VAR_10 = 6 ;
 else if (VAR_11 <= 99999) VAR_10 = 5 ;
 else if (VAR_11 <= 999999) VAR_10 = 4 ;
 else if (VAR_11 <= 9999999) VAR_10 = 3 ;
 else if (VAR_11 <= 99999999) VAR_10 = 2 ;
 else if (VAR_11 <= 999999999) VAR_10 = 1 ;
 else VAR_10 = 0 ;




 VAR_10 *= 100 ;
 VAR_12->lem_float_ber = VAR_12->lem_float_ber * 7 + VAR_10 * 3 ;
 VAR_12->lem_float_ber /= 10 ;
 VAR_13->fddiPORTLer_Estimate = VAR_12->lem_float_ber / 100 ;
 if (VAR_13->fddiPORTLer_Estimate < 4) {
  VAR_13->fddiPORTLer_Estimate = 4 ;
 }

 if (VAR_12->lem_errors) {
  FUNC_0(1,"LEM %c :\n",VAR_9->np == VAR_3? 'B' : 'A',0) ;
  FUNC_0(1,"errors      : %ld\n",VAR_12->lem_errors,0) ;
  FUNC_0(1,"sum_errors  : %ld\n",VAR_13->fddiPORTLem_Ct,0) ;
  FUNC_0(1,"current BER : 10E-%d\n",VAR_10/100,0) ;
  FUNC_0(1,"float BER   : 10E-(%d/100)\n",VAR_12->lem_float_ber,0) ;
  FUNC_0(1,"avg. BER    : 10E-%d\n",
   VAR_13->fddiPORTLer_Estimate,0) ;
 }

 VAR_12->lem_errors = 0L ;


 VAR_14 = (VAR_13->fddiPORTLer_Estimate <= VAR_13->fddiPORTLer_Alarm) ?
  VAR_7 : VAR_1 ;



 if (VAR_14 != VAR_13->fddiPORTLerFlag) {
  FUNC_6(VAR_8,VAR_6,
   (int) (VAR_2+ VAR_9->np) ,VAR_14) ;
 }


 if ( VAR_13->fddiPORTLer_Estimate <= VAR_13->fddiPORTLer_Cutoff) {
  VAR_9->pc_lem_fail = VAR_7 ;
  VAR_13->fddiPORTLem_Reject_Ct++ ;




  VAR_12->lem_float_ber += 2*100 ;
  FUNC_3(VAR_8,(int)(VAR_0+VAR_9->np),VAR_4) ;

 }
}
