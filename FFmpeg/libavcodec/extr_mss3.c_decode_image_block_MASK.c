
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int prev_line ;
struct TYPE_3__ {int esc_model; int * vq_model; int vec_entry_model; int vec_size_model; } ;
typedef int RangeCoder ;
typedef TYPE_1__ ImageBlockCoder ;


 int FUNC_0 (int*,int ,int) ;
 void* FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(RangeCoder *VAR_0, ImageBlockCoder *VAR_1,
                               uint8_t *VAR_2, ptrdiff_t VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;
    int VAR_7;
    int VAR_8[4];
    int VAR_9[16];
    int VAR_10, VAR_11, VAR_12;

    VAR_7 = FUNC_2(VAR_0, &VAR_1->vec_size_model) + 2;
    for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++)
        VAR_8[VAR_5] = FUNC_1(VAR_0, &VAR_1->vec_entry_model);
    for (; VAR_5 < 4; VAR_5++)
        VAR_8[VAR_5] = 0;
    FUNC_0(VAR_9, 0, sizeof(VAR_9));

    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        VAR_10 = 0;
        VAR_11 = 0;
        for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
            VAR_12 = VAR_11;
            VAR_11 = VAR_9[VAR_5];
            VAR_10 = FUNC_2(VAR_0, &VAR_1->vq_model[VAR_10 + VAR_11 * 5 + VAR_12 * 25]);

            VAR_9[VAR_5] = VAR_10;
            if (VAR_10 < 4)
               VAR_2[VAR_5] = VAR_8[VAR_10];
            else
               VAR_2[VAR_5] = FUNC_1(VAR_0, &VAR_1->esc_model);
        }
        VAR_2 += VAR_3;
    }
}
