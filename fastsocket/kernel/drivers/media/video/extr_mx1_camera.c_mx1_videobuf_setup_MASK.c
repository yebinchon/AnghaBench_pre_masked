
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct videobuf_queue {struct soc_camera_device* priv_data; } ;
struct TYPE_3__ {int parent; } ;
struct soc_camera_device {int user_width; int user_height; TYPE_1__ dev; TYPE_2__* current_fmt; } ;
struct TYPE_4__ {int depth; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct videobuf_queue *VAR_1, unsigned int *VAR_2,
         unsigned int *VAR_3)
{
 struct soc_camera_device *VAR_4 = VAR_1->priv_data;

 *VAR_3 = VAR_4->user_width * VAR_4->user_height *
  ((VAR_4->current_fmt->depth + 7) >> 3);

 if (!*VAR_2)
  *VAR_2 = 32;

 while (*VAR_3 * *VAR_2 > VAR_0 * 1024 * 1024)
  (*VAR_2)--;

 FUNC_0(VAR_4->dev.parent, "count=%d, size=%d\n", *VAR_2, *VAR_3);

 return 0;
}
