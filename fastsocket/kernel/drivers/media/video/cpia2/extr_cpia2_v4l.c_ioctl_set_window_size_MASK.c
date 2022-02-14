
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct video_window {scalar_t__ clipcount; scalar_t__ width; scalar_t__ height; int * clips; } ;
struct cpia2_fh {int prio; } ;
struct TYPE_8__ {scalar_t__ width; scalar_t__ height; } ;
struct TYPE_6__ {scalar_t__ inhibit_htables; } ;
struct TYPE_9__ {TYPE_3__ roi; TYPE_1__ compression; } ;
struct TYPE_7__ {scalar_t__ width; scalar_t__ height; } ;
struct camera_data {int num_frames; TYPE_5__* buffers; TYPE_4__ params; TYPE_2__ vw; int pixelformat; int prio; } ;
struct TYPE_10__ {scalar_t__ status; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct camera_data*) ;
 int FUNC_2 (struct camera_data*,int) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_4(void *VAR_5, struct camera_data *VAR_6,
     struct cpia2_fh *VAR_7)
{

 struct video_window *VAR_8;
 int VAR_9, VAR_10;
 VAR_8 = VAR_5;

 if (VAR_8->clipcount != 0)
  return -VAR_0;

 if (VAR_8->clips != ((void*)0))
  return -VAR_0;


 VAR_10 = FUNC_3(&VAR_6->prio, &VAR_7->prio, VAR_4);
 if(VAR_10 != 0)
  return VAR_10;

 VAR_6->pixelformat = VAR_3;


 VAR_6->params.compression.inhibit_htables = 0;




 FUNC_0("Requested width = %d, height = %d\n", VAR_8->width, VAR_8->height);
 if (VAR_8->width != VAR_6->vw.width || VAR_8->height != VAR_6->vw.height) {
  VAR_6->vw.width = VAR_8->width;
  VAR_6->vw.height = VAR_8->height;
  VAR_6->params.roi.width = VAR_8->width;
  VAR_6->params.roi.height = VAR_8->height;
  FUNC_1(VAR_6);
 }

 for (VAR_9 = 0; VAR_9 < VAR_6->num_frames; ++VAR_9) {
  if (VAR_6->buffers[VAR_9].status == VAR_2)
   if ((VAR_10 = FUNC_2(VAR_6, VAR_9)) < 0)
    return VAR_10;

  VAR_6->buffers[VAR_9].status = VAR_1;
 }

 return 0;
}
