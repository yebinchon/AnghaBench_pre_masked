
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int ack_policy; int tx_complete; int qos; scalar_t__ packet_type; scalar_t__ rate_policy; } ;
struct tx_double_buffer_desc {TYPE_1__ control; } ;
struct ieee80211_tx_info {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct tx_double_buffer_desc *VAR_4,
         struct ieee80211_tx_info *VAR_5, u16 VAR_6)
{
 *(u16 *)&VAR_4->control = 0;

 VAR_4->control.rate_policy = 0;


 VAR_4->control.packet_type = 0;

 if (VAR_5->flags & VAR_3)
  VAR_4->control.ack_policy = 1;

 VAR_4->control.tx_complete = 1;

 if ((VAR_6 & VAR_0) &&
     ((VAR_6 & VAR_1) ||
      (VAR_6 & VAR_2)))
  VAR_4->control.qos = 1;
}
