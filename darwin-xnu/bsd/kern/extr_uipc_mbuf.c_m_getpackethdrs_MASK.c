
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {struct mbuf* m_nextpkt; } ;


 int VAR_0 ;
 struct mbuf* FUNC_0 (int,int ) ;

struct mbuf *
FUNC_1(int VAR_1, int VAR_2)
{
 struct mbuf *VAR_3;
 struct mbuf **VAR_4, *VAR_5;

 VAR_5 = ((void*)0);
 VAR_4 = &VAR_5;

 while (VAR_1--) {
  VAR_3 = FUNC_0(VAR_2, VAR_0);
  if (VAR_3 == ((void*)0))
   break;

  *VAR_4 = VAR_3;
  VAR_4 = &VAR_3->m_nextpkt;
 }

 return (VAR_5);
}
