
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char len ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0( unsigned char **VAR_2, unsigned char *VAR_3, size_t VAR_4 )
{
    if( VAR_4 < 0x80 )
    {
        if( *VAR_2 - VAR_3 < 1 )
            return( VAR_0 );

        *--(*VAR_2) = (unsigned char) VAR_4;
        return( 1 );
    }

    if( VAR_4 <= 0xFF )
    {
        if( *VAR_2 - VAR_3 < 2 )
            return( VAR_0 );

        *--(*VAR_2) = (unsigned char) VAR_4;
        *--(*VAR_2) = 0x81;
        return( 2 );
    }

    if( VAR_4 <= 0xFFFF )
    {
        if( *VAR_2 - VAR_3 < 3 )
            return( VAR_0 );

        *--(*VAR_2) = ( VAR_4 ) & 0xFF;
        *--(*VAR_2) = ( VAR_4 >> 8 ) & 0xFF;
        *--(*VAR_2) = 0x82;
        return( 3 );
    }

    if( VAR_4 <= 0xFFFFFF )
    {
        if( *VAR_2 - VAR_3 < 4 )
            return( VAR_0 );

        *--(*VAR_2) = ( VAR_4 ) & 0xFF;
        *--(*VAR_2) = ( VAR_4 >> 8 ) & 0xFF;
        *--(*VAR_2) = ( VAR_4 >> 16 ) & 0xFF;
        *--(*VAR_2) = 0x83;
        return( 4 );
    }

    if( VAR_4 <= 0xFFFFFFFF )
    {
        if( *VAR_2 - VAR_3 < 5 )
            return( VAR_0 );

        *--(*VAR_2) = ( VAR_4 ) & 0xFF;
        *--(*VAR_2) = ( VAR_4 >> 8 ) & 0xFF;
        *--(*VAR_2) = ( VAR_4 >> 16 ) & 0xFF;
        *--(*VAR_2) = ( VAR_4 >> 24 ) & 0xFF;
        *--(*VAR_2) = 0x84;
        return( 5 );
    }

    return( VAR_1 );
}
