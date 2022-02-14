
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,char) ;

__attribute__((used)) static short
  FUNC_1( char* VAR_3 )
  {
    short VAR_4, VAR_5;


    if ( VAR_3 == 0 || *VAR_3 == 0 )
      return 0;


    VAR_5 = 0;
    if ( *VAR_3 == '-' )
    {
      VAR_3++;
      VAR_5 = 1;
    }

    for ( VAR_4 = 0; FUNC_0( VAR_2, *VAR_3 ); VAR_3++ )
    {
      if ( VAR_4 < ( VAR_0 - 9 ) / 10 )
        VAR_4 = (short)( VAR_4 * 10 + VAR_1[(int)*VAR_3] );
      else
      {
        VAR_4 = VAR_0;
        break;
      }
    }

    return (short)( ( !VAR_5 ) ? VAR_4 : -VAR_4 );
  }
