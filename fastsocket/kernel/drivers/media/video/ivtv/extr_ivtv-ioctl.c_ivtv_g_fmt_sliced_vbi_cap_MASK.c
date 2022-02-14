
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_sliced_vbi_format {int io_size; int service_set; scalar_t__* reserved; } ;
struct v4l2_sliced_vbi_data {int dummy; } ;
struct TYPE_2__ {struct v4l2_sliced_vbi_format sliced; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct ivtv_open_id {scalar_t__ type; struct ivtv* itv; } ;
struct ivtv {int sd_video; scalar_t__ is_50hz; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct v4l2_sliced_vbi_format*,scalar_t__) ;
 int FUNC_1 (struct v4l2_sliced_vbi_format*) ;
 int FUNC_2 (int ,int ,int ,struct v4l2_sliced_vbi_format*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5, void *VAR_6, struct v4l2_format *VAR_7)
{
 struct v4l2_sliced_vbi_format *VAR_8 = &VAR_7->fmt.sliced;
 struct ivtv_open_id *VAR_9 = VAR_6;
 struct ivtv *VAR_10 = VAR_9->itv;

 VAR_8->reserved[0] = 0;
 VAR_8->reserved[1] = 0;
 VAR_8->io_size = sizeof(struct v4l2_sliced_vbi_data) * 36;

 if (VAR_9->type == VAR_0) {
  VAR_8->service_set = VAR_10->is_50hz ? VAR_2 :
   VAR_1;
  FUNC_0(VAR_8, VAR_10->is_50hz);
  return 0;
 }

 FUNC_2(VAR_10->sd_video, VAR_4, VAR_3, VAR_8);
 VAR_8->service_set = FUNC_1(VAR_8);
 return 0;
}
