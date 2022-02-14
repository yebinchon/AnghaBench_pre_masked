
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (int const*,int,int) ;

__attribute__((used)) static int FUNC_1(const uint8_t *VAR_0)
{



    int VAR_1 = 0;
    int VAR_2 = 16;

    for ( VAR_1 = 0; VAR_1 < 8*1024-VAR_2*188; ++VAR_1 )
    {
        if ( FUNC_0( &VAR_0[VAR_1], 188, VAR_2) )
            return 188 | (VAR_1 << 8);
        if ( FUNC_0( &VAR_0[VAR_1], 192, VAR_2) )
            return 192 | (VAR_1 << 8);
        if ( FUNC_0( &VAR_0[VAR_1], 204, VAR_2) )
            return 204 | (VAR_1 << 8);
        if ( FUNC_0( &VAR_0[VAR_1], 208, VAR_2) )
            return 208 | (VAR_1 << 8);
    }
    return 0;
}
