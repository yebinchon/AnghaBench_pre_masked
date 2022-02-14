
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int len; } ;
struct mbuf {int m_flags; scalar_t__ m_len; struct mbuf* m_next; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;

unsigned int
FUNC_0(struct mbuf *VAR_1)
{
 struct mbuf *VAR_2;
 unsigned int VAR_3;

 if (VAR_1->m_flags & VAR_0)
  return (VAR_1->m_pkthdr.len);

 VAR_3 = 0;
 for (VAR_2 = VAR_1; VAR_2 != ((void*)0); VAR_2 = VAR_2->m_next)
  VAR_3 += VAR_2->m_len;
 return (VAR_3);
}
