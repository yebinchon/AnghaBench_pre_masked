
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;

__attribute__((used)) static int FUNC_1( unsigned char *VAR_0, unsigned char * VAR_1, int VAR_2 )
{
    int VAR_3, VAR_4, VAR_5 = 0;
    for( VAR_3 = 4; VAR_3; VAR_3-- )
    {
        for( VAR_4 = 0; VAR_4 < 8; VAR_4++ )
        {
            VAR_5 += FUNC_0( VAR_0[VAR_4]-VAR_1[VAR_4] );
        }
        VAR_0+=VAR_2; VAR_1+=VAR_2;
    }
    return VAR_5;
}
