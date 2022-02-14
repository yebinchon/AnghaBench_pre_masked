
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int64_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
struct TYPE_2__ {int tags; } ;
struct mbuf {int m_flags; int m_len; scalar_t__ m_data; TYPE_1__ m_pkthdr; } ;
struct m_taghdr {int m_tag_len; scalar_t__ m_tag_cookie; int m_tag_id; int m_tag_type; int refcnt; } ;
struct m_tag {int m_tag_len; scalar_t__ m_tag_cookie; int m_tag_id; int m_tag_type; int refcnt; } ;


 int FUNC_0 (struct m_taghdr*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 struct m_taghdr* FUNC_2 (int *) ;
 struct m_taghdr* FUNC_3 (struct m_taghdr*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct m_taghdr*,int) ;
 struct mbuf* FUNC_6 (struct m_taghdr*) ;
 struct m_taghdr* FUNC_7 (int ,int ,int,int) ;
 int VAR_4 ;

struct m_tag *
FUNC_8(u_int32_t VAR_5, u_int16_t VAR_6, int VAR_7, int VAR_8, struct mbuf *VAR_9)
{
 struct m_tag *VAR_10 = ((void*)0);
 struct m_tag *VAR_11;

 if (VAR_7 < 0)
  return (((void*)0));

 if (VAR_7 + sizeof (struct m_tag) + sizeof (struct m_taghdr) > VAR_0)
  return (FUNC_7(VAR_5, VAR_6, VAR_7, VAR_8));






 VAR_11 = FUNC_2(&VAR_9->m_pkthdr.tags);
 while(VAR_11 != ((void*)0)) {

  if (FUNC_1(VAR_11->m_tag_len) +
      sizeof (struct m_taghdr) > VAR_0) {
   VAR_11 = FUNC_3(VAR_11, VAR_4);
   continue;
  }

  FUNC_4(VAR_11->m_tag_cookie == VAR_3);

  struct mbuf *VAR_12 = FUNC_6(VAR_11);
  struct m_taghdr *VAR_13 = (struct m_taghdr *)(void *)VAR_12->m_data;

  FUNC_4(FUNC_0(VAR_13 + 1, sizeof (u_int64_t)));
  FUNC_4(VAR_12->m_flags & VAR_2 && !(VAR_12->m_flags & VAR_1));


  if (FUNC_1(VAR_7) <= VAR_0 - VAR_12->m_len) {
   VAR_10 = (struct m_tag *)(void *)(VAR_12->m_data + VAR_12->m_len);
   FUNC_4(FUNC_0(VAR_10, sizeof (u_int64_t)));
   VAR_13->refcnt++;
   VAR_12->m_len += FUNC_1(VAR_7);
   FUNC_4(VAR_12->m_len <= VAR_0);
   break;
  }

  VAR_11 = FUNC_3(VAR_11, VAR_4);
 }

 if (VAR_10 == ((void*)0))
  return (FUNC_7(VAR_5, VAR_6, VAR_7, VAR_8));

 VAR_10->m_tag_cookie = VAR_3;
 VAR_10->m_tag_type = VAR_6;
 VAR_10->m_tag_len = VAR_7;
 VAR_10->m_tag_id = VAR_5;
 if (VAR_7 > 0)
  FUNC_5(VAR_10 + 1, VAR_7);
 return (VAR_10);
}
