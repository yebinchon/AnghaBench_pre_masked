
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct video_mmap {size_t frame; int height; int width; } ;
struct cpia2_fh {int prio; } ;
struct TYPE_7__ {int stream_mode; } ;
struct TYPE_5__ {int height; int width; } ;
struct TYPE_8__ {TYPE_3__ camera_state; TYPE_1__ roi; } ;
struct camera_data {size_t num_frames; int video_size; TYPE_4__ params; TYPE_2__* buffers; int prio; } ;
struct TYPE_6__ {scalar_t__ status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct camera_data*) ;
 int FUNC_2 (struct camera_data*,int ) ;
 int FUNC_3 (struct camera_data*,size_t) ;
 int FUNC_4 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_5(void *VAR_4, struct camera_data *VAR_5,
     struct cpia2_fh *VAR_6)
{
 struct video_mmap *VAR_7;
 int VAR_8, VAR_9;
 VAR_7 = VAR_4;

 if (VAR_7->frame < 0 || VAR_7->frame >= VAR_5->num_frames)
  return -VAR_0;


 VAR_8 = FUNC_0(VAR_7->width, VAR_7->height);
 if (VAR_5->video_size < 0) {
  return -VAR_0;
 }


 VAR_9 = FUNC_4(&VAR_5->prio, &VAR_6->prio, VAR_3);
 if(VAR_9 != 0)
  return VAR_9;

 if (VAR_8 != VAR_5->video_size) {
  VAR_5->video_size = VAR_8;
  VAR_5->params.roi.width = VAR_7->width;
  VAR_5->params.roi.height = VAR_7->height;
  FUNC_1(VAR_5);
 }

 if (VAR_5->buffers[VAR_7->frame].status == VAR_2)
  if ((VAR_9=FUNC_3(VAR_5, VAR_7->frame)) < 0)
   return VAR_9;

 VAR_5->buffers[VAR_7->frame].status = VAR_1;

 return FUNC_2(VAR_5,VAR_5->params.camera_state.stream_mode);
}
