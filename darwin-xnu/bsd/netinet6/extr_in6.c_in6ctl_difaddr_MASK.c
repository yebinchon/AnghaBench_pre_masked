
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * s6_addr32; } ;
struct TYPE_6__ {TYPE_1__ sin6_addr; } ;
struct TYPE_8__ {int * s6_addr32; } ;
struct nd_prefix {int ndpr_plen; int ndpr_addrcnt; int ndpr_expire; TYPE_2__ ndpr_prefix; TYPE_4__ ndpr_mask; struct ifnet* ndpr_ifp; } ;
struct TYPE_7__ {TYPE_4__ sin6_addr; } ;
struct in6_ifaddr {int ia_ifa; TYPE_3__ ia_prefixmask; TYPE_2__ ia_addr; } ;
struct ifnet {int dummy; } ;
typedef int pr0 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct nd_prefix*) ;
 int FUNC_3 (struct nd_prefix*) ;
 int FUNC_4 (struct nd_prefix*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct nd_prefix*,int) ;
 int FUNC_7 (TYPE_4__*,int *) ;
 int FUNC_8 (int *) ;
 struct nd_prefix* FUNC_9 (struct nd_prefix*,int ) ;

__attribute__((used)) static __attribute__((noinline)) void
FUNC_10(struct ifnet *VAR_1, struct in6_ifaddr *VAR_2)
{
 int VAR_3 = 0;
 struct nd_prefix VAR_4, *VAR_5;

 FUNC_5(VAR_1 != ((void*)0) && VAR_2 != ((void*)0));
 FUNC_0(&VAR_2->ia_ifa);
 FUNC_6(&VAR_4, sizeof (VAR_4));
 VAR_4 = VAR_1;
 VAR_4 = FUNC_7(&VAR_2->ia_prefixmask.sin6_addr, ((void*)0));
 if (VAR_4 == 128) {
  FUNC_1(&VAR_2->ia_ifa);
  goto purgeaddr;
 }
 VAR_4 = VAR_2->ia_addr;
 VAR_4 = VAR_2->ia_prefixmask.sin6_addr;
 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  VAR_4[VAR_3] &=
      VAR_2->ia_prefixmask.sin6_addr.s6_addr32[VAR_3];
 }
 FUNC_1(&VAR_2->ia_ifa);

 if ((VAR_5 = FUNC_9(&VAR_4, VAR_0)) != ((void*)0)) {
  FUNC_0(&VAR_2->ia_ifa);
  FUNC_2(VAR_5);
  if (VAR_5->ndpr_addrcnt == 1) {

   VAR_5->ndpr_expire = 1;
  }
  FUNC_4(VAR_5);
  FUNC_1(&VAR_2->ia_ifa);


  FUNC_3(VAR_5);
 }

purgeaddr:
 FUNC_8(&VAR_2->ia_ifa);
}
