
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ivtv_stream {int name; TYPE_2__* vdev; } ;
struct TYPE_7__ {int * kilobytes; } ;
struct ivtv {TYPE_1__ options; struct ivtv_stream* streams; } ;
struct TYPE_9__ {int vfl_type; int num_offset; } ;
struct TYPE_8__ {int num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,char const*,int ,...) ;



 TYPE_6__* VAR_2 ;
 char* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int,int) ;
 int FUNC_5 (TYPE_2__*,struct ivtv_stream*) ;

__attribute__((used)) static int FUNC_6(struct ivtv *VAR_3, int VAR_4)
{
 struct ivtv_stream *VAR_5 = &VAR_3->streams[VAR_4];
 int VAR_6 = VAR_2[VAR_4].vfl_type;
 const char *VAR_7;
 int VAR_8;

 if (VAR_5->vdev == ((void*)0))
  return 0;

 VAR_8 = VAR_5->vdev->num;

 if (VAR_4 != VAR_1) {
  struct ivtv_stream *VAR_9 = &VAR_3->streams[VAR_1];

  if (VAR_9->vdev)
   VAR_8 = VAR_9->vdev->num + VAR_2[VAR_4].num_offset;
 }
 FUNC_5(VAR_5->vdev, VAR_5);


 if (FUNC_4(VAR_5->vdev, VAR_6, VAR_8)) {
  FUNC_0("Couldn't register v4l2 device for %s (device node number %d)\n",
    VAR_5->name, VAR_8);
  FUNC_3(VAR_5->vdev);
  VAR_5->vdev = ((void*)0);
  return -VAR_0;
 }
 VAR_7 = FUNC_2(VAR_5->vdev);

 switch (VAR_6) {
 case 130:
  FUNC_1("Registered device %s for %s (%d kB)\n",
   VAR_7, VAR_5->name, VAR_3->options.kilobytes[VAR_4]);
  break;
 case 129:
  FUNC_1("Registered device %s for %s\n",
   VAR_7, VAR_5->name);
  break;
 case 128:
  if (VAR_3->options.kilobytes[VAR_4])
   FUNC_1("Registered device %s for %s (%d kB)\n",
    VAR_7, VAR_5->name, VAR_3->options.kilobytes[VAR_4]);
  else
   FUNC_1("Registered device %s for %s\n",
    VAR_7, VAR_5->name);
  break;
 }
 return 0;
}
