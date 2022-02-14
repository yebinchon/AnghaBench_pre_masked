
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t g_step_idx; int g_current; int g_high; int g_target; int g_low; } ;
struct ath5k_hw {int ah_radio; TYPE_1__ ah_gain; } ;
struct ath5k_gain_opt_step {int gos_gain; } ;
struct ath5k_gain_opt {int go_steps_count; struct ath5k_gain_opt_step* go_step; } ;
typedef int s8 ;




 int FUNC_0 (struct ath5k_hw*,int ,char*,int,size_t,int,int) ;
 int VAR_0 ;
 struct ath5k_gain_opt VAR_1 ;
 struct ath5k_gain_opt VAR_2 ;

__attribute__((used)) static s8
FUNC_1(struct ath5k_hw *VAR_3)
{
 const struct ath5k_gain_opt *VAR_4;
 const struct ath5k_gain_opt_step *VAR_5;
 int VAR_6 = 0;

 switch (VAR_3->ah_radio) {
 case 129:
  VAR_4 = &VAR_1;
  break;
 case 128:
  VAR_4 = &VAR_2;
  break;
 default:
  return 0;
 }

 VAR_5 = &VAR_4->go_step[VAR_3->ah_gain.g_step_idx];

 if (VAR_3->ah_gain.g_current >= VAR_3->ah_gain.g_high) {


  if (VAR_3->ah_gain.g_step_idx == 0)
   return -1;

  for (VAR_3->ah_gain.g_target = VAR_3->ah_gain.g_current;
    VAR_3->ah_gain.g_target >= VAR_3->ah_gain.g_high &&
    VAR_3->ah_gain.g_step_idx > 0;
    VAR_5 = &VAR_4->go_step[VAR_3->ah_gain.g_step_idx])
   VAR_3->ah_gain.g_target -= 2 *
       (VAR_4->go_step[--(VAR_3->ah_gain.g_step_idx)].gos_gain -
       VAR_5->gos_gain);

  VAR_6 = 1;
  goto done;
 }

 if (VAR_3->ah_gain.g_current <= VAR_3->ah_gain.g_low) {


  if (VAR_3->ah_gain.g_step_idx == (VAR_4->go_steps_count - 1))
   return -2;

  for (VAR_3->ah_gain.g_target = VAR_3->ah_gain.g_current;
    VAR_3->ah_gain.g_target <= VAR_3->ah_gain.g_low &&
    VAR_3->ah_gain.g_step_idx < VAR_4->go_steps_count - 1;
    VAR_5 = &VAR_4->go_step[VAR_3->ah_gain.g_step_idx])
   VAR_3->ah_gain.g_target -= 2 *
       (VAR_4->go_step[++VAR_3->ah_gain.g_step_idx].gos_gain -
       VAR_5->gos_gain);

  VAR_6 = 2;
  goto done;
 }

done:
 FUNC_0(VAR_3, VAR_0,
  "ret %d, gain step %u, current gain %u, target gain %u\n",
  VAR_6, VAR_3->ah_gain.g_step_idx, VAR_3->ah_gain.g_current,
  VAR_3->ah_gain.g_target);

 return VAR_6;
}
