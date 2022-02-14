
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {int in_ifs_mode; int ifs_ratio; int ifs_step_size; int ifs_max_val; int ifs_min_val; scalar_t__ current_ifs_val; int ifs_params_forced; scalar_t__ adaptive_ifs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct e1000_hw *VAR_5)
{
 FUNC_0("e1000_reset_adaptive");

 if (VAR_5->adaptive_ifs) {
  if (!VAR_5->ifs_params_forced) {
   VAR_5->current_ifs_val = 0;
   VAR_5->ifs_min_val = VAR_2;
   VAR_5->ifs_max_val = VAR_1;
   VAR_5->ifs_step_size = VAR_4;
   VAR_5->ifs_ratio = VAR_3;
  }
  VAR_5->in_ifs_mode = 0;
  FUNC_1(VAR_0, 0);
 } else {
  FUNC_0("Not in Adaptive IFS mode!\n");
 }
}
