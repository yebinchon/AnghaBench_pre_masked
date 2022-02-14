
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int* start; void** count; int sampling_rate; } ;
struct TYPE_12__ {TYPE_5__ vbi; } ;
struct v4l2_format {TYPE_6__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_8__ {int top; int height; } ;
struct TYPE_9__ {TYPE_2__ bounds; } ;
struct bttv_tvnorm {int* vbistart; int Fsc; TYPE_3__ cropcap; } ;
struct TYPE_10__ {struct bttv_tvnorm const* tvnorm; TYPE_5__ fmt; } ;
struct bttv_fh {TYPE_4__ vbi_fmt; TYPE_1__* btv; } ;
typedef int __s32 ;
struct TYPE_7__ {size_t tvnorm; } ;


 struct bttv_tvnorm* VAR_0 ;
 void* FUNC_0 (int,int) ;

int FUNC_1(struct file *VAR_1, void *VAR_2, struct v4l2_format *VAR_3)
{
 struct bttv_fh *VAR_4 = VAR_2;
 const struct bttv_tvnorm *VAR_5;

 VAR_3->fmt.vbi = VAR_4->vbi_fmt.fmt;

 VAR_5 = &VAR_0[VAR_4->btv->tvnorm];

 if (VAR_5 != VAR_4->vbi_fmt.tvnorm) {
  __s32 VAR_6;
  unsigned int VAR_7;





  VAR_6 = (VAR_5->cropcap.bounds.top
      + VAR_5->cropcap.bounds.height) >> 1;

  VAR_3->fmt.vbi.sampling_rate = VAR_5->Fsc;

  for (VAR_7 = 0; VAR_7 < 2; ++VAR_7) {
   __s32 VAR_8;

   VAR_8 = VAR_3->fmt.vbi.start[VAR_7]
    + VAR_5->vbistart[VAR_7]
    - VAR_4->vbi_fmt.tvnorm->vbistart[VAR_7];

   VAR_3->fmt.vbi.start[VAR_7] = FUNC_0(VAR_8, VAR_6 - 1);
   VAR_3->fmt.vbi.count[VAR_7] =
    FUNC_0((__s32) VAR_3->fmt.vbi.count[VAR_7],
       VAR_6 - VAR_3->fmt.vbi.start[VAR_7]);

   VAR_6 += VAR_5->vbistart[1]
    - VAR_5->vbistart[0];
  }
 }
 return 0;
}
