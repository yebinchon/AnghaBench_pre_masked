
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {unsigned int m_len; int m_flags; int m_ext; struct mbuf* m_next; void* m_data; } ;


 scalar_t__ FUNC_0 (uintptr_t,unsigned int) ;
 int FUNC_1 (struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 uintptr_t FUNC_2 (uintptr_t,unsigned int) ;
 unsigned int VAR_3 ;
 int FUNC_3 (int) ;
 struct mbuf* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct mbuf*) ;
 int FUNC_6 (struct mbuf*) ;

__attribute__((used)) static struct mbuf *
FUNC_7(struct mbuf *VAR_4, struct mbuf **VAR_5)
{
 struct mbuf *VAR_6 = ((void*)0);
 struct mbuf **VAR_7 = &VAR_6;
 uintptr_t VAR_8, VAR_9;
 unsigned int VAR_10, VAR_11;

 FUNC_3(FUNC_1(VAR_4));
 FUNC_3(VAR_4->m_next == ((void*)0));
 VAR_8 = (uintptr_t)VAR_4->m_data;
 VAR_10 = VAR_4->m_len;
 *VAR_5 = VAR_6;

 for (;;) {
  struct mbuf *VAR_12;

  VAR_9 = VAR_8;
  if (FUNC_0(VAR_9, VAR_3) && VAR_10 > VAR_3)
   VAR_11 = VAR_3;
  else if (!FUNC_0(VAR_9, VAR_3) &&
      FUNC_2(VAR_9, VAR_3) < (VAR_9 + VAR_10))
   VAR_11 = FUNC_2(VAR_9, VAR_3) - VAR_9;
  else
   VAR_11 = VAR_10;

  FUNC_3(VAR_11 > 0);
  FUNC_3(VAR_4->m_flags & VAR_2);
  VAR_4->m_data = (void *)VAR_9;
  VAR_4->m_len = VAR_11;

  *VAR_7 = *VAR_5 = VAR_4;
  VAR_7 = &VAR_4->m_next;
  VAR_4->m_next = ((void*)0);

  VAR_8 += VAR_11;
  VAR_10 -= VAR_11;
  if (VAR_10 == 0)
   break;

  VAR_12 = FUNC_4(VAR_1, VAR_0);
  if (VAR_12 == ((void*)0)) {
   FUNC_5(VAR_6);
   VAR_6 = *VAR_5 = ((void*)0);
   break;
  }

  VAR_12->m_ext = VAR_4->m_ext;
  FUNC_6(VAR_4);
  VAR_12->m_flags |= VAR_2;
  VAR_4 = VAR_12;
 }
 return (VAR_6);
}
