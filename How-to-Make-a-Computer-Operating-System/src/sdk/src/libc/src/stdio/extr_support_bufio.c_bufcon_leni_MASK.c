
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(int VAR_0)
{
  int VAR_1;
  int VAR_2;

      if ( VAR_0 < 0 )
      {
        VAR_1 = -VAR_0;
       VAR_2 = 1;
      }
      else
      {
        VAR_1 = VAR_0;
       VAR_2 = 0;
      }

 if ( VAR_1 < 10 ) return VAR_2 + 1;
 if ( VAR_1 < 100 ) return VAR_2 + 2;
 if ( VAR_1 < 1000 ) return VAR_2 + 3;
 if ( VAR_1 < 10000 ) return VAR_2 + 4;
 if ( VAR_1 < 100000 ) return VAR_2 + 5;
 if ( VAR_1 < 1000000 ) return VAR_2 + 6;
 if ( VAR_1 < 10000000 ) return VAR_2 + 7;
 if ( VAR_1 < 100000000 ) return VAR_2 + 8;
 if ( VAR_1 < 1000000000 ) return VAR_2 + 9;

  return 10;
}
