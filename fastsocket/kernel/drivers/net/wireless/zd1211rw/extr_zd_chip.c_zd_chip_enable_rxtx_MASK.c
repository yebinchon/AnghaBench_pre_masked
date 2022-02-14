
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_chip {int mutex; int usb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct zd_chip *VAR_0)
{
 int VAR_1;

 FUNC_0(&VAR_0->mutex);
 FUNC_4(&VAR_0->usb);
 VAR_1 = FUNC_3(&VAR_0->usb);
 FUNC_2(&VAR_0->usb);
 FUNC_1(&VAR_0->mutex);
 return VAR_1;
}
