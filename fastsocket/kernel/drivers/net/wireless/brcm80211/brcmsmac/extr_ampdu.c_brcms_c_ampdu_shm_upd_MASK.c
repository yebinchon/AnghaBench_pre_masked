
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_c_info {int hw; } ;
struct ampdu_info {int rx_factor; struct brcms_c_info* wlc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ) ;

void FUNC_1(struct ampdu_info *VAR_8)
{
 struct brcms_c_info *VAR_9 = VAR_8->wlc;





 if ((VAR_8->rx_factor & VAR_0) ==
     VAR_1) {
  FUNC_0(VAR_9->hw, VAR_4, VAR_3);
  FUNC_0(VAR_9->hw, VAR_5, VAR_7);
 } else {
  FUNC_0(VAR_9->hw, VAR_4, VAR_2);
  FUNC_0(VAR_9->hw, VAR_5, VAR_6);
 }
}
