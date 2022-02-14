
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int pdev_dev; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*,int ) ;
 int FUNC_4 (struct adapter*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct adapter *VAR_3, int VAR_4)
{
 u32 VAR_5 = FUNC_3(VAR_3, FUNC_0(VAR_4, VAR_2));

 VAR_5 &= VAR_1 | VAR_0;
 if (!VAR_5)
  return;

 if (VAR_5 & VAR_1)
  FUNC_1(VAR_3->pdev_dev, "XGMAC %d Tx FIFO parity error\n",
     VAR_4);
 if (VAR_5 & VAR_0)
  FUNC_1(VAR_3->pdev_dev, "XGMAC %d Rx FIFO parity error\n",
     VAR_4);
 FUNC_4(VAR_3, FUNC_0(VAR_4, VAR_2), VAR_5);
 FUNC_2(VAR_3);
}
