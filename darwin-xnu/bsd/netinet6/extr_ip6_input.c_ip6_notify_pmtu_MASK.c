
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct socket {int so_rcv; TYPE_1__* so_proto; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct mbuf {int dummy; } ;
struct ip6_mtuinfo {struct sockaddr_in6 ip6m_addr; int ip6m_mtu; } ;
struct inpcb {int inp_flags; int in6p_faddr; struct socket* inp_socket; } ;
typedef int mtuctl ;
typedef int caddr_t ;
struct TYPE_2__ {scalar_t__ pr_protocol; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct sockaddr_in6*) ;
 int VAR_4 ;
 int FUNC_3 (struct ip6_mtuinfo*,int) ;
 int FUNC_4 (struct mbuf*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (struct sockaddr_in6*,int ) ;
 scalar_t__ FUNC_7 (int *,int ,int *,struct mbuf*,int *) ;
 struct mbuf* FUNC_8 (int ,int,int ,int ) ;
 int FUNC_9 (struct socket*) ;

void
FUNC_10(struct inpcb *VAR_5, struct sockaddr_in6 *VAR_6, u_int32_t *VAR_7)
{
 struct socket *VAR_8;
 struct mbuf *VAR_9;
 struct ip6_mtuinfo VAR_10;

 VAR_8 = VAR_5->inp_socket;

 if ((VAR_5->inp_flags & VAR_0) == 0)
  return;

 if (VAR_7 == ((void*)0))
  return;
 if (FUNC_1(&VAR_5->in6p_faddr) &&
     (VAR_8->so_proto == ((void*)0) || VAR_8->so_proto->pr_protocol == VAR_2))
  return;

 if (!FUNC_1(&VAR_5->in6p_faddr) &&
     !FUNC_0(&VAR_5->in6p_faddr, &VAR_6->sin6_addr))
  return;

 FUNC_3(&VAR_10, sizeof (VAR_10));
 VAR_10.ip6m_mtu = *VAR_7;
 VAR_10.ip6m_addr = *VAR_6;
 if (FUNC_6(&VAR_10.ip6m_addr, VAR_4))
  return;

 if ((VAR_9 = FUNC_8((caddr_t)&VAR_10, sizeof (VAR_10),
     VAR_3, VAR_1)) == ((void*)0))
  return;

 if (FUNC_7(&VAR_8->so_rcv, FUNC_2(VAR_6), ((void*)0), VAR_9, ((void*)0)) == 0) {
  FUNC_4(VAR_9);

 } else {
  FUNC_9(VAR_8);
 }
}
