
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_len; int m_data; int * m_next; } ;


 int FUNC_0 (struct mbuf*,int ) ;
 int FUNC_1 (struct mbuf*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct mbuf*,struct mbuf*) ;
 int FUNC_4 (struct mbuf*) ;

__attribute__((used)) static struct mbuf *
FUNC_5(
      int VAR_3)
{
 struct mbuf *VAR_4 = ((void*)0), *VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = VAR_3;
 while (VAR_6 > 0) {
  FUNC_1(VAR_5, VAR_2, VAR_1);
  if (VAR_5 && VAR_6 > VAR_0)
   FUNC_0(VAR_5, VAR_2);
  if (!VAR_5) {
   FUNC_4(VAR_4);
   return ((void*)0);
  }

  VAR_5->m_next = ((void*)0);
  VAR_5->m_len = 0;
  VAR_5->m_len = FUNC_2(VAR_5);

  if (VAR_5->m_len > VAR_6) {
   VAR_7 = (VAR_5->m_len - VAR_6) & ~(sizeof(long) - 1);
   VAR_5->m_data += VAR_7;
   VAR_5->m_len = VAR_6;
  }

  VAR_6 -= VAR_5->m_len;

  if (VAR_4)
   FUNC_3(VAR_4, VAR_5);
  else
   VAR_4 = VAR_5;
 }

 return VAR_4;
}
