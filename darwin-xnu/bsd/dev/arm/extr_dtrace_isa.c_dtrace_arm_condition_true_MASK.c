
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_0(int VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 int VAR_7 = (VAR_5 & VAR_3) ? 1 : 0,
     VAR_8 = (VAR_5 & VAR_1) ? 1 : 0,
     VAR_9 = (VAR_5 & VAR_0) ? 1 : 0,
     VAR_10 = (VAR_5 & VAR_2) ? 1 : 0;

 switch(VAR_4) {
  case 0: VAR_6 = VAR_7; break;
  case 1: VAR_6 = !VAR_7; break;
  case 2: VAR_6 = VAR_9; break;
  case 3: VAR_6 = !VAR_9; break;
  case 4: VAR_6 = VAR_8; break;
  case 5: VAR_6 = !VAR_8; break;
  case 6: VAR_6 = VAR_10; break;
  case 7: VAR_6 = !VAR_10; break;
  case 8: VAR_6 = (VAR_9 && !VAR_7); break;
  case 9: VAR_6 = (!VAR_9 || VAR_7); break;
  case 10: VAR_6 = (VAR_8 == VAR_10); break;
  case 11: VAR_6 = (VAR_8 != VAR_10); break;
  case 12: VAR_6 = (!VAR_7 && (VAR_8 == VAR_10)); break;
  case 13: VAR_6 = (VAR_7 || (VAR_8 != VAR_10)); break;
  case 14: VAR_6 = 1; break;
  case 15: VAR_6 = 1; break;
 }

 return VAR_6;
}
