
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;

void
FUNC_1(int VAR_4, int *VAR_5, int *VAR_6)
{
 *VAR_6 = 0;
 *VAR_5 = 0;
 switch (VAR_4) {
  case 132:
   *VAR_5 = VAR_0;
   break;
  case 131:
   *VAR_5 = VAR_0;
   *VAR_6 = 1;
   break;
  case 130:
   *VAR_5 = VAR_1;
   break;
  case 128:
   *VAR_5 = VAR_2;
   break;
  case 129:
   *VAR_5 = VAR_3;
   break;
  default:
   FUNC_0("unknown I/O policy %d", VAR_4);
   break;
 }
}
