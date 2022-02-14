
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ) ;
 int VAR_0 ;

void FUNC_1( unsigned int VAR_1, char VAR_2 )
{
  char VAR_3[ 128 ];
  int VAR_4 = 126;
  unsigned int VAR_5 = VAR_1;
  int VAR_6;


  if ( VAR_1 == 0 )
  {
 FUNC_0("0",VAR_0);
 return;
  }

  VAR_3[127] = 0;


  while ( VAR_5 > 0 )
  {
 VAR_6 = VAR_5 % 16;
 if ( VAR_6 < 10 ) VAR_3[ VAR_4-- ] = '0' + VAR_6;
    else VAR_3[ VAR_4-- ] = VAR_2 - 10 + VAR_6;
 VAR_5 = VAR_5 / 16;
  }


    FUNC_0(VAR_3 + VAR_4 + 1 ,VAR_0);

}
