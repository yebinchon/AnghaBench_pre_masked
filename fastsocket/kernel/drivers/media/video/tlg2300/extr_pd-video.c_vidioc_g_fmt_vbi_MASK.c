
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_vbi_format {int samples_per_line; int sampling_rate; int offset; int* start; int flags; void** count; int sample_format; } ;
struct TYPE_4__ {struct v4l2_vbi_format vbi; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct TYPE_5__ {int tvnormid; } ;
struct TYPE_6__ {TYPE_2__ context; } ;
struct poseidon {TYPE_3__ video_data; } ;
struct front_face {struct poseidon* pd; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (struct front_face*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_5, void *VAR_6,
          struct v4l2_format *VAR_7)
{
 struct front_face *VAR_8 = VAR_6;
 struct poseidon *VAR_9 = VAR_8->pd;
 struct v4l2_vbi_format *VAR_10 = &VAR_7->fmt.vbi;

 VAR_10->samples_per_line = 720 * 2;
 VAR_10->sampling_rate = 6750000 * 4;
 VAR_10->sample_format = VAR_0;
 VAR_10->offset = 64 * 4;
 if (VAR_9->video_data.context.tvnormid & VAR_1) {
  VAR_10->start[0] = 10;
  VAR_10->start[1] = 264;
  VAR_10->count[0] = VAR_3;
  VAR_10->count[1] = VAR_3;
 } else {
  VAR_10->start[0] = 6;
  VAR_10->start[1] = 314;
  VAR_10->count[0] = VAR_4;
  VAR_10->count[1] = VAR_4;
 }
 VAR_10->flags = VAR_2;
 FUNC_0(VAR_8);
 return 0;
}
