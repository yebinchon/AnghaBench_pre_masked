
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct saa7146_vv {scalar_t__ vflip; } ;
struct saa7146_video_dma {int pitch; scalar_t__ prot_addr; scalar_t__ base_even; scalar_t__ base_odd; } ;
struct saa7146_buf {TYPE_2__* pt; TYPE_1__* fmt; } ;
struct TYPE_4__ {scalar_t__ offset; } ;
struct TYPE_3__ {int height; int width; } ;



__attribute__((used)) static int FUNC_0(struct saa7146_vv *VAR_0, struct saa7146_buf *VAR_1, struct saa7146_video_dma *VAR_2, struct saa7146_video_dma *VAR_3)
{
 int VAR_4 = VAR_1->fmt->height;
 int VAR_5 = VAR_1->fmt->width;

 VAR_2->pitch = VAR_5;
 VAR_3->pitch = VAR_5;



 if( 0 != VAR_0->vflip ) {
  VAR_2->prot_addr = VAR_1->pt[1].offset;
  VAR_2->base_even = ((VAR_2->pitch/2)*VAR_4)+VAR_1->pt[1].offset;
  VAR_2->base_odd = VAR_2->base_even - (VAR_2->pitch/2);

  VAR_3->prot_addr = VAR_1->pt[2].offset;
  VAR_3->base_even = ((VAR_3->pitch/2)*VAR_4)+VAR_1->pt[2].offset;
  VAR_3->base_odd = VAR_3->base_even - (VAR_3->pitch/2);
 } else {
  VAR_3->base_even = VAR_1->pt[2].offset;
  VAR_3->base_odd = VAR_3->base_even + (VAR_3->pitch/2);
  VAR_3->prot_addr = (VAR_3->pitch/2)*VAR_4+VAR_1->pt[2].offset;

  VAR_2->base_even = VAR_1->pt[1].offset;
  VAR_2->base_odd = VAR_2->base_even + (VAR_2->pitch/2);
  VAR_2->prot_addr = (VAR_2->pitch/2)*VAR_4+VAR_1->pt[1].offset;
 }

 return 0;
}
