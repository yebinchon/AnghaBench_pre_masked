
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int dummy; } ;
struct ath9k_mib_stats {int beacons; int rts_good; int fcs_bad; int rts_bad; int ackrcv_bad; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ath_hw*,int ) ;

__attribute__((used)) static void FUNC_1(struct ath_hw *VAR_5,
         struct ath9k_mib_stats *VAR_6)
{
 VAR_6->ackrcv_bad += FUNC_0(VAR_5, VAR_0);
 VAR_6->rts_bad += FUNC_0(VAR_5, VAR_3);
 VAR_6->fcs_bad += FUNC_0(VAR_5, VAR_2);
 VAR_6->rts_good += FUNC_0(VAR_5, VAR_4);
 VAR_6->beacons += FUNC_0(VAR_5, VAR_1);
}
