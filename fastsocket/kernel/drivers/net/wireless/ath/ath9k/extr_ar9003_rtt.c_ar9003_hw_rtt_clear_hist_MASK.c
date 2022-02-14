
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw {int rxchainmask; TYPE_1__* caldata; } ;
struct TYPE_2__ {int rtt_done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_hw*,int,int,int ) ;

void FUNC_1(struct ath_hw *VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (!(VAR_2->rxchainmask & (1 << VAR_3)))
   continue;
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
   FUNC_0(VAR_2, VAR_3, VAR_4, 0);
 }

 if (VAR_2->caldata)
  VAR_2->caldata->rtt_done = 0;
}
