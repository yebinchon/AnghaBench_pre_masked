
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {struct mbuf* sb_mb; } ;
struct socket {TYPE_1__ so_snd; } ;
struct mptses {int dummy; } ;
struct TYPE_4__ {scalar_t__ mp_dsn; scalar_t__ mp_rlen; } ;
struct mbuf {struct mbuf* m_next; TYPE_2__ m_pkthdr; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 struct socket* FUNC_2 (struct mptses*) ;

__attribute__((used)) static struct mbuf *
FUNC_3(struct mptses *VAR_0, uint64_t VAR_1)
{
 struct socket *VAR_2 = FUNC_2(VAR_0);
 struct mbuf *VAR_3;

 VAR_3 = VAR_2->so_snd.sb_mb;

 while (VAR_3) {

  if (FUNC_1(VAR_3->m_pkthdr.mp_dsn, VAR_1) &&
      FUNC_0(VAR_3->m_pkthdr.mp_dsn + VAR_3->m_pkthdr.mp_rlen, VAR_1))
   break;



  if (FUNC_0(VAR_3->m_pkthdr.mp_dsn, VAR_1))
   return ((void*)0);

  VAR_3 = VAR_3->m_next;
 }

 return VAR_3;
}
