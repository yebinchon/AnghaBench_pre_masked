
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx231xx {int devno; int udev; } ;


 int FUNC_0 (struct cx231xx*) ;
 int VAR_0 ;
 int FUNC_1 (struct cx231xx*) ;
 int FUNC_2 (struct cx231xx*) ;
 int FUNC_3 (struct cx231xx*) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct cx231xx *VAR_1)
{
 FUNC_2(VAR_1);

 FUNC_3(VAR_1);


 FUNC_0(VAR_1);

 FUNC_1(VAR_1);

 FUNC_4(VAR_1->udev);


 VAR_0 &= ~(1 << VAR_1->devno);
}
