
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef int u32 ;
struct smsc911x_data {char* loopback_tx_pkt; int mac_lock; int resetcount; scalar_t__ loopback_rx_pkt; struct phy_device* phy_dev; } ;
struct phy_device {int addr; int bus; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (char*,int,int ) ;
 struct smsc911x_data* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct smsc911x_data*,int ,int) ;
 int FUNC_3 (int ,int ,int ,int) ;
 scalar_t__ FUNC_4 (struct smsc911x_data*) ;
 int FUNC_5 (struct smsc911x_data*) ;
 unsigned int FUNC_6 (struct smsc911x_data*,int ) ;
 int FUNC_7 (struct smsc911x_data*,int ,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_16)
{
 struct smsc911x_data *VAR_17 = FUNC_1(VAR_16);
 struct phy_device *VAR_18 = VAR_17->phy_dev;
 int VAR_19 = -VAR_2;
 unsigned int VAR_20, VAR_21;
 unsigned long VAR_22;


 FUNC_0(VAR_17->loopback_tx_pkt, 0xff, VAR_3);


 for (VAR_20 = 6; VAR_20 < 12; VAR_20++)
  VAR_17->loopback_tx_pkt[VAR_20] = (char)VAR_20;


 VAR_17->loopback_tx_pkt[12] = 0x00;
 VAR_17->loopback_tx_pkt[13] = 0x00;

 for (VAR_20 = 14; VAR_20 < VAR_12; VAR_20++)
  VAR_17->loopback_tx_pkt[VAR_20] = (char)VAR_20;

 VAR_21 = FUNC_6(VAR_17, VAR_4);
 VAR_21 &= VAR_6;
 VAR_21 |= VAR_5;
 FUNC_7(VAR_17, VAR_4, VAR_21);

 FUNC_7(VAR_17, VAR_14, VAR_15);
 FUNC_7(VAR_17, VAR_13,
  (u32)((ulong)VAR_17->loopback_rx_pkt & 0x03) << 8);

 for (VAR_20 = 0; VAR_20 < 10; VAR_20++) {

  FUNC_3(VAR_18->bus, VAR_18->addr, VAR_11,
   VAR_1 | VAR_0);


  FUNC_8(&VAR_17->mac_lock, VAR_22);
  FUNC_2(VAR_17, VAR_7, VAR_8
       | VAR_10 | VAR_9);
  FUNC_9(&VAR_17->mac_lock, VAR_22);

  if (FUNC_4(VAR_17) == 0) {
   VAR_19 = 0;
   break;
  }
  VAR_17->resetcount++;


  FUNC_8(&VAR_17->mac_lock, VAR_22);
  FUNC_2(VAR_17, VAR_7, 0);
  FUNC_9(&VAR_17->mac_lock, VAR_22);

  FUNC_5(VAR_17);
 }


 FUNC_8(&VAR_17->mac_lock, VAR_22);
 FUNC_2(VAR_17, VAR_7, 0);
 FUNC_9(&VAR_17->mac_lock, VAR_22);


 FUNC_3(VAR_18->bus, VAR_18->addr, VAR_11, 0);

 FUNC_7(VAR_17, VAR_14, 0);
 FUNC_7(VAR_17, VAR_13, 0);

 return VAR_19;
}
