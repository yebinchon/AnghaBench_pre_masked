
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vino_data_norm {int height; int width; } ;
struct vino_channel_settings {size_t data_norm; } ;
struct v4l2_rect {int dummy; } ;
struct TYPE_4__ {int numerator; int denominator; } ;
struct TYPE_6__ {int height; int width; int top; int left; } ;
struct v4l2_cropcap {int type; TYPE_1__ pixelaspect; TYPE_3__ bounds; int defrect; } ;
struct file {int dummy; } ;
struct TYPE_5__ {int input_lock; } ;


 int VAR_0 ;


 int FUNC_0 (int *,TYPE_3__*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct vino_channel_settings* FUNC_3 (struct file*) ;
 struct vino_data_norm* VAR_1 ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, void *VAR_4,
        struct v4l2_cropcap *VAR_5)
{
 struct vino_channel_settings *VAR_6 = FUNC_3(VAR_3);
 const struct vino_data_norm *VAR_7;
 unsigned long VAR_8;

 switch (VAR_5->type) {
 case 129:
  FUNC_1(&VAR_2->input_lock, VAR_8);

  VAR_7 = &VAR_1[VAR_6->data_norm];

  FUNC_2(&VAR_2->input_lock, VAR_8);

  VAR_5->bounds.left = 0;
  VAR_5->bounds.top = 0;
  VAR_5->bounds.width = VAR_7->width;
  VAR_5->bounds.height = VAR_7->height;
  FUNC_0(&VAR_5->defrect, &VAR_5->bounds,
         sizeof(struct v4l2_rect));

  VAR_5->pixelaspect.numerator = 1;
  VAR_5->pixelaspect.denominator = 1;
  break;
 case 128:
 default:
  return -VAR_0;
 }

 return 0;
}
