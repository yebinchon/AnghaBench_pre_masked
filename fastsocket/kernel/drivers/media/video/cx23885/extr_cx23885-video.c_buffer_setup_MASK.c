
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videobuf_queue {struct cx23885_fh* priv_data; } ;
struct cx23885_fh {int width; int height; TYPE_1__* fmt; } ;
struct TYPE_2__ {int depth; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct videobuf_queue *VAR_1, unsigned int *VAR_2,
 unsigned int *VAR_3)
{
 struct cx23885_fh *VAR_4 = VAR_1->priv_data;

 *VAR_3 = VAR_4->fmt->depth*VAR_4->width*VAR_4->height >> 3;
 if (0 == *VAR_2)
  *VAR_2 = 32;
 if (*VAR_3 * *VAR_2 > VAR_0 * 1024 * 1024)
  *VAR_2 = (VAR_0 * 1024 * 1024) / *VAR_3;
 return 0;
}
