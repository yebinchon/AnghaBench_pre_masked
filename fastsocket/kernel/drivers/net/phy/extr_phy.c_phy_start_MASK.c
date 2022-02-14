
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int state; int lock; } ;



 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct phy_device *VAR_3)
{
 FUNC_0(&VAR_3->lock);

 switch (VAR_3->state) {
  case 128:
   VAR_3->state = VAR_0;
   break;
  case 129:
   VAR_3->state = VAR_2;
   break;
  case 130:
   VAR_3->state = VAR_1;
  default:
   break;
 }
 FUNC_1(&VAR_3->lock);
}
