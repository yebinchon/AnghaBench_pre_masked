
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0( const unsigned char *VAR_1,
                                        unsigned int VAR_2,
                                        const unsigned char **VAR_3,
                                        unsigned int *VAR_4,
                                        const unsigned char **VAR_5,
                                        unsigned int *VAR_6 )
{
    const unsigned int VAR_7 = VAR_2 / 2;
    const unsigned int VAR_8 = VAR_7 / 8;

    switch( VAR_2 )
    {
        case 256: break;
        case 512: break;
        default : return( VAR_0 );
    }

    *VAR_4 = VAR_7;
    *VAR_6 = VAR_7;
    *VAR_3 = &VAR_1[0];
    *VAR_5 = &VAR_1[VAR_8];

    return 0;
}
