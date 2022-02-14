
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr_in6 {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_5__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ip6_hdr {int dummy; } ;
struct inpcb {int in6p_flags; TYPE_3__* in6p_socket; } ;
struct ifnet {int dummy; } ;
typedef int boolean_t ;
struct TYPE_7__ {int so_options; int so_rcv; } ;
struct TYPE_6__ {int udps_fullsock; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*) ;
 scalar_t__ FUNC_1 (struct ifnet*) ;
 scalar_t__ FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct inpcb*,int,int,int,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct inpcb*) ;
 int FUNC_5 (struct inpcb*,struct mbuf*,struct mbuf**) ;
 int FUNC_6 (struct mbuf*,int) ;
 int FUNC_7 (struct mbuf*) ;
 scalar_t__ FUNC_8 (struct inpcb*,struct mbuf*,int ,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_9 (int *,struct sockaddr*,struct mbuf*,struct mbuf*,int *) ;
 int FUNC_10 (TYPE_3__*,struct mbuf*,int ) ;
 int FUNC_11 (TYPE_3__*) ;
 TYPE_2__ VAR_9 ;

__attribute__((used)) static void
FUNC_12(struct inpcb *VAR_10, struct ip6_hdr *VAR_11,
    struct sockaddr_in6 *VAR_12, struct mbuf *VAR_13, int VAR_14, struct ifnet *VAR_15)
{
#pragma unused(ip6)
 struct mbuf *VAR_16 = ((void*)0);
 int VAR_17 = 0;
 boolean_t VAR_18 = FUNC_0(VAR_15);
 boolean_t VAR_19 = (!VAR_18 && FUNC_1(VAR_15));
 boolean_t VAR_20 = (!VAR_19 && FUNC_2(VAR_15));







 if ((VAR_10->in6p_flags & VAR_1) != 0 ||
     (VAR_10->in6p_socket->so_options & VAR_3) != 0 ||
     (VAR_10->in6p_socket->so_options & VAR_5) != 0 ||
  (VAR_10->in6p_socket->so_options & VAR_4) != 0) {
  VAR_17 = FUNC_5(VAR_10, VAR_13, &VAR_16);
  if (VAR_17 != 0) {
   FUNC_7(VAR_13);
   FUNC_7(VAR_16);
   return;
  }
 }
 FUNC_6(VAR_13, VAR_14);
 if (VAR_6) {
  FUNC_3(VAR_10, VAR_18, VAR_19, VAR_20, VAR_8, 1);
  FUNC_3(VAR_10, VAR_18, VAR_19, VAR_20, VAR_7, VAR_13->m_pkthdr.len);
  FUNC_4(VAR_10);
 }
 FUNC_10(VAR_10->in6p_socket, VAR_13, 0);
 if (FUNC_9(&VAR_10->in6p_socket->so_rcv,
     (struct sockaddr *)VAR_12, VAR_13, VAR_16, ((void*)0)) == 0)
  VAR_9.udps_fullsock++;
 else
  FUNC_11(VAR_10->in6p_socket);
}
