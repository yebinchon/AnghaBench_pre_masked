
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct esp_target_data {int flags; int nego_goal_period; int nego_goal_offset; } ;
struct esp {int* msg_in; int flags; int max_period; int min_period; int ccycle; scalar_t__ rev; int msg_out_len; int * msg_out; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct esp*,struct esp_target_data*,int,int,int,int) ;
 int FUNC_2 (struct esp*,int ) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static void FUNC_4(struct esp *VAR_5, struct esp_target_data *VAR_6)
{
 u8 VAR_7 = VAR_5->msg_in[3];
 u8 VAR_8 = VAR_5->msg_in[4];
 u8 VAR_9;

 if (!(VAR_6->flags & VAR_2))
  goto do_reject;

 if (VAR_8 > 15)
  goto do_reject;

 if (VAR_5->flags & VAR_1)
  VAR_8 = 0;

 if (VAR_8) {
  int VAR_10;

  if (VAR_7 > VAR_5->max_period) {
   VAR_7 = VAR_8 = 0;
   goto do_sdtr;
  }
  if (VAR_7 < VAR_5->min_period)
   goto do_reject;

  VAR_10 = VAR_5->ccycle / 1000;
  VAR_9 = FUNC_0(VAR_7 << 2, VAR_10);
  if (VAR_9 && VAR_5->rev >= VAR_3) {
   if (VAR_9 >= 50)
    VAR_9--;
  }
 } else {
  VAR_9 = 0;
 }

 FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_8);
 return;

do_reject:
 VAR_5->msg_out[0] = VAR_4;
 VAR_5->msg_out_len = 1;
 FUNC_2(VAR_5, VAR_0);
 return;

do_sdtr:
 VAR_6->nego_goal_period = VAR_7;
 VAR_6->nego_goal_offset = VAR_8;
 VAR_5->msg_out_len =
  FUNC_3(&VAR_5->msg_out[0],
          VAR_6->nego_goal_period,
          VAR_6->nego_goal_offset);
 FUNC_2(VAR_5, VAR_0);
}
