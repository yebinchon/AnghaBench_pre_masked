
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FT_ULong ;
typedef int FT_UInt ;
typedef int FT_Long ;
typedef int FT_Int ;
typedef int FT_Fixed ;
typedef int FT_Byte ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 int* VAR_0 ;

__attribute__((used)) static FT_Fixed
  FUNC_3( FT_Byte* VAR_1,
                  FT_Byte* VAR_2,
                  FT_Long VAR_3,
                  FT_Long* VAR_4 )
  {
    FT_Byte* VAR_5 = VAR_1;
    FT_Int VAR_6;
    FT_UInt VAR_7;

    FT_Long VAR_8, VAR_9, VAR_10;
    FT_Int VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;
    FT_Long VAR_14, VAR_15, VAR_16;


    if ( VAR_4 )
      *VAR_4 = 0;

    VAR_8 = 0;

    VAR_9 = 0;
    VAR_10 = 0;

    VAR_14 = 0;
    VAR_15 = 0;
    VAR_16 = 0;


    VAR_7 = 4;

    for (;;)
    {


      if ( VAR_7 )
      {
        VAR_5++;


        if ( VAR_5 >= VAR_2 )
          goto Bad;
      }


      VAR_6 = (FT_Int)( VAR_5[0] >> VAR_7 ) & 0xF;
      VAR_7 = 4 - VAR_7;

      if ( VAR_6 == 0xE )
        VAR_11 = 1;
      else if ( VAR_6 > 9 )
        break;
      else
      {

        if ( VAR_9 >= 0xCCCCCCCL )
          VAR_14++;

        else if ( VAR_6 || VAR_9 )
        {
          VAR_15++;
          VAR_9 = VAR_9 * 10 + VAR_6;
        }
      }
    }


    if ( VAR_6 == 0xA )
      for (;;)
      {


        if ( VAR_7 )
        {
          VAR_5++;


          if ( VAR_5 >= VAR_2 )
            goto Bad;
        }


        VAR_6 = ( VAR_5[0] >> VAR_7 ) & 0xF;
        VAR_7 = 4 - VAR_7;
        if ( VAR_6 >= 10 )
          break;


        if ( !VAR_6 && !VAR_9 )
          VAR_14--;

        else if ( VAR_9 < 0xCCCCCCCL && VAR_16 < 9 )
        {
          VAR_16++;
          VAR_9 = VAR_9 * 10 + VAR_6;
        }
      }


    if ( VAR_6 == 12 )
    {
      VAR_12 = 1;
      VAR_6 = 11;
    }

    if ( VAR_6 == 11 )
    {
      for (;;)
      {


        if ( VAR_7 )
        {
          VAR_5++;


          if ( VAR_5 >= VAR_2 )
            goto Bad;
        }


        VAR_6 = ( VAR_5[0] >> VAR_7 ) & 0xF;
        VAR_7 = 4 - VAR_7;
        if ( VAR_6 >= 10 )
          break;


        if ( VAR_10 > 1000 )
          VAR_13 = 1;
        else
          VAR_10 = VAR_10 * 10 + VAR_6;
      }

      if ( VAR_12 )
        VAR_10 = -VAR_10;
    }

    if ( !VAR_9 )
      goto Exit;

    if ( VAR_13 )
    {
      if ( VAR_12 )
        goto Underflow;
      else
        goto Overflow;
    }


    VAR_10 += VAR_3 + VAR_14;

    if ( VAR_4 )
    {

      VAR_16 += VAR_15;
      VAR_10 += VAR_15;

      if ( VAR_16 <= 5 )
      {
        if ( VAR_9 > 0x7FFFL )
        {
          VAR_8 = FUNC_0( VAR_9, 10 );
          *VAR_4 = VAR_10 - VAR_16 + 1;
        }
        else
        {
          if ( VAR_10 > 0 )
          {
            FT_Long VAR_17, VAR_18;



            VAR_17 = FUNC_1( VAR_10, 5 );
            VAR_18 = VAR_17 - VAR_16;

            if ( VAR_18 > 0 )
            {
              VAR_10 -= VAR_17;
              VAR_9 *= VAR_0[VAR_18];
              if ( VAR_9 > 0x7FFFL )
              {
                VAR_9 /= 10;
                VAR_10 += 1;
              }
            }
            else
              VAR_10 -= VAR_16;
          }
          else
            VAR_10 -= VAR_16;

          VAR_8 = (FT_Long)( (FT_ULong)VAR_9 << 16 );
          *VAR_4 = VAR_10;
        }
      }
      else
      {
        if ( ( VAR_9 / VAR_0[VAR_16 - 5] ) > 0x7FFFL )
        {
          VAR_8 = FUNC_0( VAR_9, VAR_0[VAR_16 - 4] );
          *VAR_4 = VAR_10 - 4;
        }
        else
        {
          VAR_8 = FUNC_0( VAR_9, VAR_0[VAR_16 - 5] );
          *VAR_4 = VAR_10 - 5;
        }
      }
    }
    else
    {
      VAR_15 += VAR_10;
      VAR_16 -= VAR_10;

      if ( VAR_15 > 5 )
        goto Overflow;
      if ( VAR_15 < -5 )
        goto Underflow;


      if ( VAR_15 < 0 )
      {
        VAR_9 /= VAR_0[-VAR_15];
        VAR_16 += VAR_15;
      }


      if ( VAR_16 == 10 )
      {
        VAR_9 /= 10;
        VAR_16 -= 1;
      }


      if ( VAR_16 > 0 )
      {
        if ( ( VAR_9 / VAR_0[VAR_16] ) > 0x7FFFL )
          goto Exit;

        VAR_8 = FUNC_0( VAR_9, VAR_0[VAR_16] );
      }
      else
      {
        VAR_9 *= VAR_0[-VAR_16];

        if ( VAR_9 > 0x7FFFL )
          goto Overflow;

        VAR_8 = (FT_Long)( (FT_ULong)VAR_9 << 16 );
      }
    }

  Exit:
    if ( VAR_11 )
      VAR_8 = -VAR_8;

    return VAR_8;

  Overflow:
    VAR_8 = 0x7FFFFFFFL;
    FUNC_2(( "!!!OVERFLOW:!!!" ));
    goto Exit;

  Underflow:
    VAR_8 = 0;
    FUNC_2(( "!!!UNDERFLOW:!!!" ));
    goto Exit;

  Bad:
    VAR_8 = 0;
    FUNC_2(( "!!!END OF DATA:!!!" ));
    goto Exit;
  }
