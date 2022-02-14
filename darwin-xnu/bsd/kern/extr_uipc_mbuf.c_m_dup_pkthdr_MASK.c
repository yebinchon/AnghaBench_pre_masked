
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_flags; int m_pkthdr; int m_pktdat; int m_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mbuf*) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct mbuf*,struct mbuf*,int) ;
 int FUNC_4 (struct mbuf*,int *) ;
 int FUNC_5 (struct mbuf*,int ) ;

__attribute__((used)) static int
FUNC_6(struct mbuf *VAR_3, struct mbuf *VAR_4, int VAR_5)
{
 FUNC_0(VAR_4->m_flags & VAR_2);


 FUNC_2(VAR_4);

 if (VAR_3->m_flags & VAR_2) {

  FUNC_2(VAR_3);

  FUNC_4(VAR_3, ((void*)0));
 }
 VAR_3->m_flags = (VAR_4->m_flags & VAR_0) | (VAR_3->m_flags & VAR_1);
 if ((VAR_3->m_flags & VAR_1) == 0)
  VAR_3->m_data = VAR_3->m_pktdat;
 VAR_3->m_pkthdr = VAR_4->m_pkthdr;
 FUNC_1(VAR_3);
 FUNC_5(VAR_3, 0);
 return (FUNC_3(VAR_3, VAR_4, VAR_5));
}
