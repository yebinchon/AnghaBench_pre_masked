
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct video_device_shadow {int ctrl_handler; } ;
struct ivtv_stream {int type; char* name; TYPE_3__* vdev; struct ivtv* itv; } ;
struct TYPE_9__ {char* name; int ctrl_handler; } ;
struct TYPE_8__ {scalar_t__* kilobytes; } ;
struct ivtv {int instance; int v4l2_cap; TYPE_2__ v4l2_dev; TYPE_1__ options; struct ivtv_stream* streams; } ;
struct TYPE_11__ {int num_offset; char* name; scalar_t__ dma; int fops; } ;
struct TYPE_10__ {int num; int tvnorms; int (* release ) (TYPE_3__*) ;int fops; TYPE_2__* v4l2_dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_6__* VAR_8 ;
 int FUNC_3 (struct ivtv*,int) ;
 int FUNC_4 (int ,int,char*,char*,char*) ;
 TYPE_3__* FUNC_5 () ;
 int FUNC_6 (TYPE_3__*) ;
 struct video_device_shadow* FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_8(struct ivtv *VAR_9, int VAR_10)
{
 struct ivtv_stream *VAR_11 = &VAR_9->streams[VAR_10];
 int VAR_12 = VAR_8[VAR_10].num_offset;
 int VAR_13 = VAR_9->instance + VAR_7 + VAR_12;
 struct video_device_shadow *VAR_14;




 VAR_11->vdev = ((void*)0);
 VAR_11->itv = VAR_9;
 VAR_11->type = VAR_10;
 VAR_11->name = VAR_8[VAR_10].name;


 if (VAR_10 == VAR_2 && !(VAR_9->v4l2_cap & VAR_4))
  return 0;
 if (VAR_10 >= VAR_1 && !(VAR_9->v4l2_cap & VAR_5))
  return 0;



 if (VAR_8[VAR_10].dma != VAR_3 &&
     VAR_9->options.kilobytes[VAR_10] == 0) {
  FUNC_1("Disabled %s device\n", VAR_8[VAR_10].name);
  return 0;
 }

 FUNC_3(VAR_9, VAR_10);


 VAR_11->vdev = FUNC_5();
 if (VAR_11->vdev == ((void*)0)) {
  FUNC_0("Couldn't allocate v4l2 video_device for %s\n", VAR_11->name);
  return -VAR_0;
 }
 VAR_14 = FUNC_7(VAR_11->vdev);
 if (VAR_14 == ((void*)0)) {
  FUNC_0("Couldn't allocate v4l2 video_device_shadow for %s\n", VAR_11->name);
  FUNC_6(VAR_11->vdev);
  return -VAR_0;
 }

 FUNC_4(VAR_11->vdev->name, sizeof(VAR_11->vdev->name), "%s %s",
   VAR_9->v4l2_dev.name, VAR_11->name);

 VAR_11->vdev->num = VAR_13;
 VAR_11->vdev->v4l2_dev = &VAR_9->v4l2_dev;
 VAR_14->ctrl_handler = VAR_9->v4l2_dev.ctrl_handler;
 VAR_11->vdev->fops = VAR_8[VAR_10].fops;
 VAR_11->vdev->release = FUNC_6;
 VAR_11->vdev->tvnorms = VAR_6;
 FUNC_2(VAR_11->vdev);
 return 0;
}
