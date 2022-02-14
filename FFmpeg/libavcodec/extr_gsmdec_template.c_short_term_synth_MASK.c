
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {int** lar; size_t lar_idx; int v; } ;
typedef TYPE_1__ GSMContext ;


 int FUNC_0 (int const,int*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(GSMContext *VAR_0, int16_t *VAR_1, const int16_t *VAR_2)
{
    int VAR_3;
    int VAR_4[8];
    int *VAR_5 = VAR_0->lar[VAR_0->lar_idx];
    int *VAR_6 = VAR_0->lar[VAR_0->lar_idx ^ 1];
    for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
        VAR_4[VAR_3] = FUNC_1((VAR_6[VAR_3] >> 2) + (VAR_6[VAR_3] >> 1) + (VAR_5[VAR_3] >> 2));
    for (VAR_3 = 0; VAR_3 < 13; VAR_3++)
        VAR_1[VAR_3] = FUNC_0(VAR_2[VAR_3], VAR_4, VAR_0->v);

    for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
        VAR_4[VAR_3] = FUNC_1((VAR_6[VAR_3] >> 1) + (VAR_5 [VAR_3] >> 1));
    for (VAR_3 = 13; VAR_3 < 27; VAR_3++)
        VAR_1[VAR_3] = FUNC_0(VAR_2[VAR_3], VAR_4, VAR_0->v);

    for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
        VAR_4[VAR_3] = FUNC_1((VAR_6[VAR_3] >> 2) + (VAR_5 [VAR_3] >> 1) + (VAR_5[VAR_3] >> 2));
    for (VAR_3 = 27; VAR_3 < 40; VAR_3++)
        VAR_1[VAR_3] = FUNC_0(VAR_2[VAR_3], VAR_4, VAR_0->v);

    for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
        VAR_4[VAR_3] = FUNC_1(VAR_5[VAR_3]);
    for (VAR_3 = 40; VAR_3 < 160; VAR_3++)
        VAR_1[VAR_3] = FUNC_0(VAR_2[VAR_3], VAR_4, VAR_0->v);

    VAR_0->lar_idx ^= 1;
}
