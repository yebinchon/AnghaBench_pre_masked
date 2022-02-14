
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct ifnet {int if_multiaddrs; } ;
struct ifmultiaddr {int ifma_flags; int ifma_anoncnt; int ifma_reqcnt; int ifma_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifmultiaddr*) ;
 int FUNC_1 (struct ifmultiaddr*) ;
 int FUNC_2 (struct ifmultiaddr*) ;
 struct ifmultiaddr* FUNC_3 (int *) ;
 struct ifmultiaddr* FUNC_4 (struct ifmultiaddr*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct sockaddr const*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_7(struct ifnet *VAR_3, const struct sockaddr *VAR_4,
    struct ifmultiaddr **VAR_5, int VAR_6)
{
 struct ifmultiaddr *VAR_7;

 for (VAR_7 = FUNC_3(&VAR_3->if_multiaddrs); VAR_7 != ((void*)0);
     VAR_7 = FUNC_4(VAR_7, VAR_2)) {
  FUNC_1(VAR_7);
  if (!FUNC_6(VAR_4, VAR_7->ifma_addr)) {
   FUNC_2(VAR_7);
   continue;
  }
  if (VAR_6) {
   FUNC_5(!(VAR_7->ifma_flags & VAR_1) ||
       VAR_7->ifma_anoncnt != 0);
   FUNC_5((VAR_7->ifma_flags & VAR_1) ||
       VAR_7->ifma_anoncnt == 0);
   VAR_7->ifma_anoncnt++;
   if (!(VAR_7->ifma_flags & VAR_1)) {
    FUNC_5(VAR_7->ifma_anoncnt == 1);
    VAR_7->ifma_flags |= VAR_1;
   }
  }
  if (!VAR_6 || VAR_7->ifma_anoncnt == 1) {
   VAR_7->ifma_reqcnt++;
   FUNC_5(VAR_7->ifma_reqcnt > 1);
  }
  if (VAR_5 != ((void*)0)) {
   *VAR_5 = VAR_7;
   FUNC_0(VAR_7);
  }
  FUNC_2(VAR_7);
  return (0);
 }
 return (VAR_0);
}
