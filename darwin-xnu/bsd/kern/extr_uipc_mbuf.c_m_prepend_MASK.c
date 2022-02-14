
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_flags; int m_len; struct mbuf* m_next; int m_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct mbuf*,int) ;
 int VAR_1 ;
 int FUNC_1 (struct mbuf*,int) ;
 int FUNC_2 (struct mbuf*,struct mbuf*) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct mbuf*,int,int ) ;
 int FUNC_5 (struct mbuf*) ;

struct mbuf *
FUNC_6(struct mbuf *VAR_3, int VAR_4, int VAR_5)
{
 struct mbuf *VAR_6;

 FUNC_4(VAR_6, VAR_5, VAR_3->m_type);
 if (VAR_6 == ((void*)0)) {
  FUNC_5(VAR_3);
  return (((void*)0));
 }
 if (VAR_3->m_flags & VAR_2) {
  FUNC_2(VAR_6, VAR_3);
  VAR_3->m_flags &= ~VAR_2;
 }
 VAR_6->m_next = VAR_3;
 VAR_3 = VAR_6;
 if (VAR_3->m_flags & VAR_2) {
  FUNC_3(VAR_4 <= VAR_0);
  FUNC_0(VAR_3, VAR_4);
 } else {
  FUNC_3(VAR_4 <= VAR_1);
  FUNC_1(VAR_3, VAR_4);
 }
 VAR_3->m_len = VAR_4;
 return (VAR_3);
}
