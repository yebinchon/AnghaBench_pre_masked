
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {struct mbuf* m_next; } ;



struct mbuf *
FUNC_0(struct mbuf *VAR_0)
{
 while (VAR_0->m_next != ((void*)0))
  VAR_0 = VAR_0->m_next;
 return (VAR_0);
}
