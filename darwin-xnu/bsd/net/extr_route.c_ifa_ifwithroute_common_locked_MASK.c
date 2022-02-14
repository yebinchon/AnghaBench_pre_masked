
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct rtentry {struct ifaddr* rt_ifa; } ;
struct ifaddr {TYPE_2__* ifa_addr; TYPE_1__* ifa_ifp; } ;
struct TYPE_4__ {scalar_t__ sa_family; } ;
struct TYPE_3__ {unsigned int if_index; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ifaddr*) ;
 int FUNC_1 (struct ifaddr*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct rtentry*) ;
 int FUNC_4 (struct rtentry*) ;
 int FUNC_5 (struct rtentry*) ;
 int FUNC_6 (struct rtentry*) ;
 int FUNC_7 (uintptr_t) ;
 int FUNC_8 (TYPE_2__*,struct sockaddr*) ;
 struct ifaddr* FUNC_9 (struct sockaddr const*,unsigned int) ;
 struct ifaddr* FUNC_10 (struct sockaddr const*) ;
 struct ifaddr* FUNC_11 (struct sockaddr const*,unsigned int) ;
 struct ifaddr* FUNC_12 (struct sockaddr const*,TYPE_1__*) ;
 int VAR_6 ;
 struct rtentry* FUNC_13 (struct sockaddr*,int ,int ,unsigned int) ;
 struct sockaddr* FUNC_14 (int ,struct sockaddr_storage*,int *) ;

__attribute__((used)) static struct ifaddr *
FUNC_15(int VAR_7, const struct sockaddr *VAR_8,
    const struct sockaddr *VAR_9, unsigned int VAR_10)
{
 struct ifaddr *VAR_11 = ((void*)0);
 struct rtentry *VAR_12 = ((void*)0);
 struct sockaddr_storage VAR_13, VAR_14;

 FUNC_2(VAR_6, VAR_2);
 if (VAR_8 != ((void*)0) && VAR_8->sa_family == VAR_0)

  VAR_8 = FUNC_14(FUNC_7((uintptr_t)VAR_8), &VAR_13, ((void*)0));






 if (VAR_9 != ((void*)0) && VAR_9->sa_family == VAR_0)

  VAR_9 = FUNC_14(FUNC_7((uintptr_t)VAR_9), &VAR_14, ((void*)0));

 if (!(VAR_7 & VAR_3)) {







  if (VAR_7 & VAR_4) {
   VAR_11 = FUNC_10(VAR_8);
  }
  if (VAR_11 == ((void*)0))
   VAR_11 = FUNC_9(VAR_9, VAR_10);
 } else {





  VAR_11 = FUNC_10(VAR_9);
 }
 if (VAR_11 == ((void*)0))
  VAR_11 = FUNC_11(VAR_9, VAR_10);
 if (VAR_11 == ((void*)0)) {

  VAR_12 = FUNC_13((struct sockaddr *)(size_t)VAR_8,
      0, 0, VAR_10);
  if (VAR_12 != ((void*)0)) {
   FUNC_4(VAR_12);
   VAR_11 = VAR_12->rt_ifa;
   if (VAR_11 != ((void*)0)) {

    FUNC_3(VAR_12);
    FUNC_0(VAR_11);
   }
   FUNC_5(VAR_12);
   FUNC_6(VAR_12);
   VAR_12 = ((void*)0);
  }
 }





 if (VAR_11 != ((void*)0) && VAR_11->ifa_addr->sa_family != VAR_8->sa_family) {
  struct ifaddr *VAR_15;

  VAR_15 = FUNC_12(VAR_8, VAR_11->ifa_ifp);
  if (VAR_15 != ((void*)0)) {
   FUNC_1(VAR_11);
   VAR_11 = VAR_15;
  }
 }
 if ((VAR_11 == ((void*)0) ||
     !FUNC_8(VAR_11->ifa_addr, (struct sockaddr *)(size_t)VAR_9)) &&
     (VAR_12 = FUNC_13((struct sockaddr *)(size_t)VAR_9,
     0, 0, VAR_10)) != ((void*)0)) {
  if (VAR_11 != ((void*)0))
   FUNC_1(VAR_11);
  FUNC_4(VAR_12);
  VAR_11 = VAR_12->rt_ifa;
  if (VAR_11 != ((void*)0)) {

   FUNC_3(VAR_12);
   FUNC_0(VAR_11);
  }
  FUNC_5(VAR_12);
  FUNC_6(VAR_12);
 }





 if ((VAR_7 & VAR_5) &&
     VAR_11 != ((void*)0) && VAR_11->ifa_ifp->if_index != VAR_10) {
  FUNC_1(VAR_11);
  VAR_11 = ((void*)0);
 }





 if (VAR_11 != ((void*)0) &&
     VAR_11->ifa_addr->sa_family != VAR_8->sa_family) {
  FUNC_1(VAR_11);
  VAR_11 = ((void*)0);
 }

 return (VAR_11);
}
