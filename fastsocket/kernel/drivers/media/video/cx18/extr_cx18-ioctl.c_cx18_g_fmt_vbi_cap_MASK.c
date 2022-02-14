
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_vbi_format {int sampling_rate; int offset; scalar_t__* reserved; scalar_t__ flags; int * count; int * start; int sample_format; scalar_t__ samples_per_line; } ;
struct TYPE_3__ {struct v4l2_vbi_format vbi; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct cx18_open_id {struct cx18* cx; } ;
struct TYPE_4__ {int count; int * start; } ;
struct cx18 {TYPE_2__ vbi; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_2, void *VAR_3,
    struct v4l2_format *VAR_4)
{
 struct cx18 *VAR_5 = ((struct cx18_open_id *)VAR_3)->cx;
 struct v4l2_vbi_format *VAR_6 = &VAR_4->fmt.vbi;

 VAR_6->sampling_rate = 27000000;
 VAR_6->offset = 248;
 VAR_6->samples_per_line = VAR_1 - 4;
 VAR_6->sample_format = VAR_0;
 VAR_6->start[0] = VAR_5->vbi.start[0];
 VAR_6->start[1] = VAR_5->vbi.start[1];
 VAR_6->count[0] = VAR_6->count[1] = VAR_5->vbi.count;
 VAR_6->flags = 0;
 VAR_6->reserved[0] = 0;
 VAR_6->reserved[1] = 0;
 return 0;
}
