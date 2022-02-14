
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flexcop_device {int rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct flexcop_device*,int ) ;

int FUNC_1(struct flexcop_device *VAR_3)
{
 switch (VAR_3->rev) {
 case 130:
 case 129:
  FUNC_0(VAR_3, VAR_1);
  break;
 case 128:
  FUNC_0(VAR_3, VAR_2);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
