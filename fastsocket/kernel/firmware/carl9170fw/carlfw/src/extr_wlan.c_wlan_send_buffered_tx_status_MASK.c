
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct carl9170_tx_status {int dummy; } ;
struct TYPE_3__ {size_t tx_status_head_idx; scalar_t__ tx_status_pending; int * tx_status_cache; } ;
struct TYPE_4__ {TYPE_1__ wlan; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_2__ VAR_3 ;
 unsigned int FUNC_0 (unsigned int,size_t) ;
 int FUNC_1 (unsigned int,int ,unsigned int,void*) ;

__attribute__((used)) static void FUNC_2(void)
{
 unsigned int VAR_4;

 while (VAR_3.wlan.tx_status_pending) {
  VAR_4 = FUNC_0((unsigned int)VAR_3.wlan.tx_status_pending,
     VAR_1);
  VAR_4 = FUNC_0(VAR_4, VAR_2 - VAR_3.wlan.tx_status_head_idx);
  FUNC_1((VAR_4 * sizeof(struct carl9170_tx_status) + 3) & ~3,
     VAR_0, VAR_4, (void *)
     &VAR_3.wlan.tx_status_cache[VAR_3.wlan.tx_status_head_idx]);

  VAR_3.wlan.tx_status_pending -= VAR_4;
  VAR_3.wlan.tx_status_head_idx += VAR_4;
  VAR_3.wlan.tx_status_head_idx %= VAR_2;
 }
}
