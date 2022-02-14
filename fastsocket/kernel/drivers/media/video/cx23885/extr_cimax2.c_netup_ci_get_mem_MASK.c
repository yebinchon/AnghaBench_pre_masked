
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx23885_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_2 (int) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int) ;

int FUNC_5(struct cx23885_dev *VAR_4)
{
 int VAR_5;
 unsigned long VAR_6 = VAR_3 + FUNC_2(1);

 for (;;) {
  VAR_5 = FUNC_0(VAR_0);
  if ((VAR_5 & VAR_1) == 0)
   break;
  if (FUNC_3(VAR_3, VAR_6))
   break;
  FUNC_4(1);
 }

 FUNC_1(VAR_0, VAR_2);

 return VAR_5 & 0xff;
}
