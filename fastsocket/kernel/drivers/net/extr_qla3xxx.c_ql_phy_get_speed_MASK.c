
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ql3_adapter {int phyType; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ql3_adapter*,int,int*) ;

__attribute__((used)) static int FUNC_1(struct ql3_adapter *VAR_4)
{
 u16 VAR_5;

 switch(VAR_4->phyType) {
 case 128:
 {
  if (FUNC_0(VAR_4, 0x1A, &VAR_5) < 0)
   return 0;

  VAR_5 = (VAR_5 >> 8) & 3;
  break;
 }
 default:
 if (FUNC_0(VAR_4, VAR_0, &VAR_5) < 0)
  return 0;

 VAR_5 = (((VAR_5 & 0x18) >> 3) & 3);
 }

 switch(VAR_5) {
  case 2:
  return VAR_3;
  case 1:
  return VAR_2;
  case 0:
  return VAR_1;
  default:
  return -1;
 }
}
