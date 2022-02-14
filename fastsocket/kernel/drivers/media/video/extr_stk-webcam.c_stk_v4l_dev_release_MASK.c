
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct stk_camera {int interface; int * isobufs; int * sio_bufs; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct stk_camera*) ;
 int FUNC_2 (int ) ;
 struct stk_camera* FUNC_3 (struct video_device*) ;

__attribute__((used)) static void FUNC_4(struct video_device *VAR_0)
{
 struct stk_camera *VAR_1 = FUNC_3(VAR_0);

 if (VAR_1->sio_bufs != ((void*)0) || VAR_1->isobufs != ((void*)0))
  FUNC_0("We are leaking memory\n");
 FUNC_2(VAR_1->interface);
 FUNC_1(VAR_1);
}
