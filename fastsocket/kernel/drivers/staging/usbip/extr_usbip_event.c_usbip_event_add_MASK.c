
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbip_device {unsigned long event; int lock; int eh_waitq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct usbip_device *VAR_0, unsigned long VAR_1)
{
 FUNC_0(&VAR_0->lock);

 VAR_0->event |= VAR_1;

 FUNC_2(&VAR_0->eh_waitq);

 FUNC_1(&VAR_0->lock);
}
