
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_0( unsigned char **VAR_2,
                  const unsigned char *VAR_3,
                  size_t *VAR_4 )
{
    if( ( VAR_3 - *VAR_2 ) < 1 )
        return( VAR_1 );

    if( ( **VAR_2 & 0x80 ) == 0 )
        *VAR_4 = *(*VAR_2)++;
    else
    {
        switch( **VAR_2 & 0x7F )
        {
        case 1:
            if( ( VAR_3 - *VAR_2 ) < 2 )
                return( VAR_1 );

            *VAR_4 = (*VAR_2)[1];
            (*VAR_2) += 2;
            break;

        case 2:
            if( ( VAR_3 - *VAR_2 ) < 3 )
                return( VAR_1 );

            *VAR_4 = ( (size_t)(*VAR_2)[1] << 8 ) | (*VAR_2)[2];
            (*VAR_2) += 3;
            break;

        case 3:
            if( ( VAR_3 - *VAR_2 ) < 4 )
                return( VAR_1 );

            *VAR_4 = ( (size_t)(*VAR_2)[1] << 16 ) |
                   ( (size_t)(*VAR_2)[2] << 8 ) | (*VAR_2)[3];
            (*VAR_2) += 4;
            break;

        case 4:
            if( ( VAR_3 - *VAR_2 ) < 5 )
                return( VAR_1 );

            *VAR_4 = ( (size_t)(*VAR_2)[1] << 24 ) | ( (size_t)(*VAR_2)[2] << 16 ) |
                   ( (size_t)(*VAR_2)[3] << 8 ) | (*VAR_2)[4];
            (*VAR_2) += 5;
            break;

        default:
            return( VAR_0 );
        }
    }

    if( *VAR_4 > (size_t) ( VAR_3 - *VAR_2 ) )
        return( VAR_1 );

    return( 0 );
}
