
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct in_addr {int s_addr; } ;
struct sockaddr_in {int sin_len; struct in_addr sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct rtentry {TYPE_2__* rt_ifp; TYPE_1__* rt_gateway; } ;
typedef int sin ;
struct TYPE_4__ {int if_flags; } ;
struct TYPE_3__ {scalar_t__ sa_family; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct rtentry*) ;
 int FUNC_2 (struct rtentry*) ;
 int FUNC_3 (struct in_addr) ;
 scalar_t__ FUNC_4 (int ) ;
 struct rtentry* FUNC_5 (struct sockaddr*,int ,int ) ;
 int FUNC_6 (struct rtentry*) ;

int
FUNC_7(struct in_addr VAR_6)
{
 struct rtentry *VAR_7;
 struct sockaddr_in VAR_8;
 int VAR_9 = 0;

 if (FUNC_4(VAR_6.s_addr) == VAR_3 ||
     FUNC_0(FUNC_4(VAR_6.s_addr))) {
  VAR_9 = 1;
 } else if (FUNC_4(VAR_6.s_addr) >= VAR_5 &&
     FUNC_4(VAR_6.s_addr) <= VAR_4) {
   VAR_9 = 1;
 } else {
  VAR_8.sin_family = VAR_0;
  VAR_8.sin_len = sizeof (VAR_8);
  VAR_8.sin_addr = VAR_6;
  VAR_7 = FUNC_5((struct sockaddr *)&VAR_8, 0, 0);

  if (VAR_7 != ((void*)0)) {
   FUNC_1(VAR_7);
   if (VAR_7->rt_gateway->sa_family == VAR_1 ||
       (VAR_7->rt_ifp->if_flags & VAR_2))
    VAR_9 = 1;
   FUNC_2(VAR_7);
   FUNC_6(VAR_7);
  } else {
   VAR_9 = FUNC_3(VAR_6);
  }
 }
 return (VAR_9);
}
