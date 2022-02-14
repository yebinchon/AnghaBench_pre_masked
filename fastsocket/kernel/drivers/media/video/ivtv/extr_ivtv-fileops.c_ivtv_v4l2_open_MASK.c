
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct ivtv_stream {struct ivtv* itv; } ;
struct ivtv {int serialize_lock; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (struct ivtv*) ;
 int FUNC_2 (struct ivtv_stream*,struct file*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct video_device* FUNC_5 (struct file*) ;
 int FUNC_6 (struct video_device*) ;
 struct ivtv_stream* FUNC_7 (struct video_device*) ;

int FUNC_8(struct file *VAR_1)
{
 int VAR_2;
 struct ivtv *VAR_3 = ((void*)0);
 struct ivtv_stream *VAR_4 = ((void*)0);
 struct video_device *VAR_5 = FUNC_5(VAR_1);

 VAR_4 = FUNC_7(VAR_5);
 VAR_3 = VAR_4->itv;

 FUNC_3(&VAR_3->serialize_lock);
 if (FUNC_1(VAR_3)) {
  FUNC_0("Failed to initialize on device %s\n",
    FUNC_6(VAR_5));
  FUNC_4(&VAR_3->serialize_lock);
  return -VAR_0;
 }
 VAR_2 = FUNC_2(VAR_4, VAR_1);
 FUNC_4(&VAR_3->serialize_lock);
 return VAR_2;
}
