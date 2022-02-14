
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_vbi_format {scalar_t__* count; int* start; scalar_t__* reserved; scalar_t__ flags; int offset; int sample_format; int samples_per_line; int sampling_rate; } ;
struct TYPE_3__ {int top; int height; } ;
struct TYPE_4__ {TYPE_1__ bounds; } ;
struct bttv_tvnorm {int* vbistart; int Fsc; TYPE_2__ cropcap; } ;
typedef int s64 ;
typedef int __s32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int,int,int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_vbi_format *VAR_4, const struct bttv_tvnorm *VAR_5,
   __s32 VAR_6)
{
 __s32 VAR_7, VAR_8, VAR_9, VAR_10;
 unsigned int VAR_11;







 VAR_7 = VAR_5->vbistart[0];
 VAR_8 = (VAR_6 >> 1) - 1;
 VAR_9 = (VAR_5->cropcap.bounds.top
     + VAR_5->cropcap.bounds.height) >> 1;

 if (VAR_7 > VAR_8)
  return -VAR_0;

 FUNC_0(VAR_8 >= VAR_9);

 VAR_4->sampling_rate = VAR_5->Fsc;
 VAR_4->samples_per_line = VAR_2;
 VAR_4->sample_format = VAR_1;
 VAR_4->offset = VAR_3;

 VAR_10 = VAR_5->vbistart[1] - VAR_5->vbistart[0];

 for (VAR_11 = 0; VAR_11 < 2; ++VAR_11) {
  if (0 == VAR_4->count[VAR_11]) {




  } else {
   s64 VAR_12, VAR_13;

   VAR_12 = FUNC_1(VAR_4->start[VAR_11], VAR_7, VAR_8);

   VAR_13 = (s64) VAR_4->start[VAR_11] + VAR_4->count[VAR_11] - VAR_12;
   VAR_4->start[VAR_11] = VAR_12;
   VAR_4->count[VAR_11] = FUNC_1(VAR_13, (s64) 1,
         VAR_9 - VAR_12);
  }

  VAR_7 += VAR_10;
  VAR_8 += VAR_10;
  VAR_9 += VAR_10;
 }

 if (0 == (VAR_4->count[0] | VAR_4->count[1])) {

  VAR_4->start[0] = VAR_5->vbistart[0];
  VAR_4->start[1] = VAR_5->vbistart[1];
  VAR_4->count[0] = 1;
  VAR_4->count[1] = 1;
 }

 VAR_4->flags = 0;

 VAR_4->reserved[0] = 0;
 VAR_4->reserved[1] = 0;

 return 0;
}
