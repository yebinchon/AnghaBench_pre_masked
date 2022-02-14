
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_flags; struct mbuf* m_next; } ;


 int VAR_0 ;

__attribute__((used)) static struct mbuf *
FUNC_0(struct mbuf *VAR_1)
{
 struct mbuf *VAR_2;


 for (VAR_2 = VAR_1; VAR_2 != ((void*)0); VAR_2 = VAR_2->m_next) {
  if (VAR_2->m_flags & VAR_0)
   break;
 }
 return VAR_2;
}
