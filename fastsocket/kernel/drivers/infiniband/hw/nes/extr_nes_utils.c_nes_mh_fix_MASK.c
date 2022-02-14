
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nes_vnic {int* qp_nic_index; } ;
struct nes_device {int last_used_chunks_tx; struct nes_adapter* nesadapter; scalar_t__ regs; int mac_pause_frames_sent; int last_mac_tx_pauses; scalar_t__* netdev; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct nes_adapter {scalar_t__* mac_sw_state; TYPE_1__ mh_timer; scalar_t__ OneG_Mode; int phy_lock; scalar_t__* mac_link_down; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct nes_device*,int ) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (struct nes_device*,int ,int) ;
 struct nes_vnic* FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

void FUNC_10(unsigned long VAR_30)
{
 unsigned long VAR_31;
 struct nes_device *VAR_32 = (struct nes_device *)VAR_30;
 struct nes_adapter *VAR_33 = VAR_32->nesadapter;
 struct nes_vnic *VAR_34;
 u32 VAR_35;
 u32 VAR_36;
 u32 VAR_37;
 u32 VAR_38;
 u32 VAR_39;
 u32 VAR_40;
 u32 VAR_41;
 u32 VAR_42;
 u32 VAR_43;
 u32 VAR_44;
 u32 VAR_45;
 u32 VAR_46;
 u32 VAR_47;
 u32 VAR_48;
 u32 VAR_49;
 u32 VAR_50;
 u32 VAR_51=0;
 u32 VAR_52 = 0;

 FUNC_8(&VAR_33->phy_lock, VAR_31);
 if ((VAR_33->mac_sw_state[0] != VAR_24) || (VAR_33->mac_link_down[0])) {
  FUNC_9(&VAR_33->phy_lock, VAR_31);
  goto no_mh_work;
 }
 VAR_33->mac_sw_state[0] = VAR_25;
 FUNC_9(&VAR_33->phy_lock, VAR_31);
 do {
  VAR_39 = FUNC_4(VAR_32, VAR_19);
  VAR_40 = FUNC_4(VAR_32, VAR_18);
  VAR_41 = FUNC_4(VAR_32, VAR_20);
  VAR_35 = FUNC_4(VAR_32, VAR_23);
  VAR_32->mac_pause_frames_sent += VAR_41;
  VAR_38 = 0;
  VAR_36 = VAR_35;
  VAR_37 = VAR_32->last_used_chunks_tx;

  if (VAR_32->netdev[0]) {
   VAR_34 = FUNC_7(VAR_32->netdev[0]);
  } else {
   break;
  }

  for (VAR_51=0; VAR_51<4; VAR_51++) {
   VAR_38 <<= 8;
   if (VAR_34->qp_nic_index[VAR_51] != 0xff) {
    VAR_38 |= 0xff;
    if ((VAR_36&0xff)<(VAR_37&0xff)) {
     VAR_52 = 1;
    }
   }
   VAR_36 >>= 8;
   VAR_37 >>= 8;
  }
  if ((VAR_39) || (VAR_40) ||
   (!(VAR_35&VAR_38)) ||
   (!(VAR_32->last_used_chunks_tx&VAR_38)) ||
   (VAR_52) ) {
   VAR_32->last_used_chunks_tx = VAR_35;
   break;
  }
  VAR_32->last_used_chunks_tx = VAR_35;
  FUNC_1();

  FUNC_6(VAR_32, VAR_17, 0x00000005);
  VAR_29++;
  VAR_41 = FUNC_4(VAR_32, VAR_20);
  if (VAR_41) {
   VAR_32->mac_pause_frames_sent += VAR_41;
   break;
  }

  VAR_44 = FUNC_4(VAR_32, VAR_17);
  VAR_45 = FUNC_4(VAR_32, VAR_16);
  VAR_46 = FUNC_4(VAR_32, VAR_21);
  VAR_47 = FUNC_4(VAR_32, VAR_15);
  VAR_48 = FUNC_4(VAR_32, VAR_14);
  VAR_49 = FUNC_4(VAR_32, VAR_13);
  VAR_50 = FUNC_4(VAR_32, VAR_22);


  VAR_41 = FUNC_4(VAR_32, VAR_20);
  if (VAR_41) {
   VAR_32->last_mac_tx_pauses = VAR_32->mac_pause_frames_sent;
   FUNC_2(VAR_1, "failsafe caught slow outbound pause\n");
   break;
  }
  VAR_28++;

  FUNC_6(VAR_32, VAR_17, 0x00000000);
  FUNC_6(VAR_32, VAR_16, 0x00000000);
  VAR_43 = FUNC_3(VAR_32->regs+VAR_26);

  FUNC_5(VAR_32->regs+VAR_26, VAR_43 | 0x0000001d);

  while (((FUNC_3(VAR_32->regs+VAR_26)
    & 0x00000040) != 0x00000040) && (VAR_51++ < 5000)) {

  }

  FUNC_6(VAR_32, VAR_4, 0x00000008);
  VAR_42 = FUNC_4(VAR_32, VAR_5);

  FUNC_6(VAR_32, VAR_12, 0x000bdef7);
  FUNC_6(VAR_32, VAR_11, 0x9ce73000);
  FUNC_6(VAR_32, VAR_9, 0x0ff00000);
  FUNC_6(VAR_32, VAR_10, 0x00000000);
  FUNC_6(VAR_32, VAR_2, 0x00000000);
  FUNC_6(VAR_32, VAR_6, 0x00000000);
  if (VAR_33->OneG_Mode) {
   FUNC_6(VAR_32, VAR_7, 0xf0182222);
  } else {
   FUNC_6(VAR_32, VAR_7, 0xf0042222);
  }
  VAR_42 = FUNC_4(VAR_32, VAR_8);
  FUNC_6(VAR_32, VAR_3, 0x000000ff);

  FUNC_6(VAR_32, VAR_17, VAR_44);
  FUNC_6(VAR_32, VAR_16, VAR_45);
  FUNC_6(VAR_32, VAR_21, VAR_46);
  FUNC_6(VAR_32, VAR_15, VAR_47);
  FUNC_6(VAR_32, VAR_14, VAR_48);
  FUNC_6(VAR_32, VAR_13, VAR_49);
  FUNC_6(VAR_32, VAR_22, VAR_50);

 } while (0);

 VAR_33->mac_sw_state[0] = VAR_24;
no_mh_work:
 VAR_32->nesadapter->mh_timer.expires = VAR_27 + (VAR_0/5);
 FUNC_0(&VAR_32->nesadapter->mh_timer);
}
