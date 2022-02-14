
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct vino_channel_settings {int input; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int input_lock; } ;
struct TYPE_3__ {int std; } ;


 int VAR_0 ;



 int FUNC_0 (int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int VAR_2 ;
 struct vino_channel_settings* FUNC_3 (struct file*) ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_4(struct file *VAR_5, void *VAR_6,
         v4l2_std_id *VAR_7)
{
 struct vino_channel_settings *VAR_8 = FUNC_3(VAR_5);
 unsigned long VAR_9;
 int VAR_10 = 0;

 FUNC_1(&VAR_3->input_lock, VAR_9);

 switch (VAR_8->input) {
 case 129:
  *VAR_7 = VAR_4[VAR_8->input].std;
  break;
 case 130:
 case 128: {
  FUNC_0(VAR_2, VAR_1, VAR_7);
  break;
 }
 default:
  VAR_10 = -VAR_0;
 }

 FUNC_2(&VAR_3->input_lock, VAR_9);

 return VAR_10;
}
