
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int csum_flags; int pkt_flags; scalar_t__ csum_rx_start; scalar_t__ len; scalar_t__ csum_data; int csum_rx_val; } ;
struct mbuf {scalar_t__ m_len; TYPE_1__ m_pkthdr; } ;
struct ip6_hdr {scalar_t__ ip6_nxt; } ;
struct ifnet {int if_flags; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_4__ {int ip6s_adj; int ip6s_adj_hwcsum_clr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_2__ VAR_10 ;
 int FUNC_1 (struct mbuf*,scalar_t__) ;
 int FUNC_2 (struct mbuf*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_4(struct mbuf *VAR_11, struct ip6_hdr *VAR_12, uint32_t VAR_13,
    struct ifnet *VAR_14)
{
 boolean_t VAR_15 = VAR_7;
 uint32_t VAR_16 = sizeof (*VAR_12) + VAR_13;

 FUNC_0(FUNC_3(VAR_11) > VAR_16);







 if (VAR_8 &&
     (VAR_11->m_pkthdr.csum_flags & VAR_0) &&
     !(VAR_14->if_flags & VAR_3) &&
     !(VAR_11->m_pkthdr.pkt_flags & VAR_6)) {
  VAR_11->m_pkthdr.csum_flags &= ~VAR_0;
  VAR_11->m_pkthdr.csum_data = 0;
  VAR_10.ip6s_adj_hwcsum_clr++;
 }
 if (VAR_9 &&
     (VAR_11->m_pkthdr.csum_flags & (VAR_0|VAR_1)) ==
     (VAR_0|VAR_1)) {
  VAR_11->m_pkthdr.csum_rx_val = FUNC_2(VAR_11,
      VAR_11->m_pkthdr.csum_rx_start, VAR_11->m_pkthdr.csum_rx_start,
      (VAR_16 - VAR_11->m_pkthdr.csum_rx_start),
      VAR_11->m_pkthdr.csum_rx_val);
 } else if ((VAR_11->m_pkthdr.csum_flags &
     (VAR_0|VAR_1)) ==
     (VAR_0|VAR_1)) {
  if (VAR_12->ip6_nxt == VAR_4 ||
      VAR_12->ip6_nxt == VAR_5) {
   VAR_15 = VAR_2;
  } else {
   VAR_11->m_pkthdr.csum_flags &= ~VAR_0;
   VAR_11->m_pkthdr.csum_data = 0;
   VAR_10.ip6s_adj_hwcsum_clr++;
  }
 }

 if (VAR_15) {
  VAR_10.ip6s_adj++;
  if (VAR_11->m_len == VAR_11->m_pkthdr.len) {
   VAR_11->m_len = VAR_16;
   VAR_11->m_pkthdr.len = VAR_16;
  } else {
   FUNC_1(VAR_11, VAR_16 - VAR_11->m_pkthdr.len);
  }
 }
}
