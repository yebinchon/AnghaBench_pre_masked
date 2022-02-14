
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int VC_IMAGE_TYPE_T ;



__attribute__((used)) static void FUNC_0( VC_IMAGE_TYPE_T VAR_0, void *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8 )
{
    int VAR_9;
    int VAR_10;

    uint16_t *VAR_11 = (uint16_t *)VAR_1 + VAR_5 * (VAR_2>>1) + VAR_4;

    for ( VAR_9 = 0; VAR_9 < VAR_7; VAR_9++ )
    {
        for ( VAR_10 = 0; VAR_10 < VAR_6; VAR_10++ )
        {
            VAR_11[VAR_10] = VAR_8;
        }
        VAR_11 += (VAR_2>>1);
    }
}
