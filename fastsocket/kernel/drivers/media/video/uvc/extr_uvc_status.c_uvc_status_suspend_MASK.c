
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_device {int int_urb; int users; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct uvc_device *VAR_0)
{
 if (FUNC_0(&VAR_0->users))
  FUNC_1(VAR_0->int_urb);

 return 0;
}
