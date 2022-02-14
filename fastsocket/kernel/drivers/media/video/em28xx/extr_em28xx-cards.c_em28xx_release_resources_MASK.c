
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em28xx {int devno; int udev; int v4l2_dev; scalar_t__ ir; scalar_t__ sbutton_input_dev; } ;


 int FUNC_0 (struct em28xx*) ;
 int VAR_0 ;
 int FUNC_1 (struct em28xx*) ;
 int FUNC_2 (struct em28xx*) ;
 int FUNC_3 (struct em28xx*) ;
 int FUNC_4 (struct em28xx*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct em28xx *VAR_1)
{
 if (VAR_1->sbutton_input_dev)
  FUNC_0(VAR_1);

 if (VAR_1->ir)
  FUNC_2(VAR_1);



 FUNC_3(VAR_1);

 FUNC_4(VAR_1);

 FUNC_1(VAR_1);

 FUNC_6(&VAR_1->v4l2_dev);

 FUNC_5(VAR_1->udev);


 VAR_0 &= ~(1 << VAR_1->devno);
}
