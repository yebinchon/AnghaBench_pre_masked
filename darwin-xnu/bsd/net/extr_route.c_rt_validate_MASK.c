
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtentry {int rt_flags; } ;
typedef int boolean_t ;
struct TYPE_2__ {int sa_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtentry*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rtentry*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (struct rtentry*) ;

boolean_t
FUNC_5(struct rtentry *VAR_4)
{
 FUNC_1(VAR_4);

 if ((VAR_4->rt_flags & (VAR_3 | VAR_2)) == VAR_3) {
  int VAR_5 = FUNC_4(VAR_4)->sa_family;

  if (VAR_5 == VAR_0)
   (void) FUNC_3(FUNC_0(VAR_4));
  else if (VAR_5 == VAR_1)
   (void) FUNC_2(FUNC_0(VAR_4));
 } else {
  VAR_4 = ((void*)0);
 }

 return (VAR_4 != ((void*)0));
}
