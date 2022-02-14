
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {scalar_t__ sa_family; } ;
struct ifnet {int if_multiaddrs; } ;
struct ifmultiaddr {int ifma_flags; scalar_t__ ifma_anoncnt; int ifma_debug; scalar_t__ ifma_reqcnt; TYPE_1__* ifma_addr; struct ifmultiaddr* ifma_ll; struct ifnet* ifma_ifp; } ;
struct TYPE_2__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sockaddr*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ifmultiaddr*) ;
 int FUNC_2 (struct ifmultiaddr*) ;
 int FUNC_3 (struct ifmultiaddr*) ;
 int FUNC_4 (struct ifmultiaddr*) ;
 int FUNC_5 (struct ifmultiaddr*) ;
 struct ifmultiaddr* FUNC_6 (int *) ;
 struct ifmultiaddr* FUNC_7 (struct ifmultiaddr*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int) ;
 struct sockaddr* FUNC_9 (struct sockaddr const*) ;
 int FUNC_10 (struct ifnet*,struct ifmultiaddr*,int) ;
 int FUNC_11 (struct sockaddr const*,TYPE_1__*) ;
 int VAR_9 ;
 int FUNC_12 (struct ifnet*,int ,int ,int *) ;
 int FUNC_13 (struct ifnet*) ;
 int FUNC_14 (struct ifnet*) ;
 int FUNC_15 (int ,struct ifmultiaddr*) ;

__attribute__((used)) static int
FUNC_16(struct ifmultiaddr *VAR_10, struct ifnet *VAR_11,
    const struct sockaddr *VAR_12, int VAR_13)
{
 struct sockaddr *VAR_14 = ((void*)0);
 int VAR_15, VAR_16 = 0, VAR_17;
 struct ifmultiaddr *VAR_18 = ((void*)0);


 FUNC_8(VAR_10 != ((void*)0) || (VAR_11 != ((void*)0) && VAR_12 != ((void*)0)));

 if (VAR_10 != ((void*)0))
  VAR_11 = VAR_10->ifma_ifp;

 if (VAR_12 != ((void*)0) &&
     (VAR_12->sa_family == VAR_0 || VAR_12->sa_family == VAR_1)) {
  VAR_14 = FUNC_9(VAR_12);
  if (VAR_14 == ((void*)0))
   return (VAR_3);
  VAR_12 = VAR_14;
 }

 FUNC_14(VAR_11);
 if (VAR_10 == ((void*)0)) {
  for (VAR_10 = FUNC_6(&VAR_11->if_multiaddrs); VAR_10 != ((void*)0);
      VAR_10 = FUNC_7(VAR_10, VAR_9)) {
   FUNC_2(VAR_10);
   if (!FUNC_11(VAR_12, VAR_10->ifma_addr) ||
       (VAR_13 && !(VAR_10->ifma_flags & VAR_5))) {
    FUNC_8(!(VAR_10->ifma_flags & VAR_5) ||
        VAR_10->ifma_anoncnt != 0);
    FUNC_5(VAR_10);
    continue;
   }

   break;
  }
  if (VAR_10 == ((void*)0)) {
   if (VAR_14 != ((void*)0))
    FUNC_0(VAR_14, VAR_6);
   FUNC_13(VAR_11);
   return (VAR_2);
  }
 } else {
  FUNC_2(VAR_10);
 }
 FUNC_3(VAR_10);
 FUNC_1(VAR_10);
 VAR_15 = FUNC_10(VAR_11, VAR_10, VAR_13);
 FUNC_8(!VAR_15 || (!(VAR_10->ifma_debug & VAR_4) &&
     VAR_10->ifma_reqcnt == 0));
 FUNC_8(!VAR_13 || VAR_10->ifma_ll == ((void*)0));
 VAR_18 = VAR_10->ifma_ll;
 VAR_17 = (VAR_10->ifma_addr->sa_family == VAR_1 ||
     VAR_10->ifma_addr->sa_family == VAR_0);
 FUNC_5(VAR_10);
 if (VAR_15 && VAR_18 != ((void*)0)) {
  FUNC_2(VAR_18);
  VAR_16 = FUNC_10(VAR_11, VAR_18, 0);
  FUNC_5(VAR_18);
 }
 FUNC_13(VAR_11);

 if (VAR_15)
  FUNC_15(VAR_7, VAR_10);

 if ((VAR_18 == ((void*)0) && VAR_15 && VAR_17) || VAR_16) {






  FUNC_12(VAR_11, 0, VAR_8, ((void*)0));
 }

 if (VAR_15)
  FUNC_4(VAR_10);
 if (VAR_16)
  FUNC_4(VAR_18);

 FUNC_4(VAR_10);
 if (VAR_14 != ((void*)0))
  FUNC_0(VAR_14, VAR_6);

 return (0);
}
