
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vpfe_fh {struct vpfe_device* vpfe_dev; } ;
struct TYPE_4__ {int sizeimage; int height; int width; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct TYPE_6__ {TYPE_2__ fmt; } ;
struct vpfe_device {TYPE_3__ fmt; int v4l2_dev; } ;
struct videobuf_queue {struct vpfe_fh* priv_data; } ;
struct videobuf_buffer {scalar_t__ state; int field; int size; int height; int width; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int *,char*) ;

__attribute__((used)) static int FUNC_1(struct videobuf_queue *VAR_3,
    struct videobuf_buffer *VAR_4,
    enum v4l2_field VAR_5)
{
 struct vpfe_fh *VAR_6 = VAR_3->priv_data;
 struct vpfe_device *VAR_7 = VAR_6->vpfe_dev;

 FUNC_0(1, VAR_2, &VAR_7->v4l2_dev, "vpfe_buffer_prepare\n");


 if (VAR_0 == VAR_4->state) {
  VAR_4->width = VAR_7->fmt.fmt.pix.width;
  VAR_4->height = VAR_7->fmt.fmt.pix.height;
  VAR_4->size = VAR_7->fmt.fmt.pix.sizeimage;
  VAR_4->field = VAR_5;
 }
 VAR_4->state = VAR_1;
 return 0;
}
