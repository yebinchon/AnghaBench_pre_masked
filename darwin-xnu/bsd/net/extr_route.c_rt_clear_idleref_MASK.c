
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtentry {int rt_flags; int (* rt_if_ref_fn ) (int ,int) ;int rt_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtentry*) ;
 int FUNC_1 (struct rtentry*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;

void
FUNC_4(struct rtentry *VAR_2)
{
 FUNC_1(VAR_2);

 if (VAR_2->rt_if_ref_fn != ((void*)0)) {
  FUNC_2((VAR_2->rt_flags & (VAR_1 | VAR_0)) == VAR_0);

  FUNC_0(VAR_2);
  VAR_2->rt_if_ref_fn(VAR_2->rt_ifp, -1);
  VAR_2->rt_flags &= ~VAR_0;
  VAR_2->rt_if_ref_fn = ((void*)0);
 }
}
