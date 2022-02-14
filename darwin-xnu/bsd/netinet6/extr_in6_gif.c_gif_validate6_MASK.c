
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_len; int sin6_addr; int sin6_family; } ;
struct sockaddr {int dummy; } ;
struct rtentry {struct ifnet* rt_ifp; } ;
struct ip6_hdr {int ip6_src; int ip6_dst; } ;
struct ifnet {int dummy; } ;
struct gif_softc {int gif_if; scalar_t__ gif_pdst; scalar_t__ gif_psrc; } ;
typedef int sin6 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int VAR_2 ;
 int FUNC_1 (struct rtentry*) ;
 int FUNC_2 (struct rtentry*) ;
 int FUNC_3 (struct sockaddr_in6*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,int ,int ) ;
 struct rtentry* FUNC_8 (struct sockaddr*,int ,int ) ;
 int FUNC_9 (struct rtentry*) ;

__attribute__((used)) static int
FUNC_10(
 const struct ip6_hdr *VAR_3,
 struct gif_softc *VAR_4,
 struct ifnet *VAR_5)
{
 struct sockaddr_in6 *VAR_6, *VAR_7;

 VAR_6 = (struct sockaddr_in6 *)(void *)VAR_4->gif_psrc;
 VAR_7 = (struct sockaddr_in6 *)(void *)VAR_4->gif_pdst;






 if (!FUNC_0(&VAR_6->sin6_addr, &VAR_3->ip6_dst) ||
     !FUNC_0(&VAR_7->sin6_addr, &VAR_3->ip6_src))
  return (0);




 if ((FUNC_5(VAR_4->gif_if) & VAR_1) == 0 && VAR_5) {
  struct sockaddr_in6 VAR_8;
  struct rtentry *VAR_9;

  FUNC_3(&VAR_8, sizeof (VAR_8));
  VAR_8 = VAR_0;
  VAR_8 = sizeof (struct sockaddr_in6);
  VAR_8 = VAR_3->ip6_src;

  VAR_9 = FUNC_8((struct sockaddr *)&VAR_8, 0, 0);
  if (VAR_9 != ((void*)0))
   FUNC_1(VAR_9);
  if (!VAR_9 || VAR_9->rt_ifp != VAR_5) {





   if (VAR_9 != ((void*)0)) {
    FUNC_2(VAR_9);
    FUNC_9(VAR_9);
   }
   return (0);
  }
  FUNC_2(VAR_9);
  FUNC_9(VAR_9);
 }

 return (128 * 2);
}
