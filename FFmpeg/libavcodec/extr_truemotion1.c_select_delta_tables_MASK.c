
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {int* ydt; int* cdt; int* fat_ydt; int* fat_cdt; } ;
typedef TYPE_1__ TrueMotion1Context ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int*,int ,int) ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_1(TrueMotion1Context *VAR_4, int VAR_5)
{
    int VAR_6;

    if (VAR_5 > 3)
        return;

    FUNC_0(VAR_4->ydt, VAR_3[VAR_5], 8 * sizeof(int16_t));
    FUNC_0(VAR_4->cdt, VAR_0[VAR_5], 8 * sizeof(int16_t));
    FUNC_0(VAR_4->fat_ydt, VAR_2[VAR_5], 8 * sizeof(int16_t));
    FUNC_0(VAR_4->fat_cdt, VAR_1[VAR_5], 8 * sizeof(int16_t));



    for (VAR_6 = 0; VAR_6 < 8; VAR_6++)
    {


        VAR_4->ydt[VAR_6] &= 0xFFFE;
        VAR_4->ydt[VAR_6] /= 2;
    }
}
