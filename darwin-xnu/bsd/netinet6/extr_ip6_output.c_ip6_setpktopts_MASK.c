
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_len; scalar_t__ m_next; } ;
struct ip6_pktopts {int dummy; } ;
struct cmsghdr {int cmsg_len; scalar_t__ cmsg_level; int cmsg_type; } ;


 int FUNC_0 (struct cmsghdr*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct cmsghdr* FUNC_2 (struct mbuf*) ;
 int VAR_2 ;
 struct cmsghdr* FUNC_3 (struct mbuf*,struct cmsghdr*) ;
 int FUNC_4 (struct ip6_pktopts*,struct ip6_pktopts*,int ) ;
 int FUNC_5 (struct ip6_pktopts*) ;
 int FUNC_6 (int ,int ,int,struct ip6_pktopts*,int ,int,int) ;

int
FUNC_7(struct mbuf *VAR_3, struct ip6_pktopts *VAR_4,
    struct ip6_pktopts *VAR_5, int VAR_6)
{
 struct cmsghdr *VAR_7 = ((void*)0);

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return (VAR_0);

 FUNC_5(VAR_4);
 if (VAR_5) {
  int VAR_8;
  if ((VAR_8 = FUNC_4(VAR_4, VAR_5, VAR_2)) != 0)
   return (VAR_8);
 }





 if (VAR_3->m_next)
  return (VAR_0);

 if (VAR_3->m_len < FUNC_1(0))
  return (VAR_0);

 for (VAR_7 = FUNC_2(VAR_3); VAR_7 != ((void*)0);
     VAR_7 = FUNC_3(VAR_3, VAR_7)) {
  int VAR_9;

  if (VAR_7->cmsg_len < sizeof (struct cmsghdr) ||
      VAR_7->cmsg_len > VAR_3->m_len)
   return (VAR_0);
  if (VAR_7->cmsg_level != VAR_1)
   continue;

  VAR_9 = FUNC_6(VAR_7->cmsg_type, FUNC_0(VAR_7),
      VAR_7->cmsg_len - FUNC_1(0), VAR_4, 0, 1, VAR_6);
  if (VAR_9)
   return (VAR_9);
 }

 return (0);
}
