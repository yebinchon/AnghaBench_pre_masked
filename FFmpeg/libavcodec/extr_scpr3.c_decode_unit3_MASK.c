
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_15__ {int type; int size; int* symbols; int cntsum; int dectab; int cnts; int freqs1; scalar_t__* freqs; } ;
struct TYPE_14__ {int gb; int rc; } ;
typedef TYPE_1__ SCPRContext ;
typedef int RangeCoder ;
typedef TYPE_2__ PixelModel3 ;
typedef int GetByteContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int,int*,int *,int *,int*,int) ;
 int FUNC_3 (TYPE_2__*,int,int*,int *,int *) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_1__*,int,int*,scalar_t__*,int ,int ,int ,int*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_12(SCPRContext *VAR_1, PixelModel3 *VAR_2, uint32_t VAR_3, uint32_t *VAR_4)
{
    GetByteContext *VAR_5 = &VAR_1->gb;
    RangeCoder *VAR_6 = &VAR_1->rc;
    uint16_t VAR_7 = 0, VAR_8 = 0;
    uint32_t VAR_9;
    int VAR_10;

    VAR_10 = VAR_2->type;
    switch (VAR_10) {
    case 0:
        *VAR_4 = FUNC_0(&VAR_1->gb);
        VAR_2->type = 1;
        VAR_2->size = 1;
        VAR_2->symbols[0] = *VAR_4;
        FUNC_8(VAR_5, VAR_6);
        break;
    case 1:
        *VAR_4 = FUNC_0(&VAR_1->gb);
        FUNC_4(VAR_2, *VAR_4);
        FUNC_8(VAR_5, VAR_6);
        break;
    case 2:
        *VAR_4 = FUNC_0(&VAR_1->gb);
        FUNC_5(VAR_2, *VAR_4);
        FUNC_8(VAR_5, VAR_6);
        break;
    case 3:
        *VAR_4 = FUNC_0(&VAR_1->gb);
        FUNC_6(VAR_2, *VAR_4);
        FUNC_8(VAR_5, VAR_6);
        break;
    case 4:
        VAR_9 = VAR_2->freqs[0] + VAR_2->freqs[1] + VAR_2->freqs[2] + VAR_2->freqs[3] + 256 - VAR_2->size;
        if (!FUNC_2(VAR_2, VAR_3, VAR_4, &VAR_7, &VAR_8, &VAR_9, 4))
            FUNC_9(VAR_2, *VAR_4);
        FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8);
        FUNC_8(VAR_5, VAR_6);
        break;
    case 5:
        if (!FUNC_2(VAR_2, VAR_3, VAR_4, &VAR_7, &VAR_8, &VAR_2->cntsum, 16))
            FUNC_10(VAR_2, *VAR_4);
        FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8);
        FUNC_8(VAR_5, VAR_6);
        break;
    case 6:
        if (!FUNC_3(VAR_2, VAR_3, VAR_4, &VAR_7, &VAR_8)) {
            FUNC_11(VAR_2);
        }
        FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8);
        FUNC_8(VAR_5, VAR_6);
        break;
    case 7:
        return FUNC_7(VAR_1, 255, &VAR_2->cntsum,
                             VAR_2->freqs, VAR_2->freqs1,
                             VAR_2->cnts, VAR_2->dectab, VAR_4);
    }

    if (*VAR_4 > 255)
        return VAR_0;

    return 0;
}
