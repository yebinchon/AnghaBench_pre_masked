
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct vino_channel_settings {size_t input; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int input_lock; } ;
struct TYPE_3__ {int std; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct vino_channel_settings* FUNC_3 (struct file*) ;
 TYPE_2__* VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_4 (struct vino_channel_settings*) ;
 int FUNC_5 (struct vino_channel_settings*,int ,unsigned long*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_11, void *VAR_12,
      v4l2_std_id *VAR_13)
{
 struct vino_channel_settings *VAR_14 = FUNC_3(VAR_11);
 unsigned long VAR_15;
 int VAR_16 = 0;

 FUNC_1(&VAR_9->input_lock, VAR_15);

 if (!FUNC_4(VAR_14)) {
  VAR_16 = -VAR_0;
  goto out;
 }


 if ((*VAR_13) & VAR_10[VAR_14->input].std) {
  FUNC_0("standard accepted\n");




  if (VAR_14->input == VAR_8)
   goto out;

  if ((*VAR_13) & VAR_3) {
   VAR_16 = FUNC_5(VAR_14, VAR_6,
       &VAR_15);
  } else if ((*VAR_13) & VAR_2) {
   VAR_16 = FUNC_5(VAR_14, VAR_5,
       &VAR_15);
  } else if ((*VAR_13) & VAR_4) {
   VAR_16 = FUNC_5(VAR_14, VAR_7,
       &VAR_15);
  } else {
   VAR_16 = -VAR_1;
  }

  if (VAR_16) {
   VAR_16 = -VAR_1;
  }
 } else {
  VAR_16 = -VAR_1;
 }

out:
 FUNC_2(&VAR_9->input_lock, VAR_15);

 return VAR_16;
}
