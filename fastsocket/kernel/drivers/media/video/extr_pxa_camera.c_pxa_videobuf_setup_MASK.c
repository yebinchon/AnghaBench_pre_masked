
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct videobuf_queue {struct soc_camera_device* priv_data; } ;
struct TYPE_4__ {int parent; } ;
struct soc_camera_device {int user_height; TYPE_2__ dev; TYPE_1__* current_fmt; int user_width; } ;
struct TYPE_3__ {int host_fmt; } ;


 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct videobuf_queue *VAR_1, unsigned int *VAR_2,
         unsigned int *VAR_3)
{
 struct soc_camera_device *VAR_4 = VAR_1->priv_data;
 int VAR_5 = FUNC_1(VAR_4->user_width,
      VAR_4->current_fmt->host_fmt);

 if (VAR_5 < 0)
  return VAR_5;

 FUNC_0(VAR_4->dev.parent, "count=%d, size=%d\n", *VAR_2, *VAR_3);

 *VAR_3 = VAR_5 * VAR_4->user_height;

 if (0 == *VAR_2)
  *VAR_2 = 32;
 if (*VAR_3 * *VAR_2 > VAR_0 * 1024 * 1024)
  *VAR_2 = (VAR_0 * 1024 * 1024) / *VAR_3;

 return 0;
}
