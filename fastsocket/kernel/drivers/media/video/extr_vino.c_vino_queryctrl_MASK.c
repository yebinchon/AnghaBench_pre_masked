
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vino_channel_settings {int input; } ;
struct v4l2_queryctrl {int * reserved; int id; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int input_lock; } ;
struct TYPE_5__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (struct v4l2_queryctrl*,TYPE_1__*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct vino_channel_settings* FUNC_3 (struct file*) ;
 TYPE_3__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_4(struct file *VAR_6, void *VAR_7,
          struct v4l2_queryctrl *VAR_8)
{
 struct vino_channel_settings *VAR_9 = FUNC_3(VAR_6);
 unsigned long VAR_10;
 int VAR_11;
 int VAR_12 = 0;

 FUNC_1(&VAR_3->input_lock, VAR_10);

 switch (VAR_9->input) {
 case 129:
  for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
   if (VAR_4[VAR_11].id ==
       VAR_8->id) {
    FUNC_0(VAR_8,
           &VAR_4[VAR_11],
           sizeof(struct v4l2_queryctrl));
    VAR_8->reserved[0] = 0;
    goto found;
   }
  }

  VAR_12 = -VAR_0;
  break;
 case 130:
 case 128:
  for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
   if (VAR_5[VAR_11].id ==
       VAR_8->id) {
    FUNC_0(VAR_8,
           &VAR_5[VAR_11],
           sizeof(struct v4l2_queryctrl));
    VAR_8->reserved[0] = 0;
    goto found;
   }
  }

  VAR_12 = -VAR_0;
  break;
 default:
  VAR_12 = -VAR_0;
 }

 found:
 FUNC_2(&VAR_3->input_lock, VAR_10);

 return VAR_12;
}
