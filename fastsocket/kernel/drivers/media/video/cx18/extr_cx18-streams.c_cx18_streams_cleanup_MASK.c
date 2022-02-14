
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct cx18 {scalar_t__* stream_buffers; TYPE_1__* streams; } ;
struct TYPE_3__ {struct video_device* video_dev; int * dvb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct video_device*) ;
 int FUNC_4 (struct video_device*) ;

void FUNC_5(struct cx18 *VAR_3, int VAR_4)
{
 struct video_device *VAR_5;
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {


  if (VAR_6 == VAR_1) {
   if (VAR_3->streams[VAR_6].dvb != ((void*)0)) {
    if (VAR_4)
     FUNC_0(&VAR_3->streams[VAR_6]);
    FUNC_2(VAR_3->streams[VAR_6].dvb);
    VAR_3->streams[VAR_6].dvb = ((void*)0);
    FUNC_1(&VAR_3->streams[VAR_6]);
   }
   continue;
  }


  if (VAR_6 == VAR_0) {
   if (VAR_3->stream_buffers[VAR_6] != 0) {
    VAR_3->stream_buffers[VAR_6] = 0;
    FUNC_1(&VAR_3->streams[VAR_6]);
   }
   continue;
  }


  VAR_5 = VAR_3->streams[VAR_6].video_dev;

  VAR_3->streams[VAR_6].video_dev = ((void*)0);
  if (VAR_5 == ((void*)0))
   continue;

  FUNC_1(&VAR_3->streams[VAR_6]);


  if (VAR_4)
   FUNC_4(VAR_5);
  else
   FUNC_3(VAR_5);
 }
}
