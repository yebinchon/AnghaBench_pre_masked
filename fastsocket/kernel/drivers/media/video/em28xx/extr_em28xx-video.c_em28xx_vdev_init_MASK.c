
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device_shadow {int * lock; } ;
struct video_device {int name; int debug; int release; int * v4l2_dev; } ;
struct em28xx {char* name; int lock; int v4l2_dev; } ;


 int FUNC_0 (int ,int,char*,char*,char const*) ;
 int VAR_0 ;
 struct video_device* FUNC_1 () ;
 int VAR_1 ;
 struct video_device_shadow* FUNC_2 (struct video_device*) ;
 int FUNC_3 (struct video_device*,struct em28xx*) ;

__attribute__((used)) static struct video_device *FUNC_4(struct em28xx *VAR_2,
     const struct video_device *VAR_3,
     const char *VAR_4)
{
 struct video_device *VAR_5;
 struct video_device_shadow *VAR_6;

 VAR_5 = FUNC_1();
 if (((void*)0) == VAR_5)
  return ((void*)0);

 VAR_6 = FUNC_2(VAR_5);
 if (((void*)0) == VAR_6)
  return ((void*)0);

 *VAR_5 = *VAR_3;
 VAR_5->v4l2_dev = &VAR_2->v4l2_dev;
 VAR_5->release = VAR_1;
 VAR_5->debug = VAR_0;
 VAR_6->lock = &VAR_2->lock;

 FUNC_0(VAR_5->name, sizeof(VAR_5->name), "%s %s",
   VAR_2->name, VAR_4);

 FUNC_3(VAR_5, VAR_2);
 return VAR_5;
}
