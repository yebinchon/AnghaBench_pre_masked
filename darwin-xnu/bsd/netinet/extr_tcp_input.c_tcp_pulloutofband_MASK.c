
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcphdr {int th_urp; } ;
struct tcpcb {char t_iobc; int t_oobflags; } ;
struct socket {int dummy; } ;
struct TYPE_2__ {int len; } ;
struct mbuf {int m_len; int m_flags; struct mbuf* m_next; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,unsigned int) ;
 int VAR_2 ;
 char* FUNC_1 (struct mbuf*,int ) ;
 int FUNC_2 (char*) ;
 struct tcpcb* FUNC_3 (struct socket*) ;

__attribute__((used)) static void
FUNC_4(struct socket *VAR_3, struct tcphdr *VAR_4, struct mbuf *VAR_5, int VAR_6)
{
 int VAR_7 = VAR_6 + VAR_4->th_urp - 1;

 while (VAR_7 >= 0) {
  if (VAR_5->m_len > VAR_7) {
   char *VAR_8 = FUNC_1(VAR_5, VAR_2) + VAR_7;
   struct tcpcb *VAR_9 = FUNC_3(VAR_3);

   VAR_9->t_iobc = *VAR_8;
   VAR_9->t_oobflags |= VAR_1;
   FUNC_0(VAR_8+1, VAR_8, (unsigned)(VAR_5->m_len - VAR_7 - 1));
   VAR_5->m_len--;
   if (VAR_5->m_flags & VAR_0)
    VAR_5->m_pkthdr.len--;
   return;
  }
  VAR_7 -= VAR_5->m_len;
  VAR_5 = VAR_5->m_next;
  if (VAR_5 == 0)
   break;
 }
 FUNC_2("tcp_pulloutofband");
}
