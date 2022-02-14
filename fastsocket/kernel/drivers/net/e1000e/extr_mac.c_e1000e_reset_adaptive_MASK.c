
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_mac_info {int in_ifs_mode; int ifs_ratio; int ifs_step_size; int ifs_max_val; int ifs_min_val; scalar_t__ current_ifs_val; int adaptive_ifs; } ;
struct e1000_hw {struct e1000_mac_info mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct e1000_hw *VAR_5)
{
 struct e1000_mac_info *VAR_6 = &VAR_5->mac;

 if (!VAR_6->adaptive_ifs) {
  FUNC_0("Not in Adaptive IFS mode!\n");
  return;
 }

 VAR_6->current_ifs_val = 0;
 VAR_6->ifs_min_val = VAR_2;
 VAR_6->ifs_max_val = VAR_1;
 VAR_6->ifs_step_size = VAR_4;
 VAR_6->ifs_ratio = VAR_3;

 VAR_6->in_ifs_mode = 0;
 FUNC_1(VAR_0, 0);
}
