
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct llentry {int la_flags; int * lle_head; TYPE_1__* lle_tbl; } ;
struct TYPE_2__ {int llt_af; int llt_ifp; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct llentry*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(struct llentry *VAR_3)
{
 if ((VAR_3->la_flags & VAR_0) != 0) {
  FUNC_0(VAR_3->lle_tbl->llt_ifp, VAR_3->lle_tbl->llt_af);
  FUNC_1(VAR_3, VAR_2);
  VAR_3->la_flags &= ~(VAR_1 | VAR_0);




 }
}
