
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
typedef scalar_t__ u_int16_t ;
struct TYPE_2__ {int tags; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;
struct m_tag {scalar_t__ m_tag_cookie; scalar_t__ m_tag_id; scalar_t__ m_tag_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct m_tag* FUNC_0 (int *) ;
 struct m_tag* FUNC_1 (struct m_tag*,int ) ;
 int FUNC_2 (int) ;
 int VAR_2 ;

struct m_tag *
FUNC_3(struct mbuf *VAR_3, u_int32_t VAR_4, u_int16_t VAR_5, struct m_tag *VAR_6)
{
 struct m_tag *VAR_7;

 FUNC_2(VAR_3->m_flags & VAR_0);

 if (VAR_6 == ((void*)0)) {
  VAR_7 = FUNC_0(&VAR_3->m_pkthdr.tags);
 } else {
  FUNC_2(VAR_6->m_tag_cookie == VAR_1);
  VAR_7 = FUNC_1(VAR_6, VAR_2);
 }
 while (VAR_7 != ((void*)0)) {
  FUNC_2(VAR_7->m_tag_cookie == VAR_1);
  if (VAR_7->m_tag_id == VAR_4 && VAR_7->m_tag_type == VAR_5)
   return (VAR_7);
  VAR_7 = FUNC_1(VAR_7, VAR_2);
 }
 return (((void*)0));
}
