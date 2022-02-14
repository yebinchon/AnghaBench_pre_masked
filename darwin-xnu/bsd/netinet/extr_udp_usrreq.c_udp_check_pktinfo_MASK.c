
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_len; scalar_t__ m_next; } ;
struct in_addr {int s_addr; } ;
struct in_pktinfo {int ipi_ifindex; struct in_addr ipi_spec_dst; } ;
struct ifnet {int dummy; } ;
struct cmsghdr {int cmsg_len; scalar_t__ cmsg_level; scalar_t__ cmsg_type; } ;


 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct cmsghdr* FUNC_2 (struct mbuf*) ;
 struct cmsghdr* FUNC_3 (struct mbuf*,struct cmsghdr*) ;
 int VAR_5 ;
 struct ifnet** VAR_6 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct ifnet*) ;

__attribute__((used)) static int
FUNC_7(struct mbuf *VAR_7, struct ifnet **VAR_8,
    struct in_addr *VAR_9)
{
 struct cmsghdr *VAR_10 = 0;
 struct in_pktinfo *VAR_11;
 struct ifnet *VAR_12;

 if (VAR_8 != ((void*)0))
  *VAR_8 = ((void*)0);





 if (VAR_7->m_next)
  return (VAR_0);

 if (VAR_7->m_len < FUNC_1(0))
  return (VAR_0);

 for (VAR_10 = FUNC_2(VAR_7); VAR_10;
     VAR_10 = FUNC_3(VAR_7, VAR_10)) {
  if (VAR_10->cmsg_len < sizeof (struct cmsghdr) ||
      VAR_10->cmsg_len > VAR_7->m_len)
   return (VAR_0);

  if (VAR_10->cmsg_level != VAR_3 || VAR_10->cmsg_type != VAR_4)
   continue;

  if (VAR_10->cmsg_len != FUNC_1(sizeof (struct in_pktinfo)))
   return (VAR_0);

  VAR_11 = (struct in_pktinfo *)(void *)FUNC_0(VAR_10);


  FUNC_5();

  if (VAR_11->ipi_ifindex > VAR_5) {
   FUNC_4();
   return (VAR_1);
  }





  if (VAR_11->ipi_ifindex) {
   VAR_12 = VAR_6[VAR_11->ipi_ifindex];
   if (VAR_12 == ((void*)0)) {
    FUNC_4();
    return (VAR_1);
   }
   if (VAR_8 != ((void*)0)) {
    FUNC_6(VAR_12);
    *VAR_8 = VAR_12;
   }
   FUNC_4();
   VAR_9->s_addr = VAR_2;
   break;
  }

  FUNC_4();





  *VAR_9 = VAR_11->ipi_spec_dst;
  break;
 }
 return (0);
}
