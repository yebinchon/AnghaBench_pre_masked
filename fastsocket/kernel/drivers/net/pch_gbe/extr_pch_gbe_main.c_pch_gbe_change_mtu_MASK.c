
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int max_frame_size; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct pch_gbe_adapter {unsigned long rx_buffer_len; TYPE_2__ hw; } ;
struct net_device {int mtu; } ;


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
 struct pch_gbe_adapter* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct pch_gbe_adapter*) ;
 int FUNC_3 (struct pch_gbe_adapter*) ;
 int FUNC_4 (struct pch_gbe_adapter*) ;
 int FUNC_5 (char*,int,int ,int,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_10, int VAR_11)
{
 struct pch_gbe_adapter *VAR_12 = FUNC_0(VAR_10);
 int VAR_13;
 unsigned long VAR_14 = VAR_12->rx_buffer_len;
 int VAR_15;

 VAR_13 = VAR_11 + VAR_3 + VAR_2;
 if ((VAR_13 < VAR_4 + VAR_2) ||
  (VAR_13 > VAR_8)) {
  FUNC_6("Invalid MTU setting\n");
  return -VAR_0;
 }
 if (VAR_13 <= VAR_5)
  VAR_12->rx_buffer_len = VAR_5;
 else if (VAR_13 <= VAR_6)
  VAR_12->rx_buffer_len = VAR_6;
 else if (VAR_13 <= VAR_7)
  VAR_12->rx_buffer_len = VAR_7;
 else
  VAR_12->rx_buffer_len = VAR_9;

 if (FUNC_1(VAR_10)) {
  FUNC_2(VAR_12);
  VAR_15 = FUNC_4(VAR_12);
  if (VAR_15) {
   VAR_12->rx_buffer_len = VAR_14;
   FUNC_4(VAR_12);
   return -VAR_1;
  } else {
   VAR_10->mtu = VAR_11;
   VAR_12->hw.mac.max_frame_size = VAR_13;
  }
 } else {
  FUNC_3(VAR_12);
  VAR_10->mtu = VAR_11;
  VAR_12->hw.mac.max_frame_size = VAR_13;
 }

 FUNC_5("max_frame : %d  rx_buffer_len : %d  mtu : %d  max_frame_size : %d\n",
   VAR_13, (u32) VAR_12->rx_buffer_len, VAR_10->mtu,
   VAR_12->hw.mac.max_frame_size);
 return 0;
}
