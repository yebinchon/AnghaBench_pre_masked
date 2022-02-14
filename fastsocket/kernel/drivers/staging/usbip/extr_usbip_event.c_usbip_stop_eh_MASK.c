
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbip_task {int thread_done; } ;
struct usbip_device {struct usbip_task eh; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct usbip_device *VAR_0)
{
 struct usbip_task *VAR_1 = &VAR_0->eh;

 FUNC_1(&VAR_1->thread_done);
 FUNC_0("usbip_eh has finished\n");
}
