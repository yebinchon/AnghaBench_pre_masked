
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {struct mbuf* m_next; } ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct mbuf*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int) ;
 struct mbuf* FUNC_2 (struct mbuf*,struct mbuf**) ;
 int FUNC_3 (struct mbuf*) ;
 int VAR_2 ;

struct mbuf *
FUNC_4(struct mbuf *VAR_3)
{
 struct mbuf *VAR_4 = ((void*)0);
 struct mbuf **VAR_5 = &VAR_4;
 boolean_t VAR_6 = VAR_0;

 while (VAR_3 != ((void*)0)) {
  struct mbuf *VAR_7;

  VAR_7 = VAR_3->m_next;
  VAR_3->m_next = ((void*)0);


  if (FUNC_0(VAR_3)) {
   struct mbuf *VAR_8;
   if ((VAR_3 = FUNC_2(VAR_3, &VAR_8)) == ((void*)0)) {
    FUNC_3(VAR_7);
    FUNC_3(VAR_4);
    VAR_4 = ((void*)0);
    break;
   }
   *VAR_5 = VAR_3;
   VAR_5 = &VAR_8->m_next;
   VAR_6 = VAR_1;
  } else {
   *VAR_5 = VAR_3;
   VAR_5 = &VAR_3->m_next;
  }
  VAR_3 = VAR_7;
 }
 if (VAR_6)
  FUNC_1(&VAR_2, 1);
 return (VAR_4);
}
