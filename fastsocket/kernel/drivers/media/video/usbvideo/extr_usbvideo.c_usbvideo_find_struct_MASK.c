
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvd {int uvd_used; int * dev; int lock; } ;
struct usbvideo {int num_cameras; int lock; struct uvd* cam; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct usbvideo *VAR_0)
{
 int VAR_1, VAR_2 = -1;

 if (VAR_0 == ((void*)0)) {
  FUNC_0("No usbvideo handle?");
  return -1;
 }
 FUNC_2(&VAR_0->lock);
 for (VAR_1 = 0; VAR_1 < VAR_0->num_cameras; VAR_1++) {
  struct uvd *VAR_3 = &VAR_0->cam[VAR_1];
  if (!VAR_3->uvd_used)
  {
   VAR_3->uvd_used = 1;
   FUNC_1(&VAR_3->lock);
   VAR_3->dev = ((void*)0);
   VAR_2 = VAR_1;
   break;
  }
 }
 FUNC_3(&VAR_0->lock);
 return VAR_2;
}
