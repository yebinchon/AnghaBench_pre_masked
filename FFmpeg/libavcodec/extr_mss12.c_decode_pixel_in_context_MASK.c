
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t ptrdiff_t ;
struct TYPE_9__ {int (* get_model_sym ) (TYPE_2__*,int *) ;} ;
struct TYPE_8__ {int ** sec_models; } ;
typedef TYPE_1__ PixContext ;
typedef TYPE_2__ ArithCoder ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*,scalar_t__*,int,int) ;
 int FUNC_1 (scalar_t__*,scalar_t__,int) ;
 int FUNC_2 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_3(ArithCoder *VAR_4, PixContext *VAR_5,
                                   uint8_t *VAR_6, ptrdiff_t VAR_7, int VAR_8, int VAR_9,
                                   int VAR_10)
{
    uint8_t VAR_11[4];
    uint8_t VAR_12[4];
    int VAR_13;
    int VAR_14 = 0, VAR_15;
    int VAR_16;
    int VAR_17, VAR_18;

    if (!VAR_9) {
        FUNC_1(VAR_11, VAR_6[-1], 4);
    } else {
        VAR_11[VAR_1] = VAR_6[-VAR_7];
        if (!VAR_8) {
            VAR_11[VAR_2] = VAR_11[VAR_0] = VAR_11[VAR_1];
        } else {
            VAR_11[VAR_2] = VAR_6[-VAR_7 - 1];
            VAR_11[ VAR_0] = VAR_6[-1];
        }
        if (VAR_10)
            VAR_11[VAR_3] = VAR_6[-VAR_7 + 1];
        else
            VAR_11[VAR_3] = VAR_11[VAR_1];
    }

    VAR_15 = 0;
    if (VAR_8 >= 2 && VAR_6[-2] == VAR_11[VAR_0])
        VAR_15 = 1;
    if (VAR_9 >= 2 && VAR_6[-2 * VAR_7] == VAR_11[VAR_1])
        VAR_15 |= 2;

    VAR_13 = 1;
    VAR_12[0] = VAR_11[0];
    for (VAR_17 = 1; VAR_17 < 4; VAR_17++) {
        for (VAR_18 = 0; VAR_18 < VAR_13; VAR_18++)
            if (VAR_12[VAR_18] == VAR_11[VAR_17])
                break;
        if (VAR_18 == VAR_13)
            VAR_12[VAR_13++] = VAR_11[VAR_17];
    }

    switch (VAR_13) {
    case 1:
        VAR_14 = 0;
        break;
    case 2:
        if (VAR_11[VAR_1] == VAR_11[VAR_2]) {
            if (VAR_11[VAR_3] == VAR_11[VAR_2])
                VAR_14 = 1;
            else if (VAR_11[VAR_0] == VAR_11[VAR_2])
                VAR_14 = 2;
            else
                VAR_14 = 3;
        } else if (VAR_11[VAR_3] == VAR_11[VAR_2]) {
            if (VAR_11[VAR_0] == VAR_11[VAR_2])
                VAR_14 = 4;
            else
                VAR_14 = 5;
        } else if (VAR_11[VAR_0] == VAR_11[VAR_2]) {
            VAR_14 = 6;
        } else {
            VAR_14 = 7;
        }
        break;
    case 3:
        if (VAR_11[VAR_1] == VAR_11[VAR_2])
            VAR_14 = 8;
        else if (VAR_11[VAR_3] == VAR_11[VAR_2])
            VAR_14 = 9;
        else if (VAR_11[VAR_0] == VAR_11[VAR_2])
            VAR_14 = 10;
        else if (VAR_11[VAR_3] == VAR_11[VAR_1])
            VAR_14 = 11;
        else if (VAR_11[VAR_1] == VAR_11[VAR_0])
            VAR_14 = 12;
        else
            VAR_14 = 13;
        break;
    case 4:
        VAR_14 = 14;
        break;
    }

    VAR_16 = VAR_4->get_model_sym(VAR_4,
                                &VAR_5->sec_models[VAR_14][VAR_15]);
    if (VAR_16 < VAR_13)
        return VAR_12[VAR_16];
    else
        return FUNC_0(VAR_4, VAR_5, VAR_12, VAR_13, 1);
}
