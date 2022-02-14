
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct mbuf*) ;
 int VAR_1 ;
 int * FUNC_2 (struct mbuf*) ;

int
FUNC_3(struct mbuf *VAR_2)
{
 if (!(VAR_2->m_flags & VAR_1))
  return (0);

 FUNC_0(FUNC_2(VAR_2) != ((void*)0));

 return ((FUNC_1(VAR_2) & VAR_0) ? 1 : 0);
}
