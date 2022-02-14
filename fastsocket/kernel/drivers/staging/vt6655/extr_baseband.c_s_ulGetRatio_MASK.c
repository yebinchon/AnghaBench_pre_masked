
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {int* uNumSQ3; int uDiversityCnt; } ;
typedef TYPE_1__* PSDevice ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;

__attribute__((used)) static
ULONG
FUNC_0 (PSDevice VAR_24)
{
ULONG VAR_25 = 0;
ULONG VAR_26;
ULONG VAR_27;


    VAR_26 = VAR_24->uNumSQ3[VAR_8];
    if ( VAR_24->uNumSQ3[VAR_8] != 0 ) {
        VAR_27 = VAR_24->uNumSQ3[VAR_8];
        VAR_25 = (VAR_27 * 1000 / VAR_24->uDiversityCnt);

        VAR_25 += VAR_20;
    }
    if ( VAR_24->uNumSQ3[VAR_7] > VAR_26 ) {
        VAR_27 = VAR_24->uNumSQ3[VAR_8] + VAR_24->uNumSQ3[VAR_7];
        VAR_25 = (VAR_27 * 1000 / VAR_24->uDiversityCnt);

        VAR_25 += VAR_19;
        VAR_26 = VAR_24->uNumSQ3[VAR_7];
    }
    if ( VAR_24->uNumSQ3[VAR_6] > VAR_26 ) {
        VAR_27 = VAR_24->uNumSQ3[VAR_8] + VAR_24->uNumSQ3[VAR_7] +
                      VAR_24->uNumSQ3[VAR_6];
        VAR_25 = (VAR_27 * 1000 / VAR_24->uDiversityCnt);

        VAR_25 += VAR_18;
        VAR_26 = VAR_24->uNumSQ3[VAR_6];
    }
    if ( VAR_24->uNumSQ3[VAR_4] > VAR_26 ) {
        VAR_27 = VAR_24->uNumSQ3[VAR_8] + VAR_24->uNumSQ3[VAR_7] +
                      VAR_24->uNumSQ3[VAR_6] + VAR_24->uNumSQ3[VAR_4];
        VAR_25 = (VAR_27 * 1000 / VAR_24->uDiversityCnt);

        VAR_25 += VAR_16;
        VAR_26 = VAR_24->uNumSQ3[VAR_4];
    }
    if ( VAR_24->uNumSQ3[VAR_2] > VAR_26 ) {
        VAR_27 = VAR_24->uNumSQ3[VAR_8] + VAR_24->uNumSQ3[VAR_7] +
                      VAR_24->uNumSQ3[VAR_6] + VAR_24->uNumSQ3[VAR_4] +
                      VAR_24->uNumSQ3[VAR_2];
        VAR_25 = (VAR_27 * 1000 / VAR_24->uDiversityCnt);

        VAR_25 += VAR_14;
        VAR_26 = VAR_24->uNumSQ3[VAR_2];
    }
    if ( VAR_24->uNumSQ3[VAR_1] > VAR_26 ) {
        VAR_27 = VAR_24->uNumSQ3[VAR_8] + VAR_24->uNumSQ3[VAR_7] +
                      VAR_24->uNumSQ3[VAR_6] + VAR_24->uNumSQ3[VAR_4] +
                      VAR_24->uNumSQ3[VAR_2] + VAR_24->uNumSQ3[VAR_1];
        VAR_25 = (VAR_27 * 1000 / VAR_24->uDiversityCnt);

        VAR_25 += VAR_13;
        VAR_26 = VAR_24->uNumSQ3[VAR_1];
    }
    if ( VAR_24->uNumSQ3[VAR_0] > VAR_26 ) {
        VAR_27 = VAR_24->uDiversityCnt - VAR_24->uNumSQ3[VAR_3] -
                      VAR_24->uNumSQ3[VAR_5] - VAR_24->uNumSQ3[VAR_9] -
                      VAR_24->uNumSQ3[VAR_10] - VAR_24->uNumSQ3[VAR_11];
        VAR_25 = (VAR_27 * 1000 / VAR_24->uDiversityCnt);

        VAR_25 += VAR_12;
        VAR_26 = VAR_24->uNumSQ3[VAR_0];
    }
    if ( VAR_24->uNumSQ3[VAR_11] > VAR_26 ) {
        VAR_27 = VAR_24->uDiversityCnt - VAR_24->uNumSQ3[VAR_3] -
                      VAR_24->uNumSQ3[VAR_5] - VAR_24->uNumSQ3[VAR_9] -
                      VAR_24->uNumSQ3[VAR_10];
        VAR_25 = (VAR_27 * 1000 / VAR_24->uDiversityCnt);

        VAR_25 += VAR_23;
        VAR_26 = VAR_24->uNumSQ3[VAR_11];
    }
    if ( VAR_24->uNumSQ3[VAR_10] > VAR_26 ) {
        VAR_27 = VAR_24->uDiversityCnt - VAR_24->uNumSQ3[VAR_3] -
                      VAR_24->uNumSQ3[VAR_5] - VAR_24->uNumSQ3[VAR_9];
        VAR_25 = (VAR_27 * 1000 / VAR_24->uDiversityCnt);

        VAR_25 += VAR_22;
        VAR_26 = VAR_24->uNumSQ3[VAR_10];
    }
    if ( VAR_24->uNumSQ3[VAR_9] > VAR_26 ) {
        VAR_27 = VAR_24->uDiversityCnt - VAR_24->uNumSQ3[VAR_3] -
                      VAR_24->uNumSQ3[VAR_5];
        VAR_25 = (VAR_27 * 1000 / VAR_24->uDiversityCnt);

        VAR_25 += VAR_21;
        VAR_26 = VAR_24->uNumSQ3[VAR_9];
    }
    if ( VAR_24->uNumSQ3[VAR_5] > VAR_26 ) {
        VAR_27 = VAR_24->uDiversityCnt - VAR_24->uNumSQ3[VAR_3];
        VAR_25 = (VAR_27 * 1000 / VAR_24->uDiversityCnt);

        VAR_25 += VAR_17;
        VAR_26 = VAR_24->uNumSQ3[VAR_5];
    }
    if ( VAR_24->uNumSQ3[VAR_3] > VAR_26 ) {
        VAR_27 = VAR_24->uDiversityCnt;
        VAR_25 = (VAR_27 * 1000 / VAR_24->uDiversityCnt);

        VAR_25 += VAR_15;
    }

    return VAR_25;
}
