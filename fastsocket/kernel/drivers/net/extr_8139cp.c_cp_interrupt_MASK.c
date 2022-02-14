
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int name; } ;
struct cp_private {int lock; int pdev; int mii_if; int napi; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int *) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (struct cp_private*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int ,int) ;
 scalar_t__ FUNC_8 (int *) ;
 struct cp_private* FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (struct cp_private*) ;
 int FUNC_11 (struct cp_private*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (int ,int ,int*) ;
 int FUNC_14 (int ,int ,int) ;
 int FUNC_15 (char*,int ,int,int ,int) ;
 int FUNC_16 (char*,int ,int,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int) ;

__attribute__((used)) static irqreturn_t FUNC_20 (int VAR_18, void *VAR_19)
{
 struct net_device *VAR_20 = VAR_19;
 struct cp_private *VAR_21;
 int VAR_22 = 0;
 u16 VAR_23;

 if (FUNC_19(VAR_20 == ((void*)0)))
  return VAR_2;
 VAR_21 = FUNC_9(VAR_20);

 FUNC_17(&VAR_21->lock);

 VAR_23 = FUNC_3(VAR_4);
 if (!VAR_23 || (VAR_23 == 0xFFFF))
  goto out_unlock;

 VAR_22 = 1;

 if (FUNC_10(VAR_21))
  FUNC_15("%s: intr, status %04x cmd %02x cpcmd %04x\n",
          VAR_20->name, VAR_23, FUNC_4(VAR_0), FUNC_3(VAR_1));

 FUNC_5(VAR_4, VAR_23 & ~VAR_17);


 if (FUNC_19(!FUNC_12(VAR_20))) {
  FUNC_5(VAR_3, 0);
  goto out_unlock;
 }

 if (VAR_23 & (VAR_11 | VAR_9 | VAR_8 | VAR_10))
  if (FUNC_8(&VAR_21->napi)) {
   FUNC_6(VAR_3, VAR_16);
   FUNC_1(&VAR_21->napi);
  }

 if (VAR_23 & (VAR_15 | VAR_14 | VAR_13 | VAR_12))
  FUNC_2(VAR_21);
 if (VAR_23 & VAR_5)
  FUNC_7(&VAR_21->mii_if, FUNC_11(VAR_21), 0);


 if (VAR_23 & VAR_7) {
  u16 VAR_24;

  FUNC_13(VAR_21->pdev, VAR_6, &VAR_24);
  FUNC_14(VAR_21->pdev, VAR_6, VAR_24);
  FUNC_16("%s: PCI bus error, status=%04x, PCI status=%04x\n",
         VAR_20->name, VAR_23, VAR_24);


 }

out_unlock:
 FUNC_18(&VAR_21->lock);

 return FUNC_0(VAR_22);
}
