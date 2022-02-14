
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {struct block_device* bd_contains; } ;


 int VAR_0 ;
int FUNC_0(struct block_device *VAR_1, unsigned int VAR_2)
{
 if (VAR_1 && VAR_1 == VAR_1->bd_contains)
  return 0;




 switch (VAR_2) {
 case 136:
 case 137:
 case 135:
 case 134:
 case 130:
 case 128:
 case 131:
 case 132:
 case 129:
 case 133:
  return 0;
 default:
  break;
 }

 return -VAR_0;
}
