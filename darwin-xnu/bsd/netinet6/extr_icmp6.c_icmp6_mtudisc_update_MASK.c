
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct in6_addr {int * s6_addr16; } ;
struct sockaddr_in6 {int sin6_len; struct in6_addr sin6_addr; int sin6_family; } ;
struct sockaddr {int dummy; } ;
struct TYPE_7__ {int rmx_locks; int rmx_mtu; } ;
struct rtentry {int rt_flags; TYPE_3__ rt_rmx; int rt_ifp; } ;
struct TYPE_6__ {TYPE_1__* rcvif; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
struct ip6ctlparam {struct mbuf* ip6c_m; struct icmp6_hdr* ip6c_icmp6; struct in6_addr* ip6c_finaldst; } ;
struct ip6_hdr {int dummy; } ;
struct ip6_frag {int dummy; } ;
struct icmp6_hdr {int icmp6_mtu; } ;
typedef int sin6 ;
struct TYPE_8__ {int icp6s_pmtuchg; } ;
struct TYPE_5__ {int if_index; } ;


 scalar_t__ FUNC_0 (struct in6_addr*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct rtentry*) ;
 int FUNC_3 (struct rtentry*) ;
 int FUNC_4 (struct sockaddr_in6*,int) ;
 int FUNC_5 (int ) ;
 TYPE_4__ VAR_6 ;
 int FUNC_6 (int ) ;
 struct rtentry* FUNC_7 (struct sockaddr*,int ,int,int ) ;
 int FUNC_8 (struct rtentry*) ;

void
FUNC_9(struct ip6ctlparam *VAR_7, int VAR_8)
{
 struct in6_addr *VAR_9 = VAR_7->ip6c_finaldst;
 struct icmp6_hdr *VAR_10 = VAR_7->ip6c_icmp6;
 struct mbuf *VAR_11 = VAR_7->ip6c_m;
 u_int VAR_12 = FUNC_6(VAR_10->icmp6_mtu);
 struct rtentry *VAR_13 = ((void*)0);
 struct sockaddr_in6 VAR_14;




 if (VAR_12 < sizeof(struct ip6_hdr) + sizeof(struct ip6_frag) + 8)
  return;

 if (!VAR_8)
  return;







 if (VAR_12 < VAR_0)
  VAR_12 = VAR_0 - 8;

 FUNC_4(&VAR_14, sizeof(VAR_14));
 VAR_14 = VAR_1;
 VAR_14 = sizeof(struct sockaddr_in6);
 VAR_14 = *VAR_9;

 if (FUNC_0(VAR_9)) {
  VAR_14[1] =
      FUNC_5(VAR_11->m_pkthdr.rcvif->if_index);
 }
 VAR_13 = FUNC_7((struct sockaddr *)&VAR_14, 0,
     VAR_2 | VAR_4, VAR_11->m_pkthdr.rcvif->if_index);
 if (VAR_13 != ((void*)0)) {
  FUNC_2(VAR_13);
  if ((VAR_13->rt_flags & VAR_3) &&
      !(VAR_13->rt_rmx.rmx_locks & VAR_5) &&
      VAR_12 < FUNC_1(VAR_13->rt_ifp) &&
      VAR_13->rt_rmx.rmx_mtu > VAR_12) {
   VAR_6.icp6s_pmtuchg++;
   VAR_13->rt_rmx.rmx_mtu = VAR_12;
  }
  FUNC_3(VAR_13);
  FUNC_8(VAR_13);
 }
}
