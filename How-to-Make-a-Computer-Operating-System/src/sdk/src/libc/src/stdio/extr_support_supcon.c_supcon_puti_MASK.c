
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ) ;
 int VAR_0 ;

void FUNC_1( int VAR_1 )
{
  int VAR_2;
  int VAR_3;
  char VAR_4[ 128 ];
  int VAR_5 = 126;


  if ( VAR_1 == 0 )
  {
 FUNC_0("0",VAR_0);
 return;
  }



  if ( VAR_1 < 0 )
  {
 VAR_2 = 1;
 VAR_3 = -VAR_1;
  }
  else
  {
 VAR_2 = 0;
 VAR_3 = VAR_1;
  }


  VAR_4[127] = 0;


  while ( VAR_3 > 0 )
  {
 VAR_4[ VAR_5-- ] = '0' + (VAR_3 % 10);
 VAR_3 = VAR_3 / 10;
  }

  if ( VAR_2 == 1 ) VAR_4[ VAR_5-- ] = '-';


  FUNC_0(VAR_4 + VAR_5 + 1 ,VAR_0);
}
