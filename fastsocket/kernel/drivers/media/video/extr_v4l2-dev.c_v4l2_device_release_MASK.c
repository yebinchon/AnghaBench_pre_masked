
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {size_t minor; int (* release ) (struct video_device*) ;int * cdev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct video_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct video_device*) ;
 struct video_device* FUNC_6 (struct device*) ;
 struct video_device** VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(struct device *VAR_2)
{
 struct video_device *VAR_3 = FUNC_6(VAR_2);

 FUNC_3(&VAR_1);
 if (VAR_0[VAR_3->minor] != VAR_3) {
  FUNC_4(&VAR_1);

  FUNC_0(1);
  return;
 }


 VAR_0[VAR_3->minor] = ((void*)0);


 FUNC_1(VAR_3->cdev);


 VAR_3->cdev = ((void*)0);


 FUNC_2(VAR_3);

 FUNC_4(&VAR_1);



 VAR_3->release(VAR_3);
}
