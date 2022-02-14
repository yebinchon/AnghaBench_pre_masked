
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videobuf_queue {struct s2255_fh* priv_data; } ;
struct s2255_fh {struct s2255_channel* channel; } ;
struct s2255_channel {int width; int height; TYPE_1__* fmt; } ;
struct TYPE_2__ {int depth; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct videobuf_queue *VAR_2, unsigned int *VAR_3,
   unsigned int *VAR_4)
{
 struct s2255_fh *VAR_5 = VAR_2->priv_data;
 struct s2255_channel *VAR_6 = VAR_5->channel;
 *VAR_4 = VAR_6->width * VAR_6->height * (VAR_6->fmt->depth >> 3);

 if (0 == *VAR_3)
  *VAR_3 = VAR_0;

 if (*VAR_4 * *VAR_3 > VAR_1 * 1024 * 1024)
  *VAR_3 = (VAR_1 * 1024 * 1024) / *VAR_4;

 return 0;
}
