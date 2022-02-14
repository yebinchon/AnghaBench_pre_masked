
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct socket {int so_flags; int so_rcv; } ;
struct TYPE_2__ {int pkt_flags; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mbuf*) ;
 scalar_t__ FUNC_1 (struct mbuf*) ;
 int FUNC_2 (int *,struct mbuf*) ;
 int FUNC_3 (int *,struct mbuf*,int ,int) ;
 int FUNC_4 (int *,struct mbuf*) ;

int
FUNC_5(struct socket *VAR_4, struct mbuf *VAR_5, uint32_t VAR_6,
 int VAR_7)
{
 int VAR_8 = 0;

 if ((VAR_5 != ((void*)0)) &&
     FUNC_1(VAR_5) <= 0 &&
     !((VAR_4->so_flags & VAR_3) &&
       (VAR_5->m_flags & VAR_0) &&
       (VAR_5->m_pkthdr.pkt_flags & VAR_1))) {
  FUNC_0(VAR_5);
  return (VAR_8);
 }

 if (VAR_4->so_flags & VAR_2) {
  VAR_8 = FUNC_3(&VAR_4->so_rcv, VAR_5, VAR_6, VAR_7);
 }





 else {
  VAR_8 = FUNC_4(&VAR_4->so_rcv, VAR_5);
 }
 return (VAR_8);
}
