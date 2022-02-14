
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videobuf_queue {struct bttv_fh* priv_data; } ;
struct bttv_fh {int width; int height; TYPE_1__* fmt; } ;
struct TYPE_2__ {int depth; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct videobuf_queue *VAR_2, unsigned int *VAR_3, unsigned int *VAR_4)
{
 struct bttv_fh *VAR_5 = VAR_2->priv_data;

 *VAR_4 = VAR_5->fmt->depth*VAR_5->width*VAR_5->height >> 3;
 if (0 == *VAR_3)
  *VAR_3 = VAR_0;
 if (*VAR_4 * *VAR_3 > VAR_0 * VAR_1)
  *VAR_3 = (VAR_0 * VAR_1) / *VAR_4;
 return 0;
}
