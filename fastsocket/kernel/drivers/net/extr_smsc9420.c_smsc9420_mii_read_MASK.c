
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct smsc9420_pdata {int phy_lock; } ;
struct mii_bus {scalar_t__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct smsc9420_pdata*,int ) ;
 int FUNC_1 (struct smsc9420_pdata*,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct mii_bus *VAR_6, int VAR_7, int VAR_8)
{
 struct smsc9420_pdata *VAR_9 = (struct smsc9420_pdata *)VAR_6->priv;
 unsigned long VAR_10;
 u32 VAR_11;
 int VAR_12, VAR_13 = -VAR_1;

 FUNC_3(&VAR_9->phy_lock, VAR_10);


 if ((FUNC_0(VAR_9, VAR_2) & VAR_3)) {
  FUNC_2(VAR_0, "MII is busy???");
  goto out;
 }


 VAR_11 = ((VAR_7 & 0x1F) << 11) | ((VAR_8 & 0x1F) << 6) |
  VAR_4;
 FUNC_1(VAR_9, VAR_2, VAR_11);


 for (VAR_12 = 0; VAR_12 < 5; VAR_12++) {
  if (!(FUNC_0(VAR_9, VAR_2) &
   VAR_3)) {
   VAR_13 = (u16)FUNC_0(VAR_9, VAR_5);
   goto out;
  }
  FUNC_5(10);
 }

 FUNC_2(VAR_0, "MII busy timeout!");

out:
 FUNC_4(&VAR_9->phy_lock, VAR_10);
 return VAR_13;
}
