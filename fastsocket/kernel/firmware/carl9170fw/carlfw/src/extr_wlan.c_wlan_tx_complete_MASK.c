
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cnt; int rix; scalar_t__ cookie; int queue; } ;
struct carl9170_tx_superframe {TYPE_1__ s; } ;
struct carl9170_tx_status {int success; int tries; int rix; int queue; scalar_t__ cookie; } ;


 struct carl9170_tx_status* FUNC_0 () ;

void FUNC_1(struct carl9170_tx_superframe *VAR_0,
        bool VAR_1)
{
 struct carl9170_tx_status *VAR_2;

 VAR_2 = FUNC_0();





 VAR_2->cookie = VAR_0->s.cookie;
 VAR_2->queue = VAR_0->s.queue;
 VAR_0->s.cookie = 0;





 VAR_2->rix = VAR_0->s.rix;
 VAR_2->tries = VAR_0->s.cnt;
 VAR_2->success = (VAR_1) ? 1 : 0;
}
