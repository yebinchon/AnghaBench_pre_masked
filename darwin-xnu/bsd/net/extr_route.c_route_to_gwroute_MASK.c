
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_6__ {scalar_t__ rmx_expire; } ;
struct rtentry {int rt_flags; scalar_t__ rt_expire; TYPE_2__ rt_rmx; struct rtentry* rt_parent; TYPE_3__* rt_gateway; struct rtentry* rt_gwroute; TYPE_1__* rt_ifp; } ;
typedef int ss ;
typedef int errno_t ;
typedef int boolean_t ;
struct TYPE_7__ {int sa_len; } ;
struct TYPE_5__ {unsigned int if_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct rtentry*) ;
 int FUNC_2 (struct rtentry*) ;
 int FUNC_3 (struct rtentry*) ;
 int FUNC_4 (struct rtentry*) ;
 int FUNC_5 (struct rtentry*) ;
 int FUNC_6 (struct rtentry*) ;
 int FUNC_7 (struct rtentry*) ;
 int FUNC_8 (struct rtentry*) ;
 int FUNC_9 (struct rtentry*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (TYPE_3__*,struct sockaddr*,int ) ;
 int FUNC_12 (struct sockaddr*,TYPE_3__*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 () ;
 int VAR_6 ;
 int FUNC_16 (struct rtentry*) ;
 int FUNC_17 (struct rtentry*,struct rtentry*) ;
 int FUNC_18 (struct rtentry*,int ,struct rtentry*) ;
 struct rtentry* FUNC_19 (struct sockaddr*,int,int ,unsigned int) ;
 struct rtentry* FUNC_20 (struct sockaddr*,int,int ,unsigned int) ;
 int FUNC_21 (struct rtentry*) ;
 int FUNC_22 (struct rtentry*) ;
 int FUNC_23 (int ) ;

errno_t
FUNC_24(const struct sockaddr *VAR_7, struct rtentry *VAR_8,
    struct rtentry **VAR_9)
{
 uint64_t VAR_10;
 struct rtentry *VAR_11 = VAR_8, *VAR_12 = VAR_8;
 errno_t VAR_13 = 0;
 unsigned int VAR_14;
 boolean_t VAR_15;

 *VAR_9 = ((void*)0);

 if (VAR_11 == ((void*)0))
  return (0);
 FUNC_6(VAR_11);
 VAR_14 = VAR_11->rt_ifp->if_index;
 FUNC_2(VAR_11);
 if (!(VAR_11->rt_flags & VAR_4)) {
  FUNC_8(VAR_11);
  FUNC_9(VAR_11);

  VAR_12 = VAR_11 = FUNC_19((struct sockaddr *)
      (size_t)VAR_7, 1, 0, VAR_14);
  if (VAR_12 != ((void*)0)) {
   FUNC_6(VAR_11);
   VAR_14 = VAR_11->rt_ifp->if_index;
  } else {
   FUNC_23(VAR_1);
  }
 }





 FUNC_5(VAR_11);
 if ((VAR_15 = (VAR_11->rt_flags & VAR_2))) {
  struct rtentry *VAR_16 = VAR_11->rt_gwroute;
  struct sockaddr_storage VAR_17;
  struct sockaddr *VAR_18 = (struct sockaddr *)&VAR_17;

  FUNC_10(VAR_11 == VAR_12);
  FUNC_2(VAR_12);


  if (VAR_16 == ((void*)0)) {
   FUNC_11(VAR_11->rt_gateway, VAR_18, FUNC_0(sizeof (VAR_17),
       VAR_11->rt_gateway->sa_len));
   FUNC_9(VAR_11);
   goto lookup;
  }

  FUNC_3(VAR_11);






  FUNC_6(VAR_16);
  if (!(VAR_16->rt_flags & VAR_4)) {
   VAR_11->rt_gwroute = ((void*)0);
   FUNC_9(VAR_16);
   FUNC_11(VAR_11->rt_gateway, VAR_18, FUNC_0(sizeof (VAR_17),
       VAR_11->rt_gateway->sa_len));
   FUNC_9(VAR_11);
   FUNC_21(VAR_16);
lookup:
   FUNC_13(VAR_6);
   VAR_16 = FUNC_20(VAR_18, 1, 0, VAR_14);

   FUNC_4(VAR_11);





   if (!(VAR_11->rt_flags & VAR_4) || VAR_16 == ((void*)0) ||
       VAR_16 == VAR_11 || !FUNC_12(VAR_18, VAR_11->rt_gateway)) {
    if (VAR_16 == VAR_11) {
     FUNC_8(VAR_16);
     VAR_16 = ((void*)0);
    }
    FUNC_10(VAR_11 == VAR_12);
    FUNC_8(VAR_12);
    VAR_12 = ((void*)0);
    FUNC_9(VAR_11);
    if (VAR_16 != ((void*)0))
     FUNC_22(VAR_16);
    FUNC_14(VAR_6);
    FUNC_23(VAR_1);
   }
   FUNC_10(VAR_16 != ((void*)0));





   FUNC_18(VAR_11, FUNC_16(VAR_11), VAR_16);
   FUNC_10(VAR_11 == VAR_12);
   FUNC_8(VAR_11);
   FUNC_9(VAR_11);
   FUNC_14(VAR_6);
   VAR_11 = VAR_16;
  } else {
   FUNC_2(VAR_16);
   FUNC_9(VAR_16);
   FUNC_10(VAR_11 == VAR_12);
   FUNC_8(VAR_11);
   FUNC_9(VAR_11);
   VAR_11 = VAR_16;
  }
  FUNC_10(VAR_11 == VAR_16 && VAR_11 != VAR_12);







  FUNC_6(VAR_12);
  if ((VAR_12->rt_flags & (VAR_5 | VAR_4)) ==
      (VAR_5 | VAR_4)) {
   struct rtentry *VAR_19 = VAR_12->rt_parent;
   FUNC_10(VAR_19 != ((void*)0));

   FUNC_3(VAR_12);
   FUNC_1(VAR_19);
   FUNC_9(VAR_12);
   FUNC_17(VAR_19, VAR_11);
   FUNC_7(VAR_19);
  } else {
   FUNC_9(VAR_12);
  }


  if (VAR_12 == VAR_8)
   FUNC_7(VAR_12);
  else
   FUNC_21(VAR_12);
  VAR_12 = ((void*)0);


  FUNC_6(VAR_11);
  if (!(VAR_11->rt_flags & VAR_4)) {
   FUNC_9(VAR_11);
   FUNC_23(VAR_1);
  }
 }

 if (VAR_11->rt_flags & VAR_3) {
  FUNC_10(VAR_11->rt_expire == 0 || VAR_11->rt_rmx.rmx_expire != 0);
  FUNC_10(VAR_11->rt_expire != 0 || VAR_11->rt_rmx.rmx_expire == 0);
  VAR_10 = FUNC_15();
  if (VAR_11->rt_expire == 0 || VAR_10 < VAR_11->rt_expire) {
   FUNC_9(VAR_11);
   FUNC_23(!VAR_15 ? VAR_0 : VAR_1);
  }
 }


 FUNC_3(VAR_11);


 *VAR_9 = VAR_11;
 return (0);

bad:

 if (VAR_11 != ((void*)0)) {
  FUNC_6(VAR_11);
  if (VAR_11 == VAR_8) {
   FUNC_8(VAR_11);
   FUNC_9(VAR_11);
  } else {
   FUNC_9(VAR_11);
   FUNC_21(VAR_11);
  }
 }
 return (VAR_13);
}
