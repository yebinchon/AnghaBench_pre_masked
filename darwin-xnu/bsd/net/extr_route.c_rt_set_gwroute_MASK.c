
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct rtentry {int rt_flags; struct rtentry* rt_parent; struct rtentry* rt_gwroute; } ;
typedef int boolean_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct rtentry*) ;
 scalar_t__ FUNC_2 (struct rtentry*) ;
 int FUNC_3 (struct rtentry*) ;
 int FUNC_4 (struct rtentry*) ;
 int FUNC_5 (struct rtentry*) ;
 int FUNC_6 (struct rtentry*) ;
 scalar_t__ FUNC_7 (struct sockaddr*) ;
 int FUNC_8 (int) ;
 int VAR_3 ;
 struct sockaddr* FUNC_9 (struct rtentry*) ;
 int FUNC_10 (struct rtentry*) ;

void
FUNC_11(struct rtentry *VAR_4, struct sockaddr *VAR_5, struct rtentry *VAR_6)
{
 boolean_t VAR_7;

 FUNC_0(VAR_3, VAR_0);
 FUNC_4(VAR_4);

 if (VAR_6 != ((void*)0))
  FUNC_1(VAR_6);






 if (VAR_4->rt_gwroute != ((void*)0)) {
  struct rtentry *VAR_8 = VAR_4->rt_gwroute;

  FUNC_8(VAR_4 != VAR_8);
  VAR_4->rt_gwroute = ((void*)0);
  FUNC_6(VAR_4);
  FUNC_10(VAR_8);
  FUNC_3(VAR_4);
  FUNC_8(VAR_4->rt_gwroute == ((void*)0));
 }




 if ((VAR_4->rt_gwroute = VAR_6) != ((void*)0)) {
  FUNC_1(VAR_6);

  if (VAR_4->rt_flags & VAR_2) {

   VAR_7 = (VAR_4->rt_parent != ((void*)0) &&
       FUNC_7(FUNC_9(VAR_4->rt_parent)) &&
       !FUNC_2(VAR_4->rt_parent));
  } else {
   VAR_7 = (FUNC_7(VAR_5) && !FUNC_2(VAR_4));
  }


  if (VAR_7 && FUNC_2(VAR_6) &&
      !(VAR_6->rt_flags & VAR_1)) {
   FUNC_3(VAR_6);
   VAR_6->rt_flags |= VAR_1;
   FUNC_6(VAR_6);
  }

  FUNC_5(VAR_6);
 }
}
