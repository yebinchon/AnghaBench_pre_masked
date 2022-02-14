
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_exch_mgr {int ep_pool; } ;
struct fc_exch {int esb_stat; int arg; int seq; int (* destructor ) (int *,int ) ;struct fc_exch_mgr* em; int ex_refcnt; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct fc_exch*,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct fc_exch *VAR_1)
{
 struct fc_exch_mgr *VAR_2;

 if (FUNC_1(&VAR_1->ex_refcnt)) {
  VAR_2 = VAR_1->em;
  if (VAR_1->destructor)
   VAR_1->destructor(&VAR_1->seq, VAR_1->arg);
  FUNC_0(!(VAR_1->esb_stat & VAR_0));
  FUNC_2(VAR_1, VAR_2->ep_pool);
 }
}
