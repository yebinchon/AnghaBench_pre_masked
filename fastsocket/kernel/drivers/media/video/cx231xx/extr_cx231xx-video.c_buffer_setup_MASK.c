
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videobuf_queue {struct cx231xx_fh* priv_data; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct cx231xx {int width; int height; TYPE_1__* format; } ;
struct TYPE_2__ {int depth; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct videobuf_queue *VAR_2, unsigned int *VAR_3, unsigned int *VAR_4)
{
 struct cx231xx_fh *VAR_5 = VAR_2->priv_data;
 struct cx231xx *VAR_6 = VAR_5->dev;

 *VAR_4 = (VAR_5->dev->width * VAR_5->dev->height * VAR_6->format->depth + 7)>>3;
 if (0 == *VAR_3)
  *VAR_3 = VAR_0;

 if (*VAR_3 < VAR_1)
  *VAR_3 = VAR_1;

 return 0;
}
