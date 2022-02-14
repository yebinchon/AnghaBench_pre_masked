
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int FUNC_0 (char*,int) ;

int
FUNC_1(int VAR_5, int VAR_6)
{
 if (VAR_6 == 1) {
  switch (VAR_5) {
   case 131:
    return VAR_1;
   default:
    FUNC_0("unknown passive tier %d", VAR_5);
    return VAR_0;
  }
 } else {
  switch (VAR_5) {
   case 132:
   case 131:
    return VAR_0;
   case 130:
    return VAR_2;
   case 129:
    return VAR_4;
   case 128:
    return VAR_3;
   default:
    FUNC_0("unknown tier %d", VAR_5);
    return VAR_0;
  }
 }
}
