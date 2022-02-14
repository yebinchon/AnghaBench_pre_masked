
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef int u32 ;
struct smsc9420_pdata {int mii_bus; int * phy_dev; int napi; int int_lock; } ;
struct net_device {int irq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct smsc9420_pdata*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 struct smsc9420_pdata* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct smsc9420_pdata*) ;
 int FUNC_10 (struct smsc9420_pdata*) ;
 int FUNC_11 (struct smsc9420_pdata*) ;
 int FUNC_12 (struct smsc9420_pdata*,int ) ;
 int FUNC_13 (struct smsc9420_pdata*,int ,int) ;
 int FUNC_14 (struct smsc9420_pdata*) ;
 int FUNC_15 (struct smsc9420_pdata*) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,int ) ;

__attribute__((used)) static int FUNC_18(struct net_device *VAR_2)
{
 struct smsc9420_pdata *VAR_3 = FUNC_5(VAR_2);
 u32 VAR_4;
 ulong VAR_5;

 FUNC_0(!VAR_3);
 FUNC_0(!VAR_3->phy_dev);


 FUNC_16(&VAR_3->int_lock, VAR_5);
 VAR_4 = FUNC_12(VAR_3, VAR_0) & (~VAR_1);
 FUNC_13(VAR_3, VAR_0, VAR_4);
 FUNC_17(&VAR_3->int_lock, VAR_5);

 FUNC_6(VAR_2);
 FUNC_4(&VAR_3->napi);

 FUNC_15(VAR_3);
 FUNC_11(VAR_3);

 FUNC_14(VAR_3);
 FUNC_10(VAR_3);

 FUNC_1(VAR_2->irq, VAR_3);

 FUNC_9(VAR_3);

 FUNC_8(VAR_3->phy_dev);

 FUNC_7(VAR_3->phy_dev);
 VAR_3->phy_dev = ((void*)0);
 FUNC_3(VAR_3->mii_bus);
 FUNC_2(VAR_3->mii_bus);

 return 0;
}
