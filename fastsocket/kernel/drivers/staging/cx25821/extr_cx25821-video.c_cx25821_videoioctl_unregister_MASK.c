
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cx25821_dev {TYPE_1__* ioctl_dev; } ;
struct TYPE_3__ {int minor; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(struct cx25821_dev *VAR_0)
{
 if (VAR_0->ioctl_dev) {
  if (VAR_0->ioctl_dev->minor != -1)
   FUNC_1(VAR_0->ioctl_dev);
  else
   FUNC_0(VAR_0->ioctl_dev);

  VAR_0->ioctl_dev = ((void*)0);
 }
}
