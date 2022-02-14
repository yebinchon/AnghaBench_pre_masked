
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char const*,size_t) ;

__attribute__((used)) static void FUNC_1( unsigned char *VAR_0, size_t VAR_1,
                                const unsigned char *VAR_2, size_t VAR_3 )
{
    unsigned char *VAR_4 = VAR_0;
    size_t VAR_5;

    while( VAR_1 > 0 )
    {
        VAR_5 = ( VAR_1 > VAR_3 ) ? VAR_3 : VAR_1;
        FUNC_0( VAR_4, VAR_2, VAR_5 );
        VAR_4 += VAR_5;
        VAR_1 -= VAR_5;
    }
}
