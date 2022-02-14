
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rsv {scalar_t__ state; int pal_node; struct uwb_dbg* pal_priv; } ;
struct uwb_dbg {int list_lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct uwb_rsv*) ;
 int FUNC_4 (char*,struct uwb_rsv*) ;

__attribute__((used)) static void FUNC_5(struct uwb_rsv *VAR_1)
{
 struct uwb_dbg *VAR_2 = VAR_1->pal_priv;

 FUNC_4("debug", VAR_1);

 if (VAR_1->state == VAR_0) {
  FUNC_1(&VAR_2->list_lock);
  FUNC_0(&VAR_1->pal_node);
  FUNC_2(&VAR_2->list_lock);
  FUNC_3(VAR_1);
 }
}
