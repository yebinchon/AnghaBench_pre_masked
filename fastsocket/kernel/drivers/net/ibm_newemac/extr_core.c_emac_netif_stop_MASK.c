
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct emac_instance {int no_mcast; TYPE_1__* ndev; int commac; int mal; } ;
struct TYPE_6__ {int trans_start; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_6(struct emac_instance *VAR_1)
{
 FUNC_4(VAR_1->ndev);
 FUNC_1(VAR_1->ndev);
 VAR_1->no_mcast = 1;
 FUNC_2(VAR_1->ndev);
 FUNC_5(VAR_1->ndev);
 VAR_1->ndev->trans_start = VAR_0;
 FUNC_0(VAR_1->mal, &VAR_1->commac);
 FUNC_3(VAR_1->ndev);
}
