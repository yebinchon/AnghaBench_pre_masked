
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sampling_rate; int samples_per_line; int offset; scalar_t__ flags; scalar_t__* count; scalar_t__* start; int sample_format; } ;
struct TYPE_4__ {TYPE_1__ vbi; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct saa7134_tvnorm {scalar_t__ vbi_v_start_1; scalar_t__ vbi_v_start_0; scalar_t__ vbi_v_stop_0; } ;
struct saa7134_fh {struct saa7134_dev* dev; } ;
struct saa7134_dev {struct saa7134_tvnorm* tvnorm; } ;
struct file {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_1, void *VAR_2,
      struct v4l2_format *VAR_3)
{
 struct saa7134_fh *VAR_4 = VAR_2;
 struct saa7134_dev *VAR_5 = VAR_4->dev;
 struct saa7134_tvnorm *VAR_6 = VAR_5->tvnorm;

 VAR_3->fmt.vbi.sampling_rate = 6750000 * 4;
 VAR_3->fmt.vbi.samples_per_line = 2048 ;
 VAR_3->fmt.vbi.sample_format = VAR_0;
 VAR_3->fmt.vbi.offset = 64 * 4;
 VAR_3->fmt.vbi.start[0] = VAR_6->vbi_v_start_0;
 VAR_3->fmt.vbi.count[0] = VAR_6->vbi_v_stop_0 - VAR_6->vbi_v_start_0 +1;
 VAR_3->fmt.vbi.start[1] = VAR_6->vbi_v_start_1;
 VAR_3->fmt.vbi.count[1] = VAR_3->fmt.vbi.count[0];
 VAR_3->fmt.vbi.flags = 0;

 return 0;
}
