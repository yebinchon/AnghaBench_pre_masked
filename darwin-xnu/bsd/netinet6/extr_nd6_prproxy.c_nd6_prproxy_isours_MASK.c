
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtentry {int rt_flags; } ;
struct TYPE_3__ {int sin6_addr; } ;
struct route_in6 {struct rtentry* ro_rt; TYPE_1__ ro_dst; } ;
struct route {int dummy; } ;
struct TYPE_4__ {int pkt_flags; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
struct ip6_hdr {scalar_t__ ip6_hlim; scalar_t__ ip6_nxt; int ip6_dst; } ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct route_in6*) ;
 scalar_t__ FUNC_5 (struct route_in6*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct rtentry*) ;
 int FUNC_7 (struct rtentry*) ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct route*,int ,unsigned int) ;

boolean_t
FUNC_10(struct mbuf *VAR_7, struct ip6_hdr *VAR_8, struct route_in6 *VAR_9,
    unsigned int VAR_10)
{
 struct rtentry *VAR_11;
 boolean_t VAR_12 = VAR_0;

 if (VAR_8->ip6_hlim != VAR_2 || VAR_8->ip6_nxt != VAR_1)
  goto done;

 if (FUNC_2(&VAR_8->ip6_dst) ||
     FUNC_1(&VAR_8->ip6_dst)) {
  FUNC_8(VAR_9 == ((void*)0));
  VAR_12 = VAR_6;
  goto done;
 } else if (FUNC_3(&VAR_8->ip6_dst)) {
  goto done;
 }

 if (VAR_9 == ((void*)0))
  goto done;

 if ((VAR_11 = VAR_9->ro_rt) != ((void*)0))
  FUNC_6(VAR_11);

 if (FUNC_5(VAR_9)) {
  if (VAR_11 != ((void*)0))
   FUNC_7(VAR_11);

  FUNC_4(VAR_9);


  FUNC_8(FUNC_0(&VAR_8->ip6_dst,
      &VAR_9->ro_dst.sin6_addr));

  FUNC_9((struct route *)VAR_9, VAR_4, VAR_10);
  if ((VAR_11 = VAR_9->ro_rt) == ((void*)0))
   goto done;

  FUNC_6(VAR_11);
 }

 VAR_12 = (VAR_11->rt_flags & VAR_5) ? VAR_6 : VAR_0;
 FUNC_7(VAR_11);

done:
 if (VAR_12)
  VAR_7->m_pkthdr.pkt_flags |= VAR_3;

 return (VAR_12);
}
