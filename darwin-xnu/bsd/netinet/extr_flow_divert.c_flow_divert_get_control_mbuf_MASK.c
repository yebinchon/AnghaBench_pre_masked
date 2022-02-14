
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct inpcb {int inp_vflag; int inp_flags; } ;
struct in_addr {int dummy; } ;
struct in6_pktinfo {scalar_t__ ipi6_ifindex; int ipi6_addr; } ;
struct in6_addr {int dummy; } ;
struct flow_divert_pcb {scalar_t__ local_address; int so; } ;
typedef int * mbuf_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (int ,int,int ,int ) ;
 struct inpcb* FUNC_2 (int ) ;

__attribute__((used)) static mbuf_t
FUNC_3(struct flow_divert_pcb *VAR_8)
{
 struct inpcb *VAR_9 = FUNC_2(VAR_8->so);
 if (VAR_9->inp_vflag & VAR_1 && VAR_9->inp_flags & VAR_3) {
  struct sockaddr_in *VAR_10 = (struct sockaddr_in *)(void *)VAR_8->local_address;

  return FUNC_1((caddr_t) &VAR_10->sin_addr, sizeof(struct in_addr), VAR_7, VAR_4);
 } else if (VAR_9->inp_vflag & VAR_2 && (VAR_9->inp_flags & VAR_0) != 0) {
  struct sockaddr_in6 *VAR_11 = (struct sockaddr_in6 *)(void *)VAR_8->local_address;
  struct in6_pktinfo VAR_12;

  FUNC_0(&VAR_11->sin6_addr, &VAR_12, sizeof (struct in6_addr));
  VAR_12 = 0;
  return FUNC_1((caddr_t)&VAR_12, sizeof (struct in6_pktinfo), VAR_6, VAR_5);
 }
 return (((void*)0));
}
