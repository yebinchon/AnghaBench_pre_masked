
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_6__ {int error; int gb; } ;
struct TYPE_5__ {int ksum; int k; } ;
typedef int GetBitContext ;
typedef TYPE_1__ APERice ;
typedef TYPE_2__ APEContext ;


 int FUNC_0 (int,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(APEContext *VAR_0, GetBitContext *VAR_1,
                              int32_t *VAR_2, APERice *VAR_3, int VAR_4)
{
    int VAR_5;
    unsigned VAR_6, VAR_7;

    VAR_3->ksum = 0;
    for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4, 5); VAR_5++) {
        VAR_2[VAR_5] = FUNC_3(&VAR_0->gb, 10);
        VAR_3->ksum += VAR_2[VAR_5];
    }
    VAR_3->k = FUNC_1(VAR_3->ksum / 10) + 1;
    if (VAR_3->k >= 24)
        return;
    for (; VAR_5 < FUNC_0(VAR_4, 64); VAR_5++) {
        VAR_2[VAR_5] = FUNC_3(&VAR_0->gb, VAR_3->k);
        VAR_3->ksum += VAR_2[VAR_5];
        VAR_3->k = FUNC_1(VAR_3->ksum / ((VAR_5 + 1) * 2)) + 1;
        if (VAR_3->k >= 24)
            return;
    }
    VAR_6 = 1 << (VAR_3->k + 7);
    VAR_7 = VAR_3->k ? (1 << (VAR_3->k + 6)) : 0;
    for (; VAR_5 < VAR_4; VAR_5++) {
        if (FUNC_2(&VAR_0->gb) < 1) {
            VAR_0->error = 1;
            return ;
        }
        VAR_2[VAR_5] = FUNC_3(&VAR_0->gb, VAR_3->k);
        VAR_3->ksum += VAR_2[VAR_5] - VAR_2[VAR_5 - 64];
        while (VAR_3->ksum < VAR_7) {
            VAR_3->k--;
            VAR_7 = VAR_3->k ? VAR_7 >> 1 : 0;
            VAR_6 >>= 1;
        }
        while (VAR_3->ksum >= VAR_6) {
            VAR_3->k++;
            if (VAR_3->k > 24)
                return;
            VAR_6 <<= 1;
            VAR_7 = VAR_7 ? VAR_7 << 1 : 128;
        }
    }

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
        VAR_2[VAR_5] = ((VAR_2[VAR_5] >> 1) ^ ((VAR_2[VAR_5] & 1) - 1)) + 1;
}
