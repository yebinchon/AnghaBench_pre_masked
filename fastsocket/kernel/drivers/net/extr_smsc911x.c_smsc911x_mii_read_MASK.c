
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc911x_data {int mac_lock; } ;
struct mii_bus {scalar_t__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct smsc911x_data*,int ) ;
 int FUNC_2 (struct smsc911x_data*,int ,unsigned int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct mii_bus *VAR_5, int VAR_6, int VAR_7)
{
 struct smsc911x_data *VAR_8 = (struct smsc911x_data *)VAR_5->priv;
 unsigned long VAR_9;
 unsigned int VAR_10;
 int VAR_11, VAR_12;

 FUNC_3(&VAR_8->mac_lock, VAR_9);


 if (FUNC_5(FUNC_1(VAR_8, VAR_2) & VAR_3)) {
  FUNC_0(VAR_1,
   "MII is busy in smsc911x_mii_read???");
  VAR_12 = -VAR_0;
  goto out;
 }


 VAR_10 = ((VAR_6 & 0x1F) << 11) | ((VAR_7 & 0x1F) << 6);
 FUNC_2(VAR_8, VAR_2, VAR_10);


 for (VAR_11 = 0; VAR_11 < 100; VAR_11++)
  if (!(FUNC_1(VAR_8, VAR_2) & VAR_3)) {
   VAR_12 = FUNC_1(VAR_8, VAR_4);
   goto out;
  }

 FUNC_0(VAR_1, "Timed out waiting for MII read to finish");
 VAR_12 = -VAR_0;

out:
 FUNC_4(&VAR_8->mac_lock, VAR_9);
 return VAR_12;
}
