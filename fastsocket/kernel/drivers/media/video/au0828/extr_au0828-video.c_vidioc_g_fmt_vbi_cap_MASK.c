
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sampling_rate; int* start; int * count; scalar_t__ flags; scalar_t__ offset; int sample_format; int samples_per_line; } ;
struct TYPE_4__ {TYPE_1__ vbi; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct au0828_fh {struct au0828_dev* dev; } ;
struct au0828_dev {int vbi_height; int vbi_width; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_1, void *VAR_2,
    struct v4l2_format *VAR_3)
{
 struct au0828_fh *VAR_4 = VAR_2;
 struct au0828_dev *VAR_5 = VAR_4->dev;

 VAR_3->fmt.vbi.samples_per_line = VAR_5->vbi_width;
 VAR_3->fmt.vbi.sample_format = VAR_0;
 VAR_3->fmt.vbi.offset = 0;
 VAR_3->fmt.vbi.flags = 0;
 VAR_3->fmt.vbi.sampling_rate = 6750000 * 4 / 2;

 VAR_3->fmt.vbi.count[0] = VAR_5->vbi_height;
 VAR_3->fmt.vbi.count[1] = VAR_5->vbi_height;
 VAR_3->fmt.vbi.start[0] = 21;
 VAR_3->fmt.vbi.start[1] = 284;

 return 0;
}
