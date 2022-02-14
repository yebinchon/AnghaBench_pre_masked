
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lltable {int llt_af; struct ifnet* llt_ifp; } ;
struct llentry {int la_flags; int lle_timer; } ;
struct ifnet {int dummy; } ;
struct TYPE_2__ {size_t dropped; } ;


 int FUNC_0 (struct ifnet*,int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (struct llentry*) ;
 int FUNC_3 (struct llentry*) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_4 (int *) ;
 size_t FUNC_5 (struct llentry*) ;
 int FUNC_6 (struct lltable*,struct llentry*) ;

__attribute__((used)) static void
FUNC_7(struct lltable *VAR_2, struct llentry *VAR_3)
{
 struct ifnet *VAR_4;
 size_t VAR_5;

 FUNC_3(VAR_3);
 FUNC_1(VAR_2 != ((void*)0), ("lltable is NULL"));


 if ((VAR_3->la_flags & VAR_0) != 0) {
  VAR_4 = VAR_2->llt_ifp;
  FUNC_0(VAR_4, VAR_2->llt_af);
  FUNC_6(VAR_2, VAR_3);
 }







 VAR_5 = FUNC_5(VAR_3);
 VAR_1.dropped += VAR_5;
}
