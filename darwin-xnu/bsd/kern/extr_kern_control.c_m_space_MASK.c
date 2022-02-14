
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {scalar_t__ m_len; struct mbuf* m_next; } ;



__attribute__((used)) static int
FUNC_0(struct mbuf *VAR_0)
{
 int VAR_1 = 0;
 struct mbuf *VAR_2;

 for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->m_next)
  VAR_1 += VAR_2->m_len;

 return (VAR_1);
}
