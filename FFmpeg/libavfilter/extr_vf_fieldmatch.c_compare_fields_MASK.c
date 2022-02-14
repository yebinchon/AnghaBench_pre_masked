
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_12__ {int** data; int* linesize; } ;
struct TYPE_11__ {int** map_data; int* map_linesize; int y0; int vsub; int y1; int hsub; scalar_t__ mchroma; TYPE_2__* src; } ;
typedef TYPE_1__ FieldMatchContext ;
typedef TYPE_2__ AVFrame ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int const*,int,int const*,int,int*,int,int const,int const,int) ;
 int FUNC_4 (int*,int const,int const,int,int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__ const*,int) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__ const*,int) ;
 TYPE_2__* FUNC_8 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_9(FieldMatchContext *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;
    uint64_t VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;
    uint64_t VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
    int VAR_12, VAR_13, VAR_14, VAR_15;
    float VAR_16, VAR_17, VAR_18;
    const AVFrame *VAR_19 = VAR_0->src;

    for (VAR_4 = 0; VAR_4 < (VAR_0->mchroma ? 3 : 1); VAR_4++) {
        int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
        const AVFrame *VAR_25, *VAR_26;
        uint8_t *VAR_27 = VAR_0->map_data[VAR_4];
        int VAR_28 = VAR_0->map_linesize[VAR_4];
        const uint8_t *VAR_29 = VAR_19->data[VAR_4];
        const int VAR_30 = VAR_19->linesize[VAR_4];
        const int VAR_31 = VAR_30 << 1;
        int VAR_32, VAR_33;
        int VAR_34, VAR_35;
        const int VAR_36 = FUNC_7 (VAR_0, VAR_19, VAR_4);
        const int VAR_37 = FUNC_6(VAR_0, VAR_19, VAR_4);
        const int VAR_38 = VAR_0->y0 >> (VAR_4 ? VAR_0->vsub : 0);
        const int VAR_39 = VAR_0->y1 >> (VAR_4 ? VAR_0->vsub : 0);
        const int VAR_40 = (VAR_4 == 0 ? 8 : 8 >> VAR_0->hsub);
        const int VAR_41 = VAR_36 - VAR_40;
        const uint8_t *VAR_42, *VAR_43, *VAR_44;
        const uint8_t *VAR_45, *VAR_46, *VAR_47, *VAR_48;

        FUNC_4(VAR_27, VAR_36, VAR_37, VAR_28, 0);


        VAR_24 = FUNC_5(VAR_1, VAR_3);
        VAR_43 = VAR_29 + (VAR_24 + 1) * VAR_30;
        VAR_42 = VAR_43 - VAR_31;
        VAR_44 = VAR_43 + VAR_31;
        VAR_27 = VAR_27 + VAR_24 * VAR_28;
        VAR_25 = FUNC_8(VAR_0, VAR_1);
        VAR_32 = VAR_25->linesize[VAR_4];
        VAR_34 = VAR_32 << 1;
        VAR_45 = VAR_25->data[VAR_4] + VAR_24 * VAR_32;
        VAR_46 = VAR_45 + VAR_34;


        VAR_24 = FUNC_5(VAR_2, VAR_3);
        VAR_26 = FUNC_8(VAR_0, VAR_2);
        VAR_33 = VAR_26->linesize[VAR_4];
        VAR_35 = VAR_33 << 1;
        VAR_47 = VAR_26->data[VAR_4] + VAR_24 * VAR_33;
        VAR_48 = VAR_47 + VAR_35;

        VAR_28 <<= 1;
        if ((VAR_1 >= 3 && VAR_3 == 1) || (VAR_1 < 3 && VAR_3 != 1))
            FUNC_3(VAR_0, VAR_45, VAR_34, VAR_47, VAR_35,
                           VAR_27, VAR_28, VAR_37, VAR_36, VAR_4);
        else
            FUNC_3(VAR_0, VAR_46, VAR_34, VAR_48, VAR_35,
                           VAR_27 + VAR_28, VAR_28, VAR_37, VAR_36, VAR_4);

        for (VAR_21 = 2; VAR_21 < VAR_37 - 2; VAR_21 += 2) {
            if (VAR_38 == VAR_39 || VAR_21 < VAR_38 || VAR_21 > VAR_39) {
                for (VAR_20 = VAR_40; VAR_20 < VAR_41; VAR_20++) {
                    if (VAR_27[VAR_20] > 0 || VAR_27[VAR_20 + VAR_28] > 0) {
                        VAR_22 = VAR_42[VAR_20] + (VAR_43[VAR_20] << 2) + VAR_44[VAR_20];

                        VAR_23 = FUNC_2(3 * (VAR_45[VAR_20] + VAR_46[VAR_20]) - VAR_22);
                        if (VAR_23 > 23 && ((VAR_27[VAR_20]&1) || (VAR_27[VAR_20 + VAR_28]&1)))
                            VAR_6 += VAR_23;
                        if (VAR_23 > 42) {
                            if ((VAR_27[VAR_20]&2) || (VAR_27[VAR_20 + VAR_28]&2))
                                VAR_7 += VAR_23;
                            if ((VAR_27[VAR_20]&4) || (VAR_27[VAR_20 + VAR_28]&4))
                                VAR_8 += VAR_23;
                        }

                        VAR_23 = FUNC_2(3 * (VAR_47[VAR_20] + VAR_48[VAR_20]) - VAR_22);
                        if (VAR_23 > 23 && ((VAR_27[VAR_20]&1) || (VAR_27[VAR_20 + VAR_28]&1)))
                            VAR_9 += VAR_23;
                        if (VAR_23 > 42) {
                            if ((VAR_27[VAR_20]&2) || (VAR_27[VAR_20 + VAR_28]&2))
                                VAR_10 += VAR_23;
                            if ((VAR_27[VAR_20]&4) || (VAR_27[VAR_20 + VAR_28]&4))
                                VAR_11 += VAR_23;
                        }
                    }
                }
            }
            VAR_45 += VAR_34;
            VAR_46 += VAR_34;
            VAR_42 += VAR_31;
            VAR_43 += VAR_31;
            VAR_44 += VAR_31;
            VAR_47 += VAR_35;
            VAR_48 += VAR_35;
            VAR_27 += VAR_28;
        }
    }

    if (VAR_7 < 500 && VAR_10 < 500 && (VAR_8 >= 500 || VAR_11 >= 500) &&
        FUNC_0(VAR_8,VAR_11) > 3*FUNC_1(VAR_8,VAR_11)) {
        VAR_7 = VAR_8;
        VAR_10 = VAR_11;
    }

    VAR_12 = (int)((VAR_6 / 6.0f) + 0.5f);
    VAR_13 = (int)((VAR_9 / 6.0f) + 0.5f);
    VAR_14 = (int)((VAR_7 / 6.0f) + 0.5f);
    VAR_15 = (int)((VAR_10 / 6.0f) + 0.5f);
    VAR_16 = ((float)FUNC_0(VAR_12,VAR_13)) / ((float)FUNC_0(FUNC_1(VAR_12,VAR_13),1));
    VAR_17 = ((float)FUNC_0(VAR_14, VAR_15)) / ((float)FUNC_0(FUNC_1(VAR_14, VAR_15), 1));
    VAR_18 = ((float)FUNC_0(VAR_14, VAR_15)) / ((float)FUNC_0(FUNC_0(VAR_12,VAR_13),1));
    if (((VAR_14 >= 500 || VAR_15 >= 500) && (VAR_14*2 < VAR_15*1 || VAR_15*2 < VAR_14*1)) ||
        ((VAR_14 >= 1000 || VAR_15 >= 1000) && (VAR_14*3 < VAR_15*2 || VAR_15*3 < VAR_14*2)) ||
        ((VAR_14 >= 2000 || VAR_15 >= 2000) && (VAR_14*5 < VAR_15*4 || VAR_15*5 < VAR_14*4)) ||
        ((VAR_14 >= 4000 || VAR_15 >= 4000) && VAR_17 > VAR_16))
        VAR_5 = VAR_14 > VAR_15 ? VAR_2 : VAR_1;
    else if (VAR_18 > 0.005 && FUNC_0(VAR_14, VAR_15) > 150 && (VAR_14*2 < VAR_15*1 || VAR_15*2 < VAR_14*1))
        VAR_5 = VAR_14 > VAR_15 ? VAR_2 : VAR_1;
    else
        VAR_5 = VAR_12 > VAR_13 ? VAR_2 : VAR_1;
    return VAR_5;
}
