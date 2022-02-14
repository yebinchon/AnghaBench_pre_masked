
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {struct mbuf* sb_mb; } ;
struct socket {TYPE_1__ so_snd; } ;
struct TYPE_4__ {scalar_t__ mp_dsn; int pkt_flags; scalar_t__ mp_rlen; } ;
struct mbuf {int m_flags; struct mbuf* m_next; TYPE_2__ m_pkthdr; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static boolean_t
FUNC_1(struct mbuf *VAR_4, struct socket *VAR_5)
{
 struct mbuf *VAR_6 = VAR_5->so_snd.sb_mb;
 uint64_t VAR_7 = VAR_4->m_pkthdr.mp_dsn;

 while (VAR_6) {
  FUNC_0(VAR_6->m_flags & VAR_1);
  FUNC_0(VAR_6->m_pkthdr.pkt_flags & VAR_2);


  if (VAR_6->m_pkthdr.mp_dsn <= VAR_7 &&
      VAR_6->m_pkthdr.mp_dsn + VAR_6->m_pkthdr.mp_rlen > VAR_7)
   return VAR_3;

  VAR_6 = VAR_6->m_next;
 }

 return VAR_0;
}
