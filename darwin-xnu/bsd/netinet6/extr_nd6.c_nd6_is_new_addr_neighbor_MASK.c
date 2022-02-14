
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct sockaddr_in6 {scalar_t__ sin6_scope_id; int sin6_addr; } ;
struct TYPE_3__ {int sin6_addr; } ;
struct nd_prefix {int ndpr_stateflags; int ndpr_mask; TYPE_1__ ndpr_prefix; struct ifnet* ndpr_ifp; struct nd_prefix* ndpr_next; } ;
struct ifnet {int dummy; } ;
struct ifaddr {struct ifnet* ifa_ifp; } ;
struct TYPE_4__ {struct nd_prefix* lh_first; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifaddr*) ;
 scalar_t__ FUNC_1 (int *,int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct nd_prefix*) ;
 int FUNC_5 (struct nd_prefix*) ;
 int FUNC_6 (struct sockaddr_in6*) ;
 struct ifaddr* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *,struct ifnet*,scalar_t__*) ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 scalar_t__ FUNC_9 (struct sockaddr_in6*,int ) ;

__attribute__((used)) static int
FUNC_10(struct sockaddr_in6 *VAR_5, struct ifnet *VAR_6)
{
 struct nd_prefix *VAR_7;
 struct ifaddr *VAR_8;

 FUNC_3(VAR_3, VAR_1);





 if (FUNC_2(&VAR_5->sin6_addr)) {
  struct sockaddr_in6 VAR_9;
  u_int32_t VAR_10;





  VAR_9 = *VAR_5;
  if (FUNC_9(&VAR_9, VAR_0))
   return (0);
  if (FUNC_8(&VAR_9.sin6_addr, VAR_6, &VAR_10))
   return (0);
  if (VAR_9.sin6_scope_id == VAR_10)
   return (1);
  else
   return (0);
 }







 for (VAR_7 = VAR_4.lh_first; VAR_7; VAR_7 = VAR_7->ndpr_next) {
  FUNC_4(VAR_7);
  if (VAR_7->ndpr_ifp != VAR_6) {
   FUNC_5(VAR_7);
   continue;
  }
  if (!(VAR_7->ndpr_stateflags & VAR_2)) {
   FUNC_5(VAR_7);
   continue;
  }
  if (FUNC_1(&VAR_7->ndpr_prefix.sin6_addr,
      &VAR_5->sin6_addr, &VAR_7->ndpr_mask)) {
   FUNC_5(VAR_7);
   return (1);
  }
  FUNC_5(VAR_7);
 }





 VAR_8 = FUNC_7(FUNC_6(VAR_5));
 if (VAR_8 != ((void*)0)) {
  if (VAR_8->ifa_ifp == VAR_6) {
   FUNC_0(VAR_8);
   return (1);
  }
  FUNC_0(VAR_8);
  VAR_8 = ((void*)0);
 }

 return (0);
}
