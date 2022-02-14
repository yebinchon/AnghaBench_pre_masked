
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct smsc911x_data {int mac_lock; } ;
struct mii_bus {scalar_t__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct smsc911x_data*,int ) ;
 int FUNC_2 (struct smsc911x_data*,int ,unsigned int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct mii_bus *VAR_6, int VAR_7, int VAR_8,
      u16 VAR_9)
{
 struct smsc911x_data *VAR_10 = (struct smsc911x_data *)VAR_6->priv;
 unsigned long VAR_11;
 unsigned int VAR_12;
 int VAR_13, VAR_14;

 FUNC_3(&VAR_10->mac_lock, VAR_11);


 if (FUNC_5(FUNC_1(VAR_10, VAR_2) & VAR_3)) {
  FUNC_0(VAR_1,
   "MII is busy in smsc911x_mii_write???");
  VAR_14 = -VAR_0;
  goto out;
 }


 FUNC_2(VAR_10, VAR_5, VAR_9);


 VAR_12 = ((VAR_7 & 0x1F) << 11) | ((VAR_8 & 0x1F) << 6) |
  VAR_4;
 FUNC_2(VAR_10, VAR_2, VAR_12);


 for (VAR_13 = 0; VAR_13 < 100; VAR_13++)
  if (!(FUNC_1(VAR_10, VAR_2) & VAR_3)) {
   VAR_14 = 0;
   goto out;
  }

 FUNC_0(VAR_1, "Timed out waiting for MII write to finish");
 VAR_14 = -VAR_0;

out:
 FUNC_4(&VAR_10->mac_lock, VAR_11);
 return VAR_14;
}
