
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* FT_ULong ;
typedef int FT_UInt ;
typedef int FT_Long ;
typedef int FT_Byte ;
typedef scalar_t__ FT_Bool ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_3 (int*) ;
 void* FUNC_4 (int*) ;
 void* FUNC_5 (int*) ;

__attribute__((used)) static void
  FUNC_6( FT_Byte* VAR_5,
                          FT_Byte* VAR_6,
                          FT_UInt VAR_7,
                          FT_UInt* VAR_8,
                          FT_UInt VAR_9,
                          FT_ULong* VAR_10,
                          FT_ULong* VAR_11 )
  {
    FT_UInt VAR_12, VAR_13, VAR_14;
    FT_Bool VAR_15 = FUNC_0( *VAR_8 & VAR_0 );
    FT_Byte* VAR_16;


    VAR_14 = 4;
    if ( VAR_15 )
      VAR_14 += 1;
    if ( *VAR_8 & VAR_1 )
      VAR_14 += 1;
    if ( *VAR_8 & VAR_2 )
      VAR_14 += 1;

    if ( !( *VAR_8 & VAR_3 ) )
    {
      FT_Byte* VAR_17;
      FT_Byte* VAR_18;
      FT_UInt VAR_19;
      FT_Long VAR_20;


      *VAR_8 |= VAR_4;
      VAR_20 = -1;
      VAR_18 = VAR_5 + VAR_7 * VAR_14;

      if ( VAR_18 > VAR_6 )
      {
        FUNC_2(( "pfr_lookup_bitmap_data:"
                    " number of bitmap records too large,\n"
                    "                       "
                    " thus ignoring all bitmaps in this strike\n" ));
        *VAR_8 &= ~VAR_4;
      }
      else
      {

        for ( VAR_17 = VAR_5; VAR_17 < VAR_18; VAR_17 += VAR_14 )
        {
          if ( VAR_15 )
            VAR_19 = FUNC_1( VAR_17 );
          else
            VAR_19 = *VAR_17;

          if ( (FT_Long)VAR_19 <= VAR_20 )
          {
            FUNC_2(( "pfr_lookup_bitmap_data:"
                        " bitmap records are not sorted,\n"
                        "                       "
                        " thus ignoring all bitmaps in this strike\n" ));
            *VAR_8 &= ~VAR_4;
            break;
          }

          VAR_20 = VAR_19;
        }
      }

      *VAR_8 |= VAR_3;
    }



    if ( !( *VAR_8 & VAR_4 ) )
      goto Fail;

    VAR_12 = 0;
    VAR_13 = VAR_7;


    while ( VAR_12 < VAR_13 )
    {
      FT_UInt VAR_21, VAR_22;


      VAR_21 = ( VAR_12 + VAR_13 ) >> 1;
      VAR_16 = VAR_5 + VAR_21 * VAR_14;

      if ( VAR_15 )
        VAR_22 = FUNC_5( VAR_16 );
      else
        VAR_22 = FUNC_3( VAR_16 );

      if ( VAR_9 < VAR_22 )
        VAR_13 = VAR_21;
      else if ( VAR_9 > VAR_22 )
        VAR_12 = VAR_21 + 1;
      else
        goto Found_It;
    }

  Fail:

    *VAR_11 = 0;
    *VAR_10 = 0;
    return;

  Found_It:
    if ( *VAR_8 & VAR_1 )
      *VAR_11 = FUNC_5( VAR_16 );
    else
      *VAR_11 = FUNC_3( VAR_16 );

    if ( *VAR_8 & VAR_2 )
      *VAR_10 = FUNC_4( VAR_16 );
    else
      *VAR_10 = FUNC_5( VAR_16 );
  }
