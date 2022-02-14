
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int idx; TYPE_3__* status; } ;
typedef TYPE_1__ dsfmt_t ;
struct TYPE_7__ {int* u32; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 size_t FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_3__*,int,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_3 ;

void FUNC_8(dsfmt_t *VAR_4, uint32_t VAR_5[],
        int VAR_6, int VAR_7) {
    int VAR_8, VAR_9, VAR_10;
    uint32_t VAR_11;
    uint32_t *VAR_12;
    int VAR_13;
    int VAR_14;
    int VAR_15 = (VAR_0 + 1) * 4;


    if (VAR_7 != VAR_2) {
 FUNC_1(VAR_3, "DSFMT_MEXP doesn't match with dSFMT.c\n");
 FUNC_0(1);
    }
    if (VAR_15 >= 623) {
 VAR_13 = 11;
    } else if (VAR_15 >= 68) {
 VAR_13 = 7;
    } else if (VAR_15 >= 39) {
 VAR_13 = 5;
    } else {
 VAR_13 = 3;
    }
    VAR_14 = (VAR_15 - VAR_13) / 2;

    VAR_12 = &VAR_4->status[0].u32[0];
    FUNC_6(VAR_4->status, 0x8b, sizeof(VAR_4->status));
    if (VAR_6 + 1 > VAR_15) {
 VAR_10 = VAR_6 + 1;
    } else {
 VAR_10 = VAR_15;
    }
    VAR_11 = FUNC_3(VAR_12[FUNC_2(0)] ^ VAR_12[FUNC_2(VAR_14 % VAR_15)]
    ^ VAR_12[FUNC_2((VAR_15 - 1) % VAR_15)]);
    VAR_12[FUNC_2(VAR_14 % VAR_15)] += VAR_11;
    VAR_11 += VAR_6;
    VAR_12[FUNC_2((VAR_14 + VAR_13) % VAR_15)] += VAR_11;
    VAR_12[FUNC_2(0)] = VAR_11;
    VAR_10--;
    for (VAR_8 = 1, VAR_9 = 0; (VAR_9 < VAR_10) && (VAR_9 < VAR_6); VAR_9++) {
 VAR_11 = FUNC_3(VAR_12[FUNC_2(VAR_8)]
        ^ VAR_12[FUNC_2((VAR_8 + VAR_14) % VAR_15)]
        ^ VAR_12[FUNC_2((VAR_8 + VAR_15 - 1) % VAR_15)]);
 VAR_12[FUNC_2((VAR_8 + VAR_14) % VAR_15)] += VAR_11;
 VAR_11 += VAR_5[VAR_9] + VAR_8;
 VAR_12[FUNC_2((VAR_8 + VAR_14 + VAR_13) % VAR_15)] += VAR_11;
 VAR_12[FUNC_2(VAR_8)] = VAR_11;
 VAR_8 = (VAR_8 + 1) % VAR_15;
    }
    for (; VAR_9 < VAR_10; VAR_9++) {
 VAR_11 = FUNC_3(VAR_12[FUNC_2(VAR_8)]
        ^ VAR_12[FUNC_2((VAR_8 + VAR_14) % VAR_15)]
        ^ VAR_12[FUNC_2((VAR_8 + VAR_15 - 1) % VAR_15)]);
 VAR_12[FUNC_2((VAR_8 + VAR_14) % VAR_15)] += VAR_11;
 VAR_11 += VAR_8;
 VAR_12[FUNC_2((VAR_8 + VAR_14 + VAR_13) % VAR_15)] += VAR_11;
 VAR_12[FUNC_2(VAR_8)] = VAR_11;
 VAR_8 = (VAR_8 + 1) % VAR_15;
    }
    for (VAR_9 = 0; VAR_9 < VAR_15; VAR_9++) {
 VAR_11 = FUNC_4(VAR_12[FUNC_2(VAR_8)]
        + VAR_12[FUNC_2((VAR_8 + VAR_14) % VAR_15)]
        + VAR_12[FUNC_2((VAR_8 + VAR_15 - 1) % VAR_15)]);
 VAR_12[FUNC_2((VAR_8 + VAR_14) % VAR_15)] ^= VAR_11;
 VAR_11 -= VAR_8;
 VAR_12[FUNC_2((VAR_8 + VAR_14 + VAR_13) % VAR_15)] ^= VAR_11;
 VAR_12[FUNC_2(VAR_8)] = VAR_11;
 VAR_8 = (VAR_8 + 1) % VAR_15;
    }
    FUNC_5(VAR_4);
    FUNC_7(VAR_4);
    VAR_4->idx = VAR_1;
}
