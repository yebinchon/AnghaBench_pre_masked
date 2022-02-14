
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_device {int * int_urb; int users; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

int FUNC_2(struct uvc_device *VAR_1)
{
 if (VAR_1->int_urb == ((void*)0) || FUNC_0(&VAR_1->users) == 0)
  return 0;

 return FUNC_1(VAR_1->int_urb, VAR_0);
}
