
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct carl9170_tx_status {int dummy; } ;
struct TYPE_3__ {int tx_status_pending; int tx_status_tail_idx; struct carl9170_tx_status* tx_status_cache; } ;
struct TYPE_4__ {TYPE_1__ wlan; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static struct carl9170_tx_status *FUNC_1(void)
{
 struct carl9170_tx_status *VAR_2;

 VAR_2 = &VAR_1.wlan.tx_status_cache[VAR_1.wlan.tx_status_tail_idx++];
 VAR_1.wlan.tx_status_tail_idx %= VAR_0;

 if (VAR_1.wlan.tx_status_pending == VAR_0)
  FUNC_0();

 VAR_1.wlan.tx_status_pending++;

 return VAR_2;
}
