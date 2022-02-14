
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct emac_priv {TYPE_1__* ndev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct emac_priv *VAR_1, u32 VAR_2)
{
 struct device *VAR_3 = &VAR_1->ndev->dev;
 u32 VAR_4 = 0xFFFFFFF0;

 while ((FUNC_3(FUNC_0(VAR_2)) & VAR_0) !=
        VAR_0) {

  FUNC_1();
  --VAR_4;
  if (0 == VAR_4) {
   FUNC_2(VAR_3, "EMAC: RX teardown aborted\n");
   break;
  }
 }
 FUNC_4(FUNC_0(VAR_2), VAR_0);
}
