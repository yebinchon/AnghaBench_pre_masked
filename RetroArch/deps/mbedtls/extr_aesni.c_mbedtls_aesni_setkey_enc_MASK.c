
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char const*) ;
 int FUNC_1 (unsigned char*,unsigned char const*) ;
 int FUNC_2 (unsigned char*,unsigned char const*) ;

int FUNC_3( unsigned char *VAR_1,
                      const unsigned char *VAR_2,
                      size_t VAR_3 )
{
    switch( VAR_3 )
    {
        case 128: FUNC_0( VAR_1, VAR_2 ); break;
        case 192: FUNC_1( VAR_1, VAR_2 ); break;
        case 256: FUNC_2( VAR_1, VAR_2 ); break;
        default : return( VAR_0 );
    }

    return( 0 );
}
