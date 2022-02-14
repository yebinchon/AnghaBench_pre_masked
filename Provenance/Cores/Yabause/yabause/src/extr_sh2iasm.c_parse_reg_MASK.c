
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char const) ;

int FUNC_1 (const char *VAR_8, int *VAR_9, int *VAR_10)



{




  if (VAR_8[0] == 'r')
    {
      if (VAR_8[1] == '1')
 {
   if (VAR_8[2] >= '0' && VAR_8[2] <= '5' && ! FUNC_0 (VAR_8[3]))
     {
       *VAR_9 = VAR_5;
       *VAR_10 = 10 + VAR_8[2] - '0';
       return 3;
     }
 }
      if (VAR_8[1] >= '0' && VAR_8[1] <= '9' && ! FUNC_0 (VAR_8[2]))
 {
   *VAR_9 = VAR_5;
   *VAR_10 = (VAR_8[1] - '0');
   return 2;
 }
    }

  if (VAR_8[0] == 's' && VAR_8[1] == 'r' && ! FUNC_0 (VAR_8[2]))
    {
      *VAR_9 = VAR_6;
      return 2;
    }

  if (VAR_8[0] == 's' && VAR_8[1] == 'p' && ! FUNC_0 (VAR_8[2]))
    {
      *VAR_9 = VAR_5;
      *VAR_10 = 15;
      return 2;
    }

  if (VAR_8[0] == 'p' && VAR_8[1] == 'r' && ! FUNC_0 (VAR_8[2]))
    {
      *VAR_9 = VAR_4;
      return 2;
    }
  if (VAR_8[0] == 'p' && VAR_8[1] == 'c' && ! FUNC_0 (VAR_8[2]))
    {
      *VAR_9 = VAR_0;
      return 2;
    }
  if (VAR_8[0] == 'g' && VAR_8[1] == 'b' && VAR_8[2] == 'r' && ! FUNC_0 (VAR_8[3]))
    {
      *VAR_9 = VAR_1;
      return 3;
    }
  if (VAR_8[0] == 'v' && VAR_8[1] == 'b' && VAR_8[2] == 'r' && ! FUNC_0 (VAR_8[3]))
    {
      *VAR_9 = VAR_7;
      return 3;
    }

  if (VAR_8[0] == 'm' && VAR_8[1] == 'a' && VAR_8[2] == 'c' && ! FUNC_0 (VAR_8[4]))
    {
      if (VAR_8[3] == 'l')
 {
   *VAR_9 = VAR_3;
   return 4;
 }
      if (VAR_8[3] == 'h')
 {
   *VAR_9 = VAR_2;
   return 4;
 }
    }

  return 0;
}
