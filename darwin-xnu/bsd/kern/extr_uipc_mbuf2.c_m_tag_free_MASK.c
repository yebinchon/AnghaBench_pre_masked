
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
struct mbuf {int m_flags; scalar_t__ m_data; } ;
struct m_taghdr {scalar_t__ refcnt; } ;
struct m_tag {scalar_t__ m_tag_id; scalar_t__ m_tag_type; scalar_t__ m_tag_cookie; int m_tag_len; } ;
typedef int caddr_t ;


 int FUNC_0 (struct m_taghdr*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int) ;
 struct mbuf* FUNC_3 (struct m_tag*) ;
 int FUNC_4 (struct mbuf*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct m_tag*) ;

void
FUNC_7(struct m_tag *VAR_6)
{






 if (VAR_6 == ((void*)0))
  return;

 FUNC_2(VAR_6->m_tag_cookie == VAR_5);

 if (FUNC_1(VAR_6->m_tag_len) + sizeof (struct m_taghdr) <= VAR_2) {
  struct mbuf * VAR_7 = FUNC_3(VAR_6);
  FUNC_2(VAR_7->m_flags & VAR_3);
  struct m_taghdr *VAR_8 = (struct m_taghdr *)(void *)VAR_7->m_data;

  FUNC_2(FUNC_0(VAR_8 + 1, sizeof (u_int64_t)));


  if(--VAR_8->refcnt == 0) {
   FUNC_4(VAR_7);
   return;
  }


  u_int64_t *VAR_9 = (u_int64_t *)VAR_6;
  u_int64_t *VAR_10 = (u_int64_t *)(VAR_6 + 1);
  while (VAR_9 < VAR_10) {
   *VAR_9 = VAR_4;
   VAR_9++;
  }
 } else {
  FUNC_5((caddr_t)VAR_6);
 }
}
