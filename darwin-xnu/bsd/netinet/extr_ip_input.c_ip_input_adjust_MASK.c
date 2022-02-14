
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int csum_flags; int pkt_flags; scalar_t__ csum_rx_start; scalar_t__ len; scalar_t__ csum_data; int csum_rx_val; } ;
struct mbuf {scalar_t__ m_len; TYPE_1__ m_pkthdr; } ;
struct ip {scalar_t__ ip_len; int ip_off; scalar_t__ ip_p; } ;
struct ifnet {int if_flags; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_4__ {int ips_adj; int ips_adj_hwcsum_clr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_2__ VAR_12 ;
 int FUNC_1 (struct mbuf*,scalar_t__) ;
 int FUNC_2 (struct mbuf*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_4(struct mbuf *VAR_13, struct ip *VAR_14, struct ifnet *VAR_15)
{
 boolean_t VAR_16 = VAR_9;

 FUNC_0(FUNC_3(VAR_13) > VAR_14->ip_len);







 if (VAR_10 &&
     (VAR_13->m_pkthdr.csum_flags & VAR_0) &&
     !(VAR_15->if_flags & VAR_3) &&
     !(VAR_13->m_pkthdr.pkt_flags & VAR_8)) {
  VAR_13->m_pkthdr.csum_flags &= ~VAR_0;
  VAR_13->m_pkthdr.csum_data = 0;
  VAR_12.ips_adj_hwcsum_clr++;
 }
 if (VAR_11 &&
     (VAR_13->m_pkthdr.csum_flags & (VAR_0|VAR_1)) ==
     (VAR_0|VAR_1)) {
  VAR_13->m_pkthdr.csum_rx_val = FUNC_2(VAR_13,
      VAR_13->m_pkthdr.csum_rx_start, VAR_13->m_pkthdr.csum_rx_start,
      (VAR_14->ip_len - VAR_13->m_pkthdr.csum_rx_start),
      VAR_13->m_pkthdr.csum_rx_val);
 } else if ((VAR_13->m_pkthdr.csum_flags &
     (VAR_0|VAR_1)) ==
     (VAR_0|VAR_1)) {
  if ((VAR_14->ip_off & (VAR_6 | VAR_7)) == 0 &&
      (VAR_14->ip_p == VAR_4 || VAR_14->ip_p == VAR_5)) {
   VAR_16 = VAR_2;
  } else {
   VAR_13->m_pkthdr.csum_flags &= ~VAR_0;
   VAR_13->m_pkthdr.csum_data = 0;
   VAR_12.ips_adj_hwcsum_clr++;
  }
 }

 if (VAR_16) {
  VAR_12.ips_adj++;
  if (VAR_13->m_len == VAR_13->m_pkthdr.len) {
   VAR_13->m_len = VAR_14->ip_len;
   VAR_13->m_pkthdr.len = VAR_14->ip_len;
  } else {
   FUNC_1(VAR_13, VAR_14->ip_len - VAR_13->m_pkthdr.len);
  }
 }
}
