
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0( const void *VAR_0, const void *VAR_1, size_t VAR_2 )
{
    size_t VAR_3;
    unsigned char VAR_4;
    const unsigned char *VAR_5 = VAR_0, *VAR_6 = VAR_1;

    for( VAR_3 = 0; VAR_3 < VAR_2; VAR_3++ )
    {
        VAR_4 = VAR_5[VAR_3] ^ VAR_6[VAR_3];

        if( VAR_4 == 0 )
            continue;

        if( VAR_4 == 32 &&
            ( ( VAR_5[VAR_3] >= 'a' && VAR_5[VAR_3] <= 'z' ) ||
              ( VAR_5[VAR_3] >= 'A' && VAR_5[VAR_3] <= 'Z' ) ) )
        {
            continue;
        }

        return( -1 );
    }

    return( 0 );
}
