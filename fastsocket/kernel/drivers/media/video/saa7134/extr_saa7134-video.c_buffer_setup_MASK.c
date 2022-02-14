
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videobuf_queue {struct saa7134_fh* priv_data; } ;
struct saa7134_fh {int width; int height; TYPE_1__* fmt; } ;
struct TYPE_2__ {int depth; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_1(struct videobuf_queue *VAR_1, unsigned int *VAR_2, unsigned int *VAR_3)
{
 struct saa7134_fh *VAR_4 = VAR_1->priv_data;

 *VAR_3 = VAR_4->fmt->depth * VAR_4->width * VAR_4->height >> 3;
 if (0 == *VAR_2)
  *VAR_2 = VAR_0;
 *VAR_2 = FUNC_0(*VAR_3,*VAR_2);
 return 0;
}
