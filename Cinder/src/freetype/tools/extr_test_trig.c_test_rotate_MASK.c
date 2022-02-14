
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double x; double y; } ;
typedef TYPE_1__ FT_Vector ;
typedef double FT_Fixed ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (double) ;
 double FUNC_2 (double) ;
 int VAR_3 ;
 int FUNC_3 (char*,double,double,double,double,double,double,double) ;
 double FUNC_4 (double) ;

__attribute__((used)) static void
  FUNC_5( void )
  {
    int VAR_4;


    for ( VAR_4 = 0; VAR_4 < VAR_0; VAR_4 += 0x10000L )
    {
      double VAR_5, VAR_6, VAR_7;
      int VAR_8;


      VAR_5 = VAR_4*VAR_1;
      VAR_6 = FUNC_2( VAR_5 );
      VAR_7 = FUNC_4( VAR_5 );

      for ( VAR_8 = 0; VAR_8 < VAR_0; VAR_8 += 0x10000L )
      {
        FT_Fixed VAR_9, VAR_10, VAR_11, VAR_12;
        FT_Vector VAR_13;
        double VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;


        VAR_14 = 500.0;
        VAR_15 = VAR_8*VAR_1;

        VAR_16 = VAR_14 * FUNC_2(VAR_15);
        VAR_17 = VAR_14 * FUNC_4(VAR_15);

        VAR_13.x = VAR_9 = (FT_Fixed)(VAR_16*65536.0);
        VAR_13.y = VAR_10 = (FT_Fixed)(VAR_17*65536.0);

        FUNC_0( &VAR_13, VAR_4 );

        VAR_18 = VAR_16 * VAR_6 - VAR_17 * VAR_7;
        VAR_19 = VAR_16 * VAR_7 + VAR_17 * VAR_6;

        VAR_11 = (FT_Fixed)(VAR_18*65536.0);
        VAR_12 = (FT_Fixed)(VAR_19*65536.0);

        if ( FUNC_1( VAR_11 - VAR_13.x ) > VAR_2 ||
             FUNC_1( VAR_12 - VAR_13.y ) > VAR_2 )
        {
          VAR_3 = 1;
          FUNC_3( "FT_Rotate( (%.7f,%.7f), %.5f ) = ( %.7f, %.7f ), rot = ( %.7f, %.7f )\n",
                  VAR_16, VAR_17, VAR_5,
                  VAR_9/65536.0, VAR_10/65536.0,
                  VAR_11/65536.0, VAR_12/65536.0 );
        }
      }
    }
  }
