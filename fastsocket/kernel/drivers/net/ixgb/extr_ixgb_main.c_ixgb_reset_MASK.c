
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgb_hw {int max_frame_size; } ;
struct ixgb_adapter {struct ixgb_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ixgb_hw*,int ) ;
 int FUNC_2 (struct ixgb_hw*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct ixgb_hw*) ;
 int FUNC_4 (struct ixgb_hw*) ;

void
FUNC_5(struct ixgb_adapter *VAR_8)
{
 struct ixgb_hw *VAR_9 = &VAR_8->hw;

 FUNC_3(VAR_9);
 if (!FUNC_4(VAR_9))
  FUNC_0(VAR_7, VAR_2, "ixgb_init_hw failed.\n");


 FUNC_2(VAR_9, VAR_6, VAR_9->max_frame_size << VAR_5);
 if (VAR_9->max_frame_size >
     VAR_4 + VAR_1) {
  u32 VAR_10 = FUNC_1(VAR_9, VAR_0);
  if (!(VAR_10 & VAR_3)) {
   VAR_10 |= VAR_3;
   FUNC_2(VAR_9, VAR_0, VAR_10);
  }
 }
}
