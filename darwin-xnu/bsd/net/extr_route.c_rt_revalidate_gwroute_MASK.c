
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct rtentry {int rt_flags; scalar_t__ rt_ifp; TYPE_2__* rt_gateway; TYPE_1__* rt_gwroute; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_9__ {scalar_t__ sa_family; } ;
struct TYPE_8__ {int rt_flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtentry*) ;
 int FUNC_1 (struct rtentry*) ;
 int FUNC_2 (struct rtentry*) ;
 TYPE_2__* FUNC_3 (struct sockaddr_storage*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_6 ;
 TYPE_2__* FUNC_8 (struct rtentry*) ;
 int FUNC_9 (struct rtentry*,TYPE_2__*,struct rtentry*) ;
 int FUNC_10 (TYPE_2__*,struct sockaddr_storage*,int *) ;

void
FUNC_11(struct rtentry *VAR_7, struct rtentry *VAR_8)
{
 FUNC_4(VAR_8 != ((void*)0));

 FUNC_1(VAR_7);
 if ((VAR_7->rt_flags & (VAR_3 | VAR_5)) == (VAR_3 | VAR_5) &&
     VAR_7->rt_ifp == VAR_8->rt_ifp && VAR_7->rt_gateway->sa_family ==
     FUNC_8(VAR_8)->sa_family && (VAR_7->rt_gwroute == ((void*)0) ||
     !(VAR_7->rt_gwroute->rt_flags & VAR_5))) {
  boolean_t VAR_9;
  FUNC_4(VAR_7->rt_flags & (VAR_2 | VAR_4));

  if (VAR_7->rt_gateway->sa_family == VAR_0 ||
      VAR_7->rt_gateway->sa_family == VAR_1) {
   struct sockaddr_storage VAR_10, VAR_11;




   (void) FUNC_10(FUNC_8(VAR_8), &VAR_10, ((void*)0));
   (void) FUNC_10(VAR_7->rt_gateway, &VAR_11, ((void*)0));

   VAR_9 = FUNC_5(FUNC_3(&VAR_10), FUNC_3(&VAR_11));
  } else {
   VAR_9 = FUNC_5(FUNC_8(VAR_8), VAR_7->rt_gateway);
  }


  if (VAR_9) {
   FUNC_2(VAR_7);
   FUNC_6(VAR_6);
   FUNC_0(VAR_7);
   FUNC_9(VAR_7, FUNC_8(VAR_7), VAR_8);
   FUNC_2(VAR_7);
   FUNC_7(VAR_6);
  } else {
   FUNC_2(VAR_7);
  }
 } else {
  FUNC_2(VAR_7);
 }
}
