
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

int FUNC_0( unsigned char *VAR_3, size_t VAR_4, size_t *VAR_5,
                   const unsigned char *VAR_6, size_t VAR_7 )
{
    size_t VAR_8, VAR_9;
    uint32_t VAR_10, VAR_11;
    unsigned char *VAR_12;


    for( VAR_8 = VAR_9 = VAR_10 = 0; VAR_8 < VAR_7; VAR_8++ )
    {

        VAR_11 = 0;
        while( VAR_8 < VAR_7 && VAR_6[VAR_8] == ' ' )
        {
            ++VAR_8;
            ++VAR_11;
        }


        if( VAR_8 == VAR_7 )
            break;

        if( ( VAR_7 - VAR_8 ) >= 2 &&
            VAR_6[VAR_8] == '\r' && VAR_6[VAR_8 + 1] == '\n' )
            continue;

        if( VAR_6[VAR_8] == '\n' )
            continue;


        if( VAR_11 != 0 )
            return( VAR_1 );

        if( VAR_6[VAR_8] == '=' && ++VAR_10 > 2 )
            return( VAR_1 );

        if( VAR_6[VAR_8] > 127 || VAR_2[VAR_6[VAR_8]] == 127 )
            return( VAR_1 );

        if( VAR_2[VAR_6[VAR_8]] < 64 && VAR_10 != 0 )
            return( VAR_1 );

        VAR_9++;
    }

    if( VAR_9 == 0 )
    {
        *VAR_5 = 0;
        return( 0 );
    }





    VAR_9 = ( 6 * ( VAR_9 >> 3 ) ) + ( ( 6 * ( VAR_9 & 0x7 ) + 7 ) >> 3 );
    VAR_9 -= VAR_10;

    if( VAR_3 == ((void*)0) || VAR_4 < VAR_9 )
    {
        *VAR_5 = VAR_9;
        return( VAR_0 );
    }

   for( VAR_10 = 3, VAR_9 = VAR_11 = 0, VAR_12 = VAR_3; VAR_8 > 0; VAR_8--, VAR_6++ )
   {
        if( *VAR_6 == '\r' || *VAR_6 == '\n' || *VAR_6 == ' ' )
            continue;

        VAR_10 -= ( VAR_2[*VAR_6] == 64 );
        VAR_11 = ( VAR_11 << 6 ) | ( VAR_2[*VAR_6] & 0x3F );

        if( ++VAR_9 == 4 )
        {
            VAR_9 = 0;
            if( VAR_10 > 0 ) *VAR_12++ = (unsigned char)( VAR_11 >> 16 );
            if( VAR_10 > 1 ) *VAR_12++ = (unsigned char)( VAR_11 >> 8 );
            if( VAR_10 > 2 ) *VAR_12++ = (unsigned char)( VAR_11 );
        }
    }

    *VAR_5 = VAR_12 - VAR_3;

    return( 0 );
}
