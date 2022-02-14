
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct cx18_stream {int type; char* name; TYPE_3__* video_dev; scalar_t__ buffers; int * dvb; struct cx18* cx; } ;
struct cx18_dvb {int dummy; } ;
struct TYPE_7__ {char* name; } ;
struct cx18 {int v4l2_cap; int instance; scalar_t__* stream_buffers; TYPE_2__ v4l2_dev; TYPE_1__* card; struct cx18_stream* streams; } ;
struct TYPE_9__ {int num_offset; char* name; scalar_t__ dma; } ;
struct TYPE_8__ {int num; int tvnorms; int release; int * fops; TYPE_2__* v4l2_dev; int name; } ;
struct TYPE_6__ {int hw_all; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int VAR_3 ;
 int FUNC_1 (char*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_4__* VAR_12 ;
 int FUNC_3 (struct cx18*,int) ;
 int VAR_13 ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int,char*,char*,char*) ;
 TYPE_3__* FUNC_6 () ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_7(struct cx18 *VAR_15, int VAR_16)
{
 struct cx18_stream *VAR_17 = &VAR_15->streams[VAR_16];
 u32 VAR_18 = VAR_15->v4l2_cap;
 int VAR_19 = VAR_12[VAR_16].num_offset;
 int VAR_20 = VAR_15->instance + VAR_11 + VAR_19;
 VAR_17->video_dev = ((void*)0);
 VAR_17->dvb = ((void*)0);
 VAR_17->cx = VAR_15;
 VAR_17->type = VAR_16;
 VAR_17->name = VAR_12[VAR_16].name;


 if (VAR_16 == VAR_0 && !(VAR_18 & VAR_7))
  return 0;


 if (VAR_16 == VAR_2 &&
     !(VAR_18 & (VAR_9 | VAR_8)))
  return 0;



 if (VAR_12[VAR_16].dma != VAR_6 &&
     VAR_15->stream_buffers[VAR_16] == 0) {
  FUNC_1("Disabled %s device\n", VAR_12[VAR_16].name);
  return 0;
 }

 FUNC_3(VAR_15, VAR_16);


 if (VAR_16 == VAR_1) {
  if (VAR_15->card->hw_all & VAR_3) {
   VAR_17->dvb = FUNC_4(sizeof(struct cx18_dvb), VAR_5);
   if (VAR_17->dvb == ((void*)0)) {
    FUNC_0("Couldn't allocate cx18_dvb structure"
      " for %s\n", VAR_17->name);
    return -VAR_4;
   }
  } else {

   VAR_17->buffers = 0;
  }
 }

 if (VAR_19 == -1)
  return 0;


 VAR_17->video_dev = FUNC_6();
 if (VAR_17->video_dev == ((void*)0)) {
  FUNC_0("Couldn't allocate v4l2 video_device for %s\n",
    VAR_17->name);
  return -VAR_4;
 }

 FUNC_5(VAR_17->video_dev->name, sizeof(VAR_17->video_dev->name), "%s %s",
   VAR_15->v4l2_dev.name, VAR_17->name);

 VAR_17->video_dev->num = VAR_20;
 VAR_17->video_dev->v4l2_dev = &VAR_15->v4l2_dev;
 VAR_17->video_dev->fops = &VAR_13;
 VAR_17->video_dev->release = VAR_14;
 VAR_17->video_dev->tvnorms = VAR_10;
 FUNC_2(VAR_17->video_dev);
 return 0;
}
