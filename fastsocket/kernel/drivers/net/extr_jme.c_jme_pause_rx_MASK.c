
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jme_adapter {int rxempty_task; int rxclean_task; int flags; int link_changing; } ;


 int VAR_0 ;
 int FUNC_0 (struct jme_adapter*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct jme_adapter*,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static inline void FUNC_5(struct jme_adapter *VAR_2)
{
 FUNC_1(&VAR_2->link_changing);

 FUNC_2(VAR_2, VAR_1);
 if (FUNC_4(VAR_0, &VAR_2->flags)) {
  FUNC_0(VAR_2);
 } else {
  FUNC_3(&VAR_2->rxclean_task);
  FUNC_3(&VAR_2->rxempty_task);
 }
}
