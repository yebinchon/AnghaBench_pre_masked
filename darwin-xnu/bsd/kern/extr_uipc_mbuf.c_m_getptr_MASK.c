
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_len; struct mbuf* m_next; } ;



struct mbuf *
FUNC_0(struct mbuf *VAR_0, int VAR_1, int *VAR_2)
{

 while (VAR_1 >= 0) {

  if (VAR_0->m_len > VAR_1) {
   *VAR_2 = VAR_1;
   return (VAR_0);
  } else {
   VAR_1 -= VAR_0->m_len;
   if (VAR_0->m_next == ((void*)0)) {
    if (VAR_1 == 0) {

     *VAR_2 = VAR_0->m_len;
     return (VAR_0);
    }
    return (((void*)0));
   }
   VAR_0 = VAR_0->m_next;
  }
 }
 return (((void*)0));
}
