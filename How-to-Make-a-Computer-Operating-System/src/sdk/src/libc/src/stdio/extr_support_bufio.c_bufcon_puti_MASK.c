
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned int) ;

char* FUNC_1( char *VAR_0, int VAR_1 )
{
  unsigned int VAR_2;
  unsigned int VAR_3;
  unsigned int VAR_4;
  unsigned int VAR_5;

  if ( VAR_1 < 0 )
  {
    FUNC_0( VAR_0, '-' );
    VAR_3 = -VAR_1;
  }
  else VAR_3 = VAR_1;

  VAR_2 = 1000000000;
  VAR_5 = 0;

  while (VAR_2 > 0)
  {
    VAR_4 = VAR_3 % VAR_2;
      VAR_3 = VAR_3 / VAR_2;

    if ( VAR_3 != 0 ) VAR_5 = 1;
    if ( VAR_5 != 0 ) FUNC_0( VAR_0, VAR_3 + '0' );

    VAR_2 = VAR_2 / 10;
    VAR_3 = VAR_4;
  }

  if ( VAR_5 == 0 ) FUNC_0( VAR_0, VAR_3 + '0' );

  return VAR_0;
}
