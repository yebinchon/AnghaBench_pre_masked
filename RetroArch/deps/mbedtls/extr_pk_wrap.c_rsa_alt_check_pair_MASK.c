
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hash ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,int,int) ;
 scalar_t__ FUNC_1 (void const*) ;
 int FUNC_2 (void*,int ,unsigned char*,int,unsigned char*,size_t*,int *,int *) ;
 scalar_t__ FUNC_3 (void const*) ;
 scalar_t__ FUNC_4 (void*,int ,unsigned char*,int,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_5( const void *VAR_3, const void *VAR_4 )
{
    unsigned char VAR_5[VAR_2];
    unsigned char VAR_6[32];
    size_t VAR_7 = 0;
    int VAR_8;

    if( FUNC_1( VAR_4 ) != FUNC_3( VAR_3 ) )
        return( VAR_0 );

    FUNC_0( VAR_6, 0x2a, sizeof( VAR_6 ) );

    if( ( VAR_8 = FUNC_2( (void *) VAR_4, VAR_1,
                                   VAR_6, sizeof( VAR_6 ),
                                   VAR_5, &VAR_7, ((void*)0), ((void*)0) ) ) != 0 )
    {
        return( VAR_8 );
    }

    if( FUNC_4( (void *) VAR_3, VAR_1,
                         VAR_6, sizeof( VAR_6 ), VAR_5, VAR_7 ) != 0 )
    {
        return( VAR_0 );
    }

    return( 0 );
}
