
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ ip_summed; } ;
struct TYPE_3__ {int tcp; int udp; } ;
struct rtl_tx_desc_info {int opts_offset; int mss_shift; TYPE_1__ checksum; } ;
struct rtl8169_private {int txd_version; } ;
struct iphdr {scalar_t__ protocol; } ;
struct TYPE_4__ {int gso_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int,int ) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;
 struct rtl_tx_desc_info* VAR_5 ;

__attribute__((used)) static inline void FUNC_4(struct rtl8169_private *VAR_6,
        struct sk_buff *VAR_7, u32 *VAR_8)
{
 const struct rtl_tx_desc_info *VAR_9 = VAR_5 + VAR_6->txd_version;
 u32 VAR_10 = FUNC_3(VAR_7)->gso_size;
 int VAR_11 = VAR_9->opts_offset;

 if (VAR_10) {
  VAR_8[0] |= VAR_3;
  VAR_8[VAR_11] |= FUNC_2(VAR_10, VAR_4) << VAR_9->mss_shift;
 } else if (VAR_7->ip_summed == VAR_0) {
  const struct iphdr *VAR_12 = FUNC_1(VAR_7);

  if (VAR_12->protocol == VAR_1)
   VAR_8[VAR_11] |= VAR_9->checksum.tcp;
  else if (VAR_12->protocol == VAR_2)
   VAR_8[VAR_11] |= VAR_9->checksum.udp;
  else
   FUNC_0(1);
 }
}
