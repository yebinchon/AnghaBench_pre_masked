
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_vbi_format {int sampling_rate; int offset; scalar_t__* reserved; scalar_t__ flags; int * count; int * start; int sample_format; scalar_t__ samples_per_line; } ;
struct TYPE_3__ {struct v4l2_vbi_format vbi; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct ivtv_open_id {struct ivtv* itv; } ;
struct TYPE_4__ {int count; int * start; scalar_t__ raw_decoder_line_size; } ;
struct ivtv {TYPE_2__ vbi; } ;
struct file {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_1, void *VAR_2, struct v4l2_format *VAR_3)
{
 struct ivtv *VAR_4 = ((struct ivtv_open_id *)VAR_2)->itv;
 struct v4l2_vbi_format *VAR_5 = &VAR_3->fmt.vbi;

 VAR_5->sampling_rate = 27000000;
 VAR_5->offset = 248;
 VAR_5->samples_per_line = VAR_4->vbi.raw_decoder_line_size - 4;
 VAR_5->sample_format = VAR_0;
 VAR_5->start[0] = VAR_4->vbi.start[0];
 VAR_5->start[1] = VAR_4->vbi.start[1];
 VAR_5->count[0] = VAR_5->count[1] = VAR_4->vbi.count;
 VAR_5->flags = 0;
 VAR_5->reserved[0] = 0;
 VAR_5->reserved[1] = 0;
 return 0;
}
