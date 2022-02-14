
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct videobuf_queue {struct omap24xxcam_fh* priv_data; } ;
struct TYPE_3__ {unsigned int sizeimage; } ;
struct omap24xxcam_fh {TYPE_2__* cam; TYPE_1__ pix; } ;
struct TYPE_4__ {unsigned int capture_mem; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct videobuf_queue *VAR_1, unsigned int *VAR_2,
     unsigned int *VAR_3)
{
 struct omap24xxcam_fh *VAR_4 = VAR_1->priv_data;

 if (*VAR_2 <= 0)
  *VAR_2 = VAR_0;

 if (*VAR_2 > VAR_0)
  *VAR_2 = VAR_0;

 *VAR_3 = VAR_4->pix.sizeimage;


 while (*VAR_3 * *VAR_2 > VAR_4->cam->capture_mem)
  (*VAR_2)--;

 return 0;
}
