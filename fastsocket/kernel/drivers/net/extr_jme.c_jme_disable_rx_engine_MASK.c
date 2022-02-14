
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct jme_adapter {int pdev; int reg_rxcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct jme_adapter*,int ) ;
 int FUNC_2 (struct jme_adapter*,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static inline void
FUNC_6(struct jme_adapter *VAR_3)
{
 int VAR_4;
 u32 VAR_5;




 FUNC_2(VAR_3, VAR_0, VAR_3->reg_rxcs);
 FUNC_5();

 VAR_5 = FUNC_1(VAR_3, VAR_0);
 for (VAR_4 = VAR_1 ; (VAR_5 & VAR_2) && VAR_4 > 0 ; --VAR_4) {
  FUNC_3(1);
  VAR_5 = FUNC_1(VAR_3, VAR_0);
  FUNC_4();
 }

 if (!VAR_4)
  FUNC_0(VAR_3->pdev, "Disable RX engine timeout.\n");

}
