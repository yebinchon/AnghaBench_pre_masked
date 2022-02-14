
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct ivtv {TYPE_1__* streams; } ;
struct TYPE_2__ {struct video_device* vdev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct video_device*) ;
 int FUNC_2 (struct video_device*) ;

void FUNC_3(struct ivtv *VAR_1, int VAR_2)
{
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct video_device *VAR_4 = VAR_1->streams[VAR_3].vdev;

  VAR_1->streams[VAR_3].vdev = ((void*)0);
  if (VAR_4 == ((void*)0))
   continue;

  FUNC_0(&VAR_1->streams[VAR_3]);

  if (VAR_2)
   FUNC_2(VAR_4);
  else
   FUNC_1(VAR_4);
 }
}
