
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int mtu; } ;
struct nes_vnic {int nic_index; scalar_t__ max_frame_size; struct nes_device* nesdev; } ;
struct nes_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct nes_device*,int) ;
 int FUNC_3 (struct nes_device*,int ) ;
 int FUNC_4 (struct nes_device*,int ,int) ;
 struct nes_vnic* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_6, int VAR_7)
{
 struct nes_vnic *VAR_8 = FUNC_5(VAR_6);
 struct nes_device *VAR_9 = VAR_8->nesdev;
 int VAR_10 = 0;
 u8 VAR_11 = 0;
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15;

 if ((VAR_7 < VAR_1) || (VAR_7 > VAR_5))
  return -VAR_0;

 VAR_6->mtu = VAR_7;
 VAR_8->max_frame_size = VAR_7 + VAR_4;

 if (VAR_6->mtu > 1500) {
  VAR_11=1;
 }
 FUNC_2(VAR_9, VAR_11);

 if (FUNC_6(VAR_6)) {
  VAR_13 = 1 << VAR_8->nic_index;
  VAR_15 = FUNC_3(VAR_9,
    VAR_2) & VAR_13;
  VAR_14 = FUNC_3(VAR_9,
    VAR_3) & VAR_13;

  FUNC_1(VAR_6);
  FUNC_0(VAR_6);

  VAR_12 = FUNC_3(VAR_9,
     VAR_2);
  VAR_12 |= VAR_15;
  FUNC_4(VAR_9, VAR_2,
       VAR_12);

  VAR_12 = FUNC_3(VAR_9, VAR_3);
  VAR_12 |= VAR_14;
  FUNC_4(VAR_9, VAR_3, VAR_12);
 }

 return VAR_10;
}
