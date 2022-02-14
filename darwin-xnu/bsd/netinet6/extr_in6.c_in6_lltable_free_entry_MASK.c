
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lltable {int llt_af; struct ifnet* llt_ifp; } ;
struct llentry {int la_flags; int lle_timer; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct llentry*) ;
 int FUNC_2 (struct llentry*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct ifnet*,int ) ;
 int FUNC_4 (struct llentry*) ;
 int FUNC_5 (struct lltable*,struct llentry*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct lltable *VAR_2, struct llentry *VAR_3)
{
 struct ifnet *VAR_4;

 FUNC_2(VAR_3);
 FUNC_0(VAR_2 != ((void*)0), ("lltable is NULL"));


 if ((VAR_3->la_flags & VAR_0) != 0) {
  VAR_4 = VAR_2->llt_ifp;
  FUNC_3(VAR_4, VAR_2->llt_af);
  FUNC_5(VAR_2, VAR_3);
 }






 FUNC_4(VAR_3);
}
