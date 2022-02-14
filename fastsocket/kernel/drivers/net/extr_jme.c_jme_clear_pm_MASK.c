
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jme_adapter {int reg_pmcs; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct jme_adapter*,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline void
FUNC_3(struct jme_adapter *VAR_2)
{
 FUNC_0(VAR_2, VAR_0, 0xFFFF0000 | VAR_2->reg_pmcs);
 FUNC_2(VAR_2->pdev, VAR_1);
 FUNC_1(VAR_2->pdev, VAR_1, 0);
}
