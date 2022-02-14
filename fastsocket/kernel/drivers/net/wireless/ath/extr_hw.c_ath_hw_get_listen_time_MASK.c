
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_cycle_counters {int cycles; int rx_frame; int tx_frame; } ;
struct ath_common {int clockrate; struct ath_cycle_counters cc_ani; } ;
typedef int int32_t ;


 int FUNC_0 (struct ath_cycle_counters*,int ,int) ;

int32_t FUNC_1(struct ath_common *VAR_0)
{
 struct ath_cycle_counters *VAR_1 = &VAR_0->cc_ani;
 int32_t VAR_2;

 VAR_2 = (VAR_1->cycles - VAR_1->rx_frame - VAR_1->tx_frame) /
        (VAR_0->clockrate * 1000);

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 return VAR_2;
}
