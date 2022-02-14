
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int idx; TYPE_1__* state; } ;
typedef TYPE_2__ sfmt_t ;
struct TYPE_6__ {int* u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int,int) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(sfmt_t * VAR_2, uint32_t *VAR_3, int VAR_4) {
    int VAR_5, VAR_6, VAR_7;
    uint32_t VAR_8;
    int VAR_9;
    int VAR_10;
    int VAR_11 = VAR_0 * 4;
    uint32_t *VAR_12 = &VAR_2->state[0].u[0];

    if (VAR_11 >= 623) {
 VAR_9 = 11;
    } else if (VAR_11 >= 68) {
 VAR_9 = 7;
    } else if (VAR_11 >= 39) {
 VAR_9 = 5;
    } else {
 VAR_9 = 3;
    }
    VAR_10 = (VAR_11 - VAR_9) / 2;

    FUNC_3(VAR_2, 0x8b, sizeof(sfmt_t));
    if (VAR_4 + 1 > VAR_1) {
 VAR_7 = VAR_4 + 1;
    } else {
 VAR_7 = VAR_1;
    }
    VAR_8 = FUNC_0(VAR_12[FUNC_2(0)] ^ VAR_12[FUNC_2(VAR_10)]
       ^ VAR_12[FUNC_2(VAR_1 - 1)]);
    VAR_12[FUNC_2(VAR_10)] += VAR_8;
    VAR_8 += VAR_4;
    VAR_12[FUNC_2(VAR_10 + VAR_9)] += VAR_8;
    VAR_12[FUNC_2(0)] = VAR_8;

    VAR_7--;
    for (VAR_5 = 1, VAR_6 = 0; (VAR_6 < VAR_7) && (VAR_6 < VAR_4); VAR_6++) {
 VAR_8 = FUNC_0(VAR_12[FUNC_2(VAR_5)] ^ VAR_12[FUNC_2((VAR_5 + VAR_10) % VAR_1)]
    ^ VAR_12[FUNC_2((VAR_5 + VAR_1 - 1) % VAR_1)]);
 VAR_12[FUNC_2((VAR_5 + VAR_10) % VAR_1)] += VAR_8;
 VAR_8 += VAR_3[VAR_6] + VAR_5;
 VAR_12[FUNC_2((VAR_5 + VAR_10 + VAR_9) % VAR_1)] += VAR_8;
 VAR_12[FUNC_2(VAR_5)] = VAR_8;
 VAR_5 = (VAR_5 + 1) % VAR_1;
    }
    for (; VAR_6 < VAR_7; VAR_6++) {
 VAR_8 = FUNC_0(VAR_12[FUNC_2(VAR_5)] ^ VAR_12[FUNC_2((VAR_5 + VAR_10) % VAR_1)]
    ^ VAR_12[FUNC_2((VAR_5 + VAR_1 - 1) % VAR_1)]);
 VAR_12[FUNC_2((VAR_5 + VAR_10) % VAR_1)] += VAR_8;
 VAR_8 += VAR_5;
 VAR_12[FUNC_2((VAR_5 + VAR_10 + VAR_9) % VAR_1)] += VAR_8;
 VAR_12[FUNC_2(VAR_5)] = VAR_8;
 VAR_5 = (VAR_5 + 1) % VAR_1;
    }
    for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
 VAR_8 = FUNC_1(VAR_12[FUNC_2(VAR_5)] + VAR_12[FUNC_2((VAR_5 + VAR_10) % VAR_1)]
    + VAR_12[FUNC_2((VAR_5 + VAR_1 - 1) % VAR_1)]);
 VAR_12[FUNC_2((VAR_5 + VAR_10) % VAR_1)] ^= VAR_8;
 VAR_8 -= VAR_5;
 VAR_12[FUNC_2((VAR_5 + VAR_10 + VAR_9) % VAR_1)] ^= VAR_8;
 VAR_12[FUNC_2(VAR_5)] = VAR_8;
 VAR_5 = (VAR_5 + 1) % VAR_1;
    }

    VAR_2->idx = VAR_1;
    FUNC_4(VAR_2);
}
