
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videobuf_queue {struct au0828_fh* priv_data; } ;
struct au0828_fh {TYPE_1__* dev; } ;
struct TYPE_2__ {int width; int height; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct videobuf_queue *VAR_2, unsigned int *VAR_3,
      unsigned int *VAR_4)
{
 struct au0828_fh *VAR_5 = VAR_2->priv_data;
 *VAR_4 = (VAR_5->dev->width * VAR_5->dev->height * 16 + 7) >> 3;

 if (0 == *VAR_3)
  *VAR_3 = VAR_0;

 if (*VAR_3 < VAR_1)
  *VAR_3 = VAR_1;
 return 0;
}
