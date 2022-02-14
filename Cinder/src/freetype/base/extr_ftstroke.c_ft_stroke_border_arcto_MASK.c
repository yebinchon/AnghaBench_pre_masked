
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ FT_Vector ;
typedef int FT_StrokeBorder ;
typedef int FT_Fixed ;
typedef scalar_t__ FT_Error ;
typedef scalar_t__ FT_Angle ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static FT_Error
  FUNC_5( FT_StrokeBorder VAR_3,
                          FT_Vector* VAR_4,
                          FT_Fixed VAR_5,
                          FT_Angle VAR_6,
                          FT_Angle VAR_7 )
  {
    FT_Angle VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    FT_Vector VAR_14, VAR_15, VAR_16, VAR_17;
    FT_Fixed VAR_18;
    FT_Error VAR_19 = VAR_2;



    FUNC_3( &VAR_14, VAR_5, VAR_6 );
    VAR_14.x += VAR_4->x;
    VAR_14.y += VAR_4->y;

    VAR_8 = VAR_7;
    VAR_9 = VAR_6;
    VAR_11 = ( VAR_7 >= 0 ) ? VAR_0 : -VAR_0;

    while ( VAR_8 != 0 )
    {
      VAR_10 = VAR_8;
      if ( VAR_10 > VAR_1 )
        VAR_10 = VAR_1;

      else if ( VAR_10 < -VAR_1 )
        VAR_10 = -VAR_1;

      VAR_12 = VAR_9 + VAR_10;
      VAR_13 = VAR_10;
      if ( VAR_13 < 0 )
        VAR_13 = -VAR_13;

      VAR_13 >>= 1;


      FUNC_3( &VAR_15, VAR_5, VAR_12 );
      VAR_15.x += VAR_4->x;
      VAR_15.y += VAR_4->y;


      VAR_18 = FUNC_1( VAR_5, FUNC_2( VAR_13 ) * 4,
                          ( 0x10000L + FUNC_0( VAR_13 ) ) * 3 );

      FUNC_3( &VAR_16, VAR_18, VAR_9 + VAR_11 );
      VAR_16 += VAR_14.x;
      VAR_16 += VAR_14.y;

      FUNC_3( &VAR_17, VAR_18, VAR_12 - VAR_11 );
      VAR_17 += VAR_15.x;
      VAR_17 += VAR_15.y;


      VAR_19 = FUNC_4( VAR_3, &VAR_16, &VAR_17, &VAR_15 );
      if ( VAR_19 )
        break;


      VAR_14 = VAR_15;
      VAR_8 -= VAR_10;
      VAR_9 = VAR_12;
    }

    return VAR_19;
  }
