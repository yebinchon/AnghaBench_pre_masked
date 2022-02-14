
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_hdr {int seq_ctrl; } ;
struct TYPE_3__ {int* sequence; } ;
struct TYPE_4__ {TYPE_1__ wlan; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_2__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hdr *VAR_2, unsigned int VAR_3)
{
 VAR_2->seq_ctrl &= FUNC_0(~VAR_0);
 VAR_2->seq_ctrl |= FUNC_0(VAR_1.wlan.sequence[VAR_3]);

 if (FUNC_1(VAR_2->seq_ctrl))
  VAR_1.wlan.sequence[VAR_3] += 0x10;
}
