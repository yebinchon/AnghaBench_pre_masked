
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ) ;
 int VAR_0 ;

void FUNC_1( unsigned int VAR_1 )
{
  char VAR_2[ 128 ];
  int VAR_3 = 126;
  unsigned int VAR_4 = VAR_1;


  if ( VAR_1 == 0 )
  {
   FUNC_0("0",VAR_0);
 return;
  }

  VAR_2[127] = 0;


  while ( VAR_4 > 0 )
  {
 VAR_2[ VAR_3-- ] = '0' + (VAR_4 % 10);
 VAR_4 = VAR_4 / 10;
  }


  FUNC_0(VAR_2 + VAR_3 + 1 ,VAR_0);
}
