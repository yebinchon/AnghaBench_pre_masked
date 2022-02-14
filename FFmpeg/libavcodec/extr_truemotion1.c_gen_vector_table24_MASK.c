
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int* y_predictor_table; int* c_predictor_table; int* fat_y_predictor_table; int* fat_c_predictor_table; int fat_cdt; int fat_ydt; int cdt; int ydt; } ;
typedef TYPE_1__ TrueMotion1Context ;


 int FUNC_0 (unsigned char,unsigned char,int ) ;
 int FUNC_1 (unsigned char,unsigned char,int ) ;

__attribute__((used)) static void FUNC_2(TrueMotion1Context *VAR_0, const uint8_t *VAR_1)
{
    int VAR_2, VAR_3, VAR_4;
    unsigned char VAR_5;

    for (VAR_3 = 0; VAR_3 < 1024; VAR_3 += 4)
    {
        VAR_2 = *VAR_1++ / 2;
        for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
        {
            VAR_5 = *VAR_1++;
            VAR_0->y_predictor_table[VAR_3+VAR_4] = 0xfffffffe &
                FUNC_1(VAR_5 >> 4, VAR_5 & 0xf, VAR_0->ydt);
            VAR_0->c_predictor_table[VAR_3+VAR_4] = 0xfffffffe &
                FUNC_0(VAR_5 >> 4, VAR_5 & 0xf, VAR_0->cdt);
            VAR_0->fat_y_predictor_table[VAR_3+VAR_4] = 0xfffffffe &
                FUNC_1(VAR_5 >> 4, VAR_5 & 0xf, VAR_0->fat_ydt);
            VAR_0->fat_c_predictor_table[VAR_3+VAR_4] = 0xfffffffe &
                FUNC_0(VAR_5 >> 4, VAR_5 & 0xf, VAR_0->fat_cdt);
        }
        VAR_0->y_predictor_table[VAR_3+(VAR_4-1)] |= 1;
        VAR_0->c_predictor_table[VAR_3+(VAR_4-1)] |= 1;
        VAR_0->fat_y_predictor_table[VAR_3+(VAR_4-1)] |= 1;
        VAR_0->fat_c_predictor_table[VAR_3+(VAR_4-1)] |= 1;
    }
}
