
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
struct mbuf {scalar_t__ m_data; scalar_t__ m_len; int m_flags; } ;
struct m_taghdr {int refcnt; int m_tag_len; int m_tag_id; int m_tag_type; int m_tag_cookie; } ;
struct m_tag {int refcnt; int m_tag_len; int m_tag_id; int m_tag_type; int m_tag_cookie; } ;


 int FUNC_0 (struct m_taghdr*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct m_taghdr*,int) ;
 struct mbuf* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int) ;

struct m_tag *
FUNC_6(u_int32_t VAR_5, u_int16_t VAR_6, int VAR_7, int VAR_8)
{
 struct m_tag *VAR_9;

 if (VAR_7 < 0)
  return (((void*)0));

        if (FUNC_1(VAR_7) + sizeof (struct m_taghdr) <= VAR_1) {
  struct mbuf *VAR_10 = FUNC_4(VAR_8, VAR_2);
  struct m_taghdr *VAR_11;

  if (VAR_10 == ((void*)0))
   return (((void*)0));

  VAR_10->m_flags |= VAR_3;

  VAR_11 = (struct m_taghdr *)(void *)VAR_10->m_data;
  FUNC_2(FUNC_0(VAR_11 + 1, sizeof (u_int64_t)));
  VAR_11->refcnt = 1;
  VAR_10->m_len += sizeof (struct m_taghdr);
  VAR_9 = (struct m_tag *)(void *)(VAR_10->m_data + VAR_10->m_len);
  FUNC_2(FUNC_0(VAR_9, sizeof (u_int64_t)));
  VAR_10->m_len += FUNC_1(VAR_7);
  FUNC_2(VAR_10->m_len <= VAR_1);
        } else if (VAR_7 + sizeof (struct m_tag) <= VAR_0) {
  VAR_9 = (struct m_tag *)(void *)FUNC_5(VAR_8);
        } else {
                VAR_9 = ((void*)0);
 }

 if (VAR_9 == ((void*)0))
  return (((void*)0));

 FUNC_2(FUNC_0(VAR_9, sizeof (u_int64_t)));
 VAR_9->m_tag_cookie = VAR_4;
 VAR_9->m_tag_type = VAR_6;
 VAR_9->m_tag_len = VAR_7;
 VAR_9->m_tag_id = VAR_5;
 if (VAR_7 > 0)
  FUNC_3(VAR_9 + 1, VAR_7);
 return (VAR_9);
}
