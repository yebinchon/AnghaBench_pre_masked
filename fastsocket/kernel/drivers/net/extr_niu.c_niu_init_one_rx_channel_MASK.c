
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rx_ring_info {int rx_channel; int mbox_dma; int rbr_dma; int rcr_dma; int rbr_index; scalar_t__ rcr_timeout; scalar_t__ rcr_pkt_threshold; scalar_t__ rcr_table_size; scalar_t__ rbr_table_size; } ;
struct niu {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (int) ;
 int VAR_13 ;
 int FUNC_9 (struct rx_ring_info*,int*) ;
 int FUNC_10 (struct niu*,int,int) ;
 int FUNC_11 (struct niu*,int) ;
 int FUNC_12 (struct niu*,int) ;
 int FUNC_13 (struct niu*,struct rx_ring_info*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int) ;

__attribute__((used)) static int FUNC_16(struct niu *VAR_14, struct rx_ring_info *VAR_15)
{
 int VAR_16, VAR_17 = VAR_15->rx_channel;
 u64 VAR_18;

 VAR_16 = FUNC_12(VAR_14, VAR_17);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_11(VAR_14, VAR_17);
 if (VAR_16)
  return VAR_16;

 FUNC_13(VAR_14, VAR_15);

 FUNC_15(FUNC_8(VAR_17), VAR_13);
 FUNC_15(FUNC_7(VAR_17),
      (VAR_9 |
       VAR_11 |
       VAR_12 |
       VAR_10));
 FUNC_15(FUNC_5(VAR_17), VAR_15->mbox_dma >> 32);
 FUNC_15(FUNC_6(VAR_17), (VAR_15->mbox_dma & 0x00000000ffffffc0));
 FUNC_15(FUNC_0(VAR_17),
      ((u64)VAR_15->rbr_table_size << VAR_0) |
      (VAR_15->rbr_dma & (VAR_2 | VAR_1)));
 VAR_16 = FUNC_9(VAR_15, &VAR_18);
 if (VAR_16)
  return VAR_16;
 FUNC_15(FUNC_1(VAR_17), VAR_18);
 FUNC_15(FUNC_3(VAR_17),
      ((u64)VAR_15->rcr_table_size << VAR_3) |
      (VAR_15->rcr_dma & (VAR_5 | VAR_4)));
 FUNC_15(FUNC_4(VAR_17),
      ((u64)VAR_15->rcr_pkt_threshold << VAR_7) |
      VAR_6 |
      ((u64)VAR_15->rcr_timeout << VAR_8));

 VAR_16 = FUNC_10(VAR_14, VAR_17, 1);
 if (VAR_16)
  return VAR_16;

 FUNC_15(FUNC_2(VAR_17), VAR_15->rbr_index);

 VAR_18 = FUNC_14(FUNC_7(VAR_17));
 VAR_18 |= VAR_10;
 FUNC_15(FUNC_7(VAR_17), VAR_18);

 return 0;
}
