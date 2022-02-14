
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ width; scalar_t__ height; int pixelformat; } ;
struct TYPE_13__ {TYPE_5__ pix; } ;
struct v4l2_format {TYPE_6__ fmt; } ;
struct cpia2_fh {int prio; } ;
struct TYPE_10__ {scalar_t__ width; scalar_t__ height; } ;
struct TYPE_8__ {scalar_t__ inhibit_htables; } ;
struct TYPE_11__ {TYPE_3__ roi; TYPE_1__ compression; } ;
struct TYPE_9__ {scalar_t__ width; scalar_t__ height; } ;
struct camera_data {int num_frames; TYPE_7__* buffers; TYPE_4__ params; TYPE_2__ vw; int pixelformat; int prio; } ;
struct TYPE_14__ {scalar_t__ status; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct camera_data*) ;
 int FUNC_2 (void*,struct camera_data*) ;
 int FUNC_3 (struct camera_data*,int) ;
 int FUNC_4 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_5(void *VAR_3,struct camera_data *VAR_4, struct cpia2_fh *VAR_5)
{
 struct v4l2_format *VAR_6 = VAR_3;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_2(VAR_3, VAR_4);
 if(VAR_7 != 0)
  return VAR_7;


 VAR_7 = FUNC_4(&VAR_4->prio, &VAR_5->prio, VAR_2);
 if(VAR_7 != 0) {
  return VAR_7;
 }

 VAR_4->pixelformat = VAR_6->fmt.pix.pixelformat;



 VAR_4->params.compression.inhibit_htables = 0;





 FUNC_0("Requested width = %d, height = %d\n",
     VAR_6->fmt.pix.width, VAR_6->fmt.pix.height);
 if (VAR_6->fmt.pix.width != VAR_4->vw.width ||
     VAR_6->fmt.pix.height != VAR_4->vw.height) {
  VAR_4->vw.width = VAR_6->fmt.pix.width;
  VAR_4->vw.height = VAR_6->fmt.pix.height;
  VAR_4->params.roi.width = VAR_6->fmt.pix.width;
  VAR_4->params.roi.height = VAR_6->fmt.pix.height;
  FUNC_1(VAR_4);
 }

 for (VAR_8 = 0; VAR_8 < VAR_4->num_frames; ++VAR_8) {
  if (VAR_4->buffers[VAR_8].status == VAR_1)
   if ((VAR_7 = FUNC_3(VAR_4, VAR_8)) < 0)
    return VAR_7;

  VAR_4->buffers[VAR_8].status = VAR_0;
 }

 return 0;
}
