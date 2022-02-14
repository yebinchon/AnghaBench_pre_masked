
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ FT_Bool ;
typedef scalar_t__ CF2_UInt ;
typedef int CF2_Stack ;
typedef int CF2_Int ;
typedef int CF2_GlyphPath ;
typedef int CF2_Fixed ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ const VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void
  FUNC_7( CF2_Stack VAR_1,
              CF2_Fixed* VAR_2,
              CF2_Fixed* VAR_3,
              CF2_GlyphPath VAR_4,
              const FT_Bool* VAR_5,
              FT_Bool VAR_6 )
  {
    CF2_Fixed VAR_7[14];
    CF2_UInt VAR_8;
    FT_Bool VAR_9;
    CF2_Int VAR_10, VAR_11, VAR_12;


    VAR_7[0] = *VAR_2;
    VAR_7[1] = *VAR_3;
    VAR_8 = 0;
    VAR_9 = FUNC_1( VAR_5[9] == VAR_0 );
    VAR_10 = VAR_9 ? 9 : 10;

    for ( VAR_11 = 0; VAR_11 < VAR_10; VAR_11++ )
    {
      VAR_7[VAR_11 + 2] = VAR_7[VAR_11];
      if ( VAR_5[VAR_11] )
        VAR_7[VAR_11 + 2] = FUNC_0( VAR_7[VAR_11 + 2], FUNC_6( VAR_1,
                                                                 VAR_8++ ) );
    }

    if ( VAR_9 )
      VAR_7[9 + 2] = *VAR_3;

    if ( VAR_6 )
    {
      FT_Bool VAR_13 = (FT_Bool)(
                             FUNC_3( FUNC_2( VAR_7[10], *VAR_2 ) ) >
                             FUNC_3( FUNC_2( VAR_7[11], *VAR_3 ) ) );
      CF2_Fixed VAR_14 = FUNC_6( VAR_1, VAR_8 );


      if ( VAR_13 )
      {
        VAR_7[12] = FUNC_0( VAR_7[10], VAR_14 );
        VAR_7[13] = *VAR_3;
      }
      else
      {
        VAR_7[12] = *VAR_2;
        VAR_7[13] = FUNC_0( VAR_7[11], VAR_14 );
      }
    }
    else
    {
      if ( VAR_5[10] )
        VAR_7[12] = FUNC_0( VAR_7[10],
                              FUNC_6( VAR_1, VAR_8++ ) );
      else
        VAR_7[12] = *VAR_2;

      if ( VAR_5[11] )
        VAR_7[13] = FUNC_0( VAR_7[11],
                              FUNC_6( VAR_1, VAR_8 ) );
      else
        VAR_7[13] = *VAR_3;
    }

    for ( VAR_12 = 0; VAR_12 < 2; VAR_12++ )
      FUNC_4( VAR_4, VAR_7[VAR_12 * 6 + 2],
                                        VAR_7[VAR_12 * 6 + 3],
                                        VAR_7[VAR_12 * 6 + 4],
                                        VAR_7[VAR_12 * 6 + 5],
                                        VAR_7[VAR_12 * 6 + 6],
                                        VAR_7[VAR_12 * 6 + 7] );

    FUNC_5( VAR_1 );

    *VAR_2 = VAR_7[12];
    *VAR_3 = VAR_7[13];
  }
