
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 void** VAR_2 ;

int FUNC_0( unsigned char *VAR_3, size_t VAR_4, size_t *VAR_5,
                   const unsigned char *VAR_6, size_t VAR_7 )
{
    size_t VAR_8, VAR_9;
    int VAR_10, VAR_11, VAR_12;
    unsigned char *VAR_13;

    if( VAR_7 == 0 )
    {
        *VAR_5 = 0;
        return( 0 );
    }

    VAR_9 = VAR_7 / 3 + ( VAR_7 % 3 != 0 );

    if( VAR_9 > ( VAR_0 - 1 ) / 4 )
    {
        *VAR_5 = VAR_0;
        return( VAR_1 );
    }

    VAR_9 *= 4;

    if( ( VAR_4 < VAR_9 + 1 ) || ( ((void*)0) == VAR_3 ) )
    {
        *VAR_5 = VAR_9 + 1;
        return( VAR_1 );
    }

    VAR_9 = ( VAR_7 / 3 ) * 3;

    for( VAR_8 = 0, VAR_13 = VAR_3; VAR_8 < VAR_9; VAR_8 += 3 )
    {
        VAR_10 = *VAR_6++;
        VAR_11 = *VAR_6++;
        VAR_12 = *VAR_6++;

        *VAR_13++ = VAR_2[(VAR_10 >> 2) & 0x3F];
        *VAR_13++ = VAR_2[(((VAR_10 & 3) << 4) + (VAR_11 >> 4)) & 0x3F];
        *VAR_13++ = VAR_2[(((VAR_11 & 15) << 2) + (VAR_12 >> 6)) & 0x3F];
        *VAR_13++ = VAR_2[VAR_12 & 0x3F];
    }

    if( VAR_8 < VAR_7 )
    {
        VAR_10 = *VAR_6++;
        VAR_11 = ( ( VAR_8 + 1 ) < VAR_7 ) ? *VAR_6++ : 0;

        *VAR_13++ = VAR_2[(VAR_10 >> 2) & 0x3F];
        *VAR_13++ = VAR_2[(((VAR_10 & 3) << 4) + (VAR_11 >> 4)) & 0x3F];

        if( ( VAR_8 + 1 ) < VAR_7 )
             *VAR_13++ = VAR_2[((VAR_11 & 15) << 2) & 0x3F];
        else *VAR_13++ = '=';

        *VAR_13++ = '=';
    }

    *VAR_5 = VAR_13 - VAR_3;
    *VAR_13 = 0;

    return( 0 );
}
