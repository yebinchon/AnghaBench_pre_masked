
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dynpcc_info {scalar_t__ cnt; void* attempt; void* cur; } ;
struct jme_adapter {int link_changing; int rxempty_task; int rxclean_task; int flags; struct dynpcc_info dpi; } ;


 int VAR_0 ;
 int FUNC_0 (struct jme_adapter*) ;
 void* VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct jme_adapter*,void*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static inline void FUNC_5(struct jme_adapter *VAR_2)
{
 struct dynpcc_info *VAR_3 = &(VAR_2->dpi);

 if (FUNC_4(VAR_0, &VAR_2->flags)) {
  FUNC_0(VAR_2);
 } else {
  FUNC_3(&VAR_2->rxclean_task);
  FUNC_3(&VAR_2->rxempty_task);
 }
 VAR_3->cur = VAR_1;
 VAR_3->attempt = VAR_1;
 VAR_3->cnt = 0;
 FUNC_2(VAR_2, VAR_1);

 FUNC_1(&VAR_2->link_changing);
}
