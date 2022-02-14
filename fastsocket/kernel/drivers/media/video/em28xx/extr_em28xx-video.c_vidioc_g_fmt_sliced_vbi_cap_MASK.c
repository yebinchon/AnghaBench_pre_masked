
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ service_set; } ;
struct TYPE_3__ {TYPE_2__ sliced; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct em28xx_fh {struct em28xx* dev; } ;
struct em28xx {int v4l2_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct em28xx*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ,int ,TYPE_2__*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
     struct v4l2_format *VAR_5)
{
 struct em28xx_fh *VAR_6 = VAR_4;
 struct em28xx *VAR_7 = VAR_6->dev;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_5->fmt.sliced.service_set = 0;
 FUNC_1(&VAR_7->v4l2_dev, 0, VAR_2, VAR_1, &VAR_5->fmt.sliced);

 if (VAR_5->fmt.sliced.service_set == 0)
  VAR_8 = -VAR_0;

 return VAR_8;
}
