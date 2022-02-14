
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int32_t ;
struct in6_addr {void** s6_addr16; } ;
struct sockaddr_in6 {size_t sin6_scope_id; struct in6_addr sin6_addr; } ;
struct ip6_pktopts {struct in6_pktinfo* ip6po_pktinfo; } ;
struct in6pcb {TYPE_1__* in6p_moptions; struct ip6_pktopts* in6p_outputopts; } ;
struct in6_pktinfo {size_t ipi6_ifindex; } ;
struct ifnet {size_t if_index; } ;
struct TYPE_3__ {struct ifnet* im6o_multicast_ifp; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct in6_addr*) ;
 scalar_t__ FUNC_3 (struct in6_addr*) ;
 scalar_t__ FUNC_4 (struct in6_addr*) ;
 void* FUNC_5 (size_t) ;
 size_t VAR_1 ;
 struct ifnet** VAR_2 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct ifnet*) ;
 size_t FUNC_9 (struct in6_addr*) ;

int
FUNC_10(struct in6_addr *VAR_3, const struct sockaddr_in6 *VAR_4,
    struct in6pcb *VAR_5, struct ifnet **VAR_6, struct ip6_pktopts *VAR_7)
{
 struct ifnet *VAR_8 = ((void*)0);
 u_int32_t VAR_9;
 struct ip6_pktopts *VAR_10 = ((void*)0);

 *VAR_3 = VAR_4->sin6_addr;
 VAR_9 = VAR_4->sin6_scope_id;
 if (VAR_6 != ((void*)0))
  *VAR_6 = ((void*)0);
 if (FUNC_4(VAR_3) || FUNC_2(VAR_3)) {
  struct in6_pktinfo *VAR_11;
  struct ifnet *VAR_12 = ((void*)0);

  if (VAR_5 != ((void*)0) && FUNC_3(VAR_3) &&
      VAR_5->in6p_moptions != ((void*)0)) {
   FUNC_0(VAR_5->in6p_moptions);
   VAR_12 =
       VAR_5->in6p_moptions->im6o_multicast_ifp;
   FUNC_1(VAR_5->in6p_moptions);
  }

  if (VAR_7 != ((void*)0))
   VAR_10 = VAR_7;
  else if (VAR_5 != ((void*)0))
   VAR_10 = VAR_5->in6p_outputopts;



  if (VAR_5 != ((void*)0) && VAR_10 != ((void*)0) &&
      (VAR_11 = VAR_10->ip6po_pktinfo) != ((void*)0) &&
      VAR_11->ipi6_ifindex != 0) {

   if (VAR_6 != ((void*)0)) {
    FUNC_7();
    VAR_8 = VAR_2[VAR_11->ipi6_ifindex];
    FUNC_6();
   }
   VAR_3->s6_addr16[1] = FUNC_5(VAR_11->ipi6_ifindex);
  } else if (VAR_5 != ((void*)0) && FUNC_3(VAR_3) &&
      VAR_5->in6p_moptions != ((void*)0) && VAR_12 != ((void*)0)) {
   VAR_8 = VAR_12;
   VAR_3->s6_addr16[1] = FUNC_5(VAR_8->if_index);
  } else if (VAR_9 != 0) {





   if (VAR_1 < VAR_9)
    return (VAR_0);


   if (VAR_6 != ((void*)0)) {
    FUNC_7();
    VAR_8 = VAR_2[VAR_9];
    FUNC_6();
   }

   VAR_3->s6_addr16[1] = FUNC_5(VAR_9 & 0xffff);
  }

  if (VAR_6 != ((void*)0)) {
   if (VAR_8 != ((void*)0))
    FUNC_8(VAR_8);
   *VAR_6 = VAR_8;
  }
 }

 return (0);
}
