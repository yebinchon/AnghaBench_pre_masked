
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct amradio_device {struct amradio_device* buffer; int v4l2_dev; } ;


 int FUNC_0 (struct amradio_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct video_device*) ;
 struct amradio_device* FUNC_3 (struct video_device*) ;

__attribute__((used)) static void FUNC_4(struct video_device *VAR_0)
{
 struct amradio_device *VAR_1 = FUNC_3(VAR_0);


 FUNC_2(VAR_0);

 FUNC_1(&VAR_1->v4l2_dev);


 FUNC_0(VAR_1->buffer);
 FUNC_0(VAR_1);
}
