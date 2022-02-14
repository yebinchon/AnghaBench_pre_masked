
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfar_private {TYPE_1__* phydev; } ;
struct TYPE_2__ {int speed; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;




__attribute__((used)) static unsigned int FUNC_0(struct gfar_private *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5;


 switch (VAR_3->phydev->speed) {
 case 128:
  VAR_5 = VAR_2;
  break;
 case 129:
  VAR_5 = VAR_0;
  break;
 case 130:
 default:
  VAR_5 = VAR_1;
  break;
 }



 return ((VAR_4 * 1000 + VAR_5 - 1) / VAR_5);
}
