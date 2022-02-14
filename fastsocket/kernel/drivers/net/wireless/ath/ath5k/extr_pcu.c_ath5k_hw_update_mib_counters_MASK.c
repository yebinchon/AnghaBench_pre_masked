
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_statistics {int beacons; int fcs_error; int rts_ok; int rts_fail; int ack_fail; } ;
struct ath5k_hw {struct ath5k_statistics stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ath5k_hw*,int ) ;

void
FUNC_1(struct ath5k_hw *VAR_5)
{
 struct ath5k_statistics *VAR_6 = &VAR_5->stats;


 VAR_6->ack_fail += FUNC_0(VAR_5, VAR_0);
 VAR_6->rts_fail += FUNC_0(VAR_5, VAR_3);
 VAR_6->rts_ok += FUNC_0(VAR_5, VAR_4);
 VAR_6->fcs_error += FUNC_0(VAR_5, VAR_2);
 VAR_6->beacons += FUNC_0(VAR_5, VAR_1);
}
