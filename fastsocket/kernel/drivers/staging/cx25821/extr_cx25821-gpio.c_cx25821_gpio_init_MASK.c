
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx25821_dev {int board; } ;



 int FUNC_0 (struct cx25821_dev*,int,int) ;
 int FUNC_1 (int) ;

void FUNC_2(struct cx25821_dev *VAR_0)
{
 if (VAR_0 == ((void*)0)) {
  return;
 }

 switch (VAR_0->board) {
 case 128:
 default:

  FUNC_0(VAR_0, 5, 1);
  FUNC_1(20);
  break;
 }

}
