
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned char**,unsigned char*,size_t) ;
 int FUNC_2 (unsigned char**,unsigned char*,unsigned char const*,size_t) ;
 int FUNC_3 (unsigned char**,unsigned char*,int ) ;

__attribute__((used)) static int FUNC_4( unsigned char **VAR_2, unsigned char *VAR_3,
                            const char *VAR_4, size_t VAR_5 )
{
    int VAR_6;
    size_t VAR_7 = 0;




    if( VAR_4[0] == '2' && VAR_4[1] == '0' && VAR_4 [2] < '5' )
    {
        FUNC_0( VAR_7, FUNC_2( VAR_2, VAR_3,
                                             (const unsigned char *) VAR_4 + 2,
                                             VAR_5 - 2 ) );
        FUNC_0( VAR_7, FUNC_1( VAR_2, VAR_3, VAR_7 ) );
        FUNC_0( VAR_7, FUNC_3( VAR_2, VAR_3, VAR_1 ) );
    }
    else
    {
        FUNC_0( VAR_7, FUNC_2( VAR_2, VAR_3,
                                                  (const unsigned char *) VAR_4,
                                                  VAR_5 ) );
        FUNC_0( VAR_7, FUNC_1( VAR_2, VAR_3, VAR_7 ) );
        FUNC_0( VAR_7, FUNC_3( VAR_2, VAR_3, VAR_0 ) );
    }

    return( (int) VAR_7 );
}
