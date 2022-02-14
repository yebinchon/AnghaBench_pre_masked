
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct jme_adapter {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct jme_adapter*,int ) ;
 int FUNC_2 (struct jme_adapter*,int ,int) ;
 struct jme_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(struct net_device *VAR_6,
    int VAR_7, int VAR_8, int VAR_9)
{
 struct jme_adapter *VAR_10 = FUNC_3(VAR_6);
 int VAR_11;

 FUNC_2(VAR_10, VAR_1, VAR_5 | VAR_4 |
  ((VAR_9 << VAR_3) & VAR_2) |
  FUNC_4(VAR_7) | FUNC_5(VAR_8));

 FUNC_7();
 for (VAR_11 = VAR_0 * 50 ; VAR_11 > 0 ; --VAR_11) {
  FUNC_6(20);
  if ((FUNC_1(VAR_10, VAR_1) & VAR_4) == 0)
   break;
 }

 if (VAR_11 == 0)
  FUNC_0(VAR_10->pdev, "phy(%d) write timeout : %d\n", VAR_7, VAR_8);

 return;
}
