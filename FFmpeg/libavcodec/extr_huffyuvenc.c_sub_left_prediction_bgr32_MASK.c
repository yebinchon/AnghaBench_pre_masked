
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int (* diff_bytes ) (int*,int const*,int const*,int) ;} ;
struct TYPE_5__ {TYPE_1__ llvidencdsp; } ;
typedef TYPE_2__ HYuvContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int*,int const*,int const*,int) ;

__attribute__((used)) static inline void FUNC_2(HYuvContext *VAR_4, uint8_t *VAR_5,
                                             const uint8_t *VAR_6, int VAR_7,
                                             int *VAR_8, int *VAR_9, int *VAR_10,
                                             int *VAR_11)
{
    int VAR_12;
    int VAR_13, VAR_14, VAR_15, VAR_16;
    int VAR_17 = FUNC_0(VAR_7, 8);
    VAR_13 = *VAR_8;
    VAR_14 = *VAR_9;
    VAR_15 = *VAR_10;
    VAR_16 = *VAR_11;

    for (VAR_12 = 0; VAR_12 < VAR_17; VAR_12++) {
        const int VAR_18 = VAR_6[VAR_12 * 4 + VAR_3];
        const int VAR_19 = VAR_6[VAR_12 * 4 + VAR_2];
        const int VAR_20 = VAR_6[VAR_12 * 4 + VAR_1];
        const int VAR_21 = VAR_6[VAR_12 * 4 + VAR_0];
        VAR_5[VAR_12 * 4 + VAR_3] = VAR_18 - VAR_13;
        VAR_5[VAR_12 * 4 + VAR_2] = VAR_19 - VAR_14;
        VAR_5[VAR_12 * 4 + VAR_1] = VAR_20 - VAR_15;
        VAR_5[VAR_12 * 4 + VAR_0] = VAR_21 - VAR_16;
        VAR_13 = VAR_18;
        VAR_14 = VAR_19;
        VAR_15 = VAR_20;
        VAR_16 = VAR_21;
    }

    VAR_4->llvidencdsp.diff_bytes(VAR_5 + 32, VAR_6 + 32, VAR_6 + 32 - 4, VAR_7 * 4 - 32);

    *VAR_8 = VAR_6[(VAR_7 - 1) * 4 + VAR_3];
    *VAR_9 = VAR_6[(VAR_7 - 1) * 4 + VAR_2];
    *VAR_10 = VAR_6[(VAR_7 - 1) * 4 + VAR_1];
    *VAR_11 = VAR_6[(VAR_7 - 1) * 4 + VAR_0];
}
