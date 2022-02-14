
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {int table; } ;
typedef TYPE_1__ VLC ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 size_t* VAR_9 ;
 size_t FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (int *,int *,int*,int*) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(GetBitContext *VAR_10, VLC *VAR_11,
                        const int *VAR_12, int VAR_13,
                        int16_t VAR_14[64], int *VAR_15)
{
    int VAR_16, VAR_17;
    int VAR_18;
    int VAR_19, VAR_20, VAR_21 = 1;

    FUNC_3(VAR_14, 0, 64 * sizeof(*VAR_14));
    VAR_17 = FUNC_1(VAR_10, VAR_11->table, VAR_7, 2);
    if (VAR_17 < 0)
        return VAR_0;
    *VAR_15 += VAR_17;

    VAR_14[0] = FUNC_4(*VAR_15 << (12 - VAR_13), 12);

    VAR_16 = VAR_12[FUNC_0(VAR_10, 2)];
    if (VAR_16 >= 128)
        VAR_18 = VAR_2;
    else if (VAR_16 >= 64)
        VAR_18 = VAR_5;
    else if (VAR_16 >= 32)
        VAR_18 = VAR_4;
    else if (VAR_16 >= 16)
        VAR_18 = VAR_3;
    else if (VAR_16 >= 8)
        VAR_18 = VAR_6;
    else
        VAR_18 = VAR_1;

    do {
        FUNC_2(VAR_10, &VAR_8[VAR_18], &VAR_19, &VAR_20);
        VAR_21 += VAR_19;
        if (VAR_21 >= 64)
            break;
        VAR_14[VAR_9[VAR_21++]] = VAR_20 * VAR_16;
    } while (VAR_21 < 64);

    return 0;
}
