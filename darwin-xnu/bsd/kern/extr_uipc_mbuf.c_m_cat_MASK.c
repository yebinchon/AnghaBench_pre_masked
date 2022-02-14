
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct mbuf {int m_flags; int m_len; struct mbuf* m_next; int * m_dat; int * m_data; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct mbuf*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int,int,int ) ;
 int VAR_2 ;
 struct mbuf* FUNC_2 (struct mbuf*) ;

void
FUNC_3(struct mbuf *VAR_3, struct mbuf *VAR_4)
{
 while (VAR_3->m_next)
  VAR_3 = VAR_3->m_next;
 while (VAR_4) {
  if ((VAR_3->m_flags & VAR_1) ||
      VAR_3->m_data + VAR_3->m_len + VAR_4->m_len >= &VAR_3->m_dat[VAR_0]) {

   VAR_3->m_next = VAR_4;
   return;
  }

  FUNC_1(FUNC_0(VAR_4, VAR_2), FUNC_0(VAR_3, VAR_2) + VAR_3->m_len,
      (u_int)VAR_4->m_len);
  VAR_3->m_len += VAR_4->m_len;
  VAR_4 = FUNC_2(VAR_4);
 }
}
