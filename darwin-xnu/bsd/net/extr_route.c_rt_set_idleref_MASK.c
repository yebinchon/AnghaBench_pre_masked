
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtentry {int rt_flags; int rt_ifp; int (* rt_if_ref_fn ) (int ,int) ;int * rt_parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtentry*) ;
 int FUNC_1 (struct rtentry*) ;
 int FUNC_2 (struct rtentry*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void
FUNC_5(struct rtentry *VAR_6)
{
 FUNC_1(VAR_6);





 if (VAR_6->rt_parent != ((void*)0) && !(VAR_6->rt_flags &
     (VAR_3|VAR_0 | VAR_2)) &&
     (VAR_6->rt_flags & (VAR_4|VAR_5|VAR_1)) ==
     (VAR_4|VAR_5)) {
  FUNC_2(VAR_6);
  VAR_6->rt_if_ref_fn = FUNC_3;

  FUNC_0(VAR_6);
  VAR_6->rt_if_ref_fn(VAR_6->rt_ifp, 1);
  VAR_6->rt_flags |= VAR_1;
 }
}
