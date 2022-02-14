
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(u8 VAR_4)
{
 FUNC_0(VAR_4 > 7);

 switch (VAR_4) {
 case 0:
 case 3:
  return VAR_0;
  break;
 case 1:
 case 2:
  return VAR_1;
  break;
 case 4:
 case 5:
  return VAR_2;
  break;
 case 6:
 case 7:
  return VAR_3;
  break;
 default:
  return -1;
  break;
 }
}
