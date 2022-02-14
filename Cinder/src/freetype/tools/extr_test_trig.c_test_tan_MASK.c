
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double FT_Fixed ;


 int VAR_0 ;
 double FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (double) ;
 int VAR_3 ;
 int FUNC_2 (char*,int,double,int,double) ;
 double FUNC_3 (int) ;

__attribute__((used)) static void
  FUNC_4( void )
  {
    int VAR_4;


    for ( VAR_4 = 0; VAR_4 < VAR_0 - 0x2000000L; VAR_4 += 0x10000L )
    {
      FT_Fixed VAR_5, VAR_6;
      double VAR_7;


      VAR_5 = FUNC_0(VAR_4);
      VAR_7 = FUNC_3( VAR_4*VAR_1 );
      VAR_6 = (FT_Fixed)(VAR_7*65536.0);

      if ( FUNC_1( VAR_6-VAR_5 ) > VAR_2 )
      {
        VAR_3 = 1;
        FUNC_2( "FT_Tan[%3d] = %.7f  tan[%3d] = %.7f\n",
                (VAR_4 >> 16), VAR_5/65536.0, (VAR_4 >> 16), VAR_7 );
      }
    }
  }
