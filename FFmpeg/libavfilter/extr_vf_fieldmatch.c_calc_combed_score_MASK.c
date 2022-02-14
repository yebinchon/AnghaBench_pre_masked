
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_10__ {int** data; int* linesize; int width; int height; } ;
struct TYPE_9__ {int cthresh; int** cmask_data; int* cmask_linesize; int blockx; int blocky; int* c_array; int vsub; int hsub; scalar_t__ chroma; } ;
typedef TYPE_1__ FieldMatchContext ;
typedef TYPE_2__ AVFrame ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int,int,int) ;
 scalar_t__ FUNC_3 (int*,int const) ;
 int FUNC_4 (int,int const) ;
 int FUNC_5 (int const) ;
 int FUNC_6 (int*,int const,int const,int const,int) ;
 int FUNC_7 (TYPE_1__ const*,TYPE_2__ const*,int) ;
 int FUNC_8 (TYPE_1__ const*,TYPE_2__ const*,int) ;
 int FUNC_9 (int*,int ,int const) ;

__attribute__((used)) static int FUNC_10(const FieldMatchContext *VAR_0, const AVFrame *VAR_1)
{
    int VAR_2, VAR_3, VAR_4, VAR_5 = 0;
    const int VAR_6 = VAR_0->cthresh;
    const int VAR_7 = VAR_6 * 6;

    for (VAR_4 = 0; VAR_4 < (VAR_0->chroma ? 3 : 1); VAR_4++) {
        const uint8_t *VAR_8 = VAR_1->data[VAR_4];
        const int VAR_9 = VAR_1->linesize[VAR_4];
        const int VAR_10 = FUNC_8 (VAR_0, VAR_1, VAR_4);
        const int VAR_11 = FUNC_7(VAR_0, VAR_1, VAR_4);
        uint8_t *VAR_12 = VAR_0->cmask_data[VAR_4];
        const int VAR_13 = VAR_0->cmask_linesize[VAR_4];

        if (VAR_6 < 0) {
            FUNC_6(VAR_12, VAR_10, VAR_11, VAR_13, 0xff);
            continue;
        }
        FUNC_6(VAR_12, VAR_10, VAR_11, VAR_13, 0);
        for (VAR_2 = 0; VAR_2 < VAR_10; VAR_2++) {
            const int VAR_14 = FUNC_5(VAR_8[VAR_2] - VAR_8[VAR_2 + VAR_9]);
            if (VAR_14 > VAR_6 && FUNC_5( 4 * VAR_8[VAR_2] -3 * (VAR_8[VAR_2 + (1)*VAR_9] + VAR_8[VAR_2 + (1)*VAR_9]) + (VAR_8[VAR_2 + (2)*VAR_9] + VAR_8[VAR_2 + (2)*VAR_9])) > VAR_7)
                VAR_12[VAR_2] = 0xff;
        }
        VAR_8 += VAR_9;
        VAR_12 += VAR_13;


        for (VAR_2 = 0; VAR_2 < VAR_10; VAR_2++) {
            const int VAR_15 = FUNC_5(VAR_8[VAR_2] - VAR_8[VAR_2 - VAR_9]);
            const int VAR_16 = FUNC_5(VAR_8[VAR_2] - VAR_8[VAR_2 + VAR_9]);
            if (VAR_15 > VAR_6 && VAR_16 > VAR_6 && FUNC_5( 4 * VAR_8[VAR_2] -3 * (VAR_8[VAR_2 + (-1)*VAR_9] + VAR_8[VAR_2 + (1)*VAR_9]) + (VAR_8[VAR_2 + (2)*VAR_9] + VAR_8[VAR_2 + (2)*VAR_9])) > VAR_7)
                VAR_12[VAR_2] = 0xff;
        }
        VAR_8 += VAR_9;
        VAR_12 += VAR_13;


        for (VAR_3 = 2; VAR_3 < VAR_11-2; VAR_3++) {
            for (VAR_2 = 0; VAR_2 < VAR_10; VAR_2++) {
                const int VAR_17 = FUNC_5(VAR_8[VAR_2] - VAR_8[VAR_2 - VAR_9]);
                const int VAR_18 = FUNC_5(VAR_8[VAR_2] - VAR_8[VAR_2 + VAR_9]);
                if (VAR_17 > VAR_6 && VAR_18 > VAR_6 && FUNC_5( 4 * VAR_8[VAR_2] -3 * (VAR_8[VAR_2 + (-1)*VAR_9] + VAR_8[VAR_2 + (1)*VAR_9]) + (VAR_8[VAR_2 + (-2)*VAR_9] + VAR_8[VAR_2 + (2)*VAR_9])) > VAR_7)
                    VAR_12[VAR_2] = 0xff;
            }
            VAR_8 += VAR_9;
            VAR_12 += VAR_13;
        }


        for (VAR_2 = 0; VAR_2 < VAR_10; VAR_2++) {
            const int VAR_19 = FUNC_5(VAR_8[VAR_2] - VAR_8[VAR_2 - VAR_9]);
            const int VAR_20 = FUNC_5(VAR_8[VAR_2] - VAR_8[VAR_2 + VAR_9]);
            if (VAR_19 > VAR_6 && VAR_20 > VAR_6 && FUNC_5( 4 * VAR_8[VAR_2] -3 * (VAR_8[VAR_2 + (-1)*VAR_9] + VAR_8[VAR_2 + (1)*VAR_9]) + (VAR_8[VAR_2 + (-2)*VAR_9] + VAR_8[VAR_2 + (-2)*VAR_9])) > VAR_7)
                VAR_12[VAR_2] = 0xff;
        }
        VAR_8 += VAR_9;
        VAR_12 += VAR_13;


        for (VAR_2 = 0; VAR_2 < VAR_10; VAR_2++) {
            const int VAR_21 = FUNC_5(VAR_8[VAR_2] - VAR_8[VAR_2 - VAR_9]);
            if (VAR_21 > VAR_6 && FUNC_5( 4 * VAR_8[VAR_2] -3 * (VAR_8[VAR_2 + (-1)*VAR_9] + VAR_8[VAR_2 + (-1)*VAR_9]) + (VAR_8[VAR_2 + (-2)*VAR_9] + VAR_8[VAR_2 + (-2)*VAR_9])) > VAR_7)
                VAR_12[VAR_2] = 0xff;
        }
    }

    if (VAR_0->chroma) {
        uint8_t *VAR_22 = VAR_0->cmask_data[0];
        uint8_t *VAR_23 = VAR_0->cmask_data[1];
        uint8_t *VAR_24 = VAR_0->cmask_data[2];
        const int VAR_25 = FUNC_0(VAR_1->width, VAR_0->hsub);
        const int VAR_26 = FUNC_0(VAR_1->height, VAR_0->vsub);
        const int VAR_27 = VAR_0->cmask_linesize[0] << 1;
        const int VAR_28 = VAR_0->cmask_linesize[2];
        uint8_t *VAR_29 = VAR_22 - (VAR_27>>1);
        uint8_t *VAR_30 = VAR_22 + (VAR_27>>1);
        uint8_t *VAR_31 = VAR_22 + VAR_27;
        for (VAR_3 = 1; VAR_3 < VAR_26 - 1; VAR_3++) {
            VAR_29 += VAR_27;
            VAR_22 += VAR_27;
            VAR_30 += VAR_27;
            VAR_31 += VAR_27;
            VAR_24 += VAR_28;
            VAR_23 += VAR_28;
            for (VAR_2 = 1; VAR_2 < VAR_25 - 1; VAR_2++) {



                if ((VAR_24[VAR_2] == 0xff && (VAR_24[(VAR_2)-1 - (VAR_28)] == 0xff || VAR_24[(VAR_2) - (VAR_28)] == 0xff || VAR_24[(VAR_2)+1 - (VAR_28)] == 0xff || VAR_24[(VAR_2)-1 ] == 0xff || VAR_24[(VAR_2)+1 ] == 0xff || VAR_24[(VAR_2)-1 + (VAR_28)] == 0xff || VAR_24[(VAR_2) + (VAR_28)] == 0xff || VAR_24[(VAR_2)+1 + (VAR_28)] == 0xff)) ||
                    (VAR_23[VAR_2] == 0xff && (VAR_23[(VAR_2)-1 - (VAR_28)] == 0xff || VAR_23[(VAR_2) - (VAR_28)] == 0xff || VAR_23[(VAR_2)+1 - (VAR_28)] == 0xff || VAR_23[(VAR_2)-1 ] == 0xff || VAR_23[(VAR_2)+1 ] == 0xff || VAR_23[(VAR_2)-1 + (VAR_28)] == 0xff || VAR_23[(VAR_2) + (VAR_28)] == 0xff || VAR_23[(VAR_2)+1 + (VAR_28)] == 0xff))) {
                    ((uint16_t*)VAR_22)[VAR_2] = 0xffff;
                    ((uint16_t*)VAR_30)[VAR_2] = 0xffff;
                    if (VAR_3&1) ((uint16_t*)VAR_29)[VAR_2] = 0xffff;
                    else ((uint16_t*)VAR_31)[VAR_2] = 0xffff;
                }
            }
        }
    }

    {
        const int VAR_32 = VAR_0->blockx;
        const int VAR_33 = VAR_0->blocky;
        const int VAR_34 = VAR_32/2;
        const int VAR_35 = VAR_33/2;
        const int VAR_36 = VAR_0->cmask_linesize[0];
        const uint8_t *VAR_37 = VAR_0->cmask_data[0] + VAR_36;
        const int VAR_38 = VAR_1->width;
        const int VAR_39 = VAR_1->height;
        const int VAR_40 = ((VAR_38+VAR_34)/VAR_32) + 1;
        const int VAR_41 = VAR_40<<2;
        const int VAR_42 = ((VAR_39+VAR_35)/VAR_33) + 1;
        int *VAR_43 = VAR_0->c_array;
        const int VAR_44 = (VAR_40*VAR_42)<<2;
        int VAR_45 = (VAR_39/(VAR_33/2))*(VAR_33/2);
        const int VAR_46 = (VAR_38 /(VAR_32/2))*(VAR_32/2);
        if (VAR_45 == VAR_39)
            VAR_45 = VAR_39 - VAR_35;
        FUNC_9(VAR_43, 0, VAR_44 * sizeof(*VAR_43));
        do { for (VAR_3 = 1; VAR_3 < VAR_35; VAR_3++) { const int VAR_47 = (VAR_3 / VAR_33) * VAR_41; const int VAR_48 = ((VAR_3 + VAR_35) / VAR_33) * VAR_41; for (VAR_2 = 0; VAR_2 < VAR_38; VAR_2++) if (VAR_37[VAR_2 - VAR_36] == 0xff && VAR_37[VAR_2 ] == 0xff && VAR_37[VAR_2 + VAR_36] == 0xff) do { const int VAR_49 = (VAR_2 / VAR_32) * 4; const int VAR_50 = ((VAR_2 + VAR_34) / VAR_32) * 4; VAR_43[VAR_47 + VAR_49 ] += 1; VAR_43[VAR_47 + VAR_50 + 1] += 1; VAR_43[VAR_48 + VAR_49 + 2] += 1; VAR_43[VAR_48 + VAR_50 + 3] += 1; } while (0); VAR_37 += VAR_36; } } while (0);

        for (VAR_3 = VAR_35; VAR_3 < VAR_45; VAR_3 += VAR_35) {
            const int VAR_51 = (VAR_3 / VAR_33) * VAR_41;
            const int VAR_52 = ((VAR_3 + VAR_35) / VAR_33) * VAR_41;

            for (VAR_2 = 0; VAR_2 < VAR_46; VAR_2 += VAR_34) {
                const uint8_t *VAR_53 = VAR_37 + VAR_2;
                int VAR_54, VAR_55, VAR_56 = 0;
                for (VAR_54 = 0; VAR_54 < VAR_35; VAR_54++) {
                    for (VAR_55 = 0; VAR_55 < VAR_34; VAR_55++)
                        if (VAR_53[VAR_55 - VAR_36] == 0xff &&
                            VAR_53[VAR_55 ] == 0xff &&
                            VAR_53[VAR_55 + VAR_36] == 0xff)
                            VAR_56++;
                    VAR_53 += VAR_36;
                }
                if (VAR_56)
                    do { const int VAR_57 = (VAR_2 / VAR_32) * 4; const int VAR_58 = ((VAR_2 + VAR_34) / VAR_32) * 4; VAR_43[VAR_51 + VAR_57 ] += VAR_56; VAR_43[VAR_51 + VAR_58 + 1] += VAR_56; VAR_43[VAR_52 + VAR_57 + 2] += VAR_56; VAR_43[VAR_52 + VAR_58 + 3] += VAR_56; } while (0);
            }

            for (VAR_2 = VAR_46; VAR_2 < VAR_38; VAR_2++) {
                const uint8_t *VAR_59 = VAR_37 + VAR_2;
                int VAR_60, VAR_61 = 0;
                for (VAR_60 = 0; VAR_60 < VAR_35; VAR_60++) {
                    if (VAR_59[-VAR_36] == 0xff &&
                        VAR_59[ 0] == 0xff &&
                        VAR_59[ VAR_36] == 0xff)
                        VAR_61++;
                    VAR_59 += VAR_36;
                }
                if (VAR_61)
                    do { const int VAR_62 = (VAR_2 / VAR_32) * 4; const int VAR_63 = ((VAR_2 + VAR_34) / VAR_32) * 4; VAR_43[VAR_51 + VAR_62 ] += VAR_61; VAR_43[VAR_51 + VAR_63 + 1] += VAR_61; VAR_43[VAR_52 + VAR_62 + 2] += VAR_61; VAR_43[VAR_52 + VAR_63 + 3] += VAR_61; } while (0);
            }

            VAR_37 += VAR_36 * VAR_35;
        }

        do { for (VAR_3 = VAR_45; VAR_3 < VAR_39 - 1; VAR_3++) { const int VAR_64 = (VAR_3 / VAR_33) * VAR_41; const int VAR_65 = ((VAR_3 + VAR_35) / VAR_33) * VAR_41; for (VAR_2 = 0; VAR_2 < VAR_38; VAR_2++) if (VAR_37[VAR_2 - VAR_36] == 0xff && VAR_37[VAR_2 ] == 0xff && VAR_37[VAR_2 + VAR_36] == 0xff) do { const int VAR_66 = (VAR_2 / VAR_32) * 4; const int VAR_67 = ((VAR_2 + VAR_34) / VAR_32) * 4; VAR_43[VAR_64 + VAR_66 ] += 1; VAR_43[VAR_64 + VAR_67 + 1] += 1; VAR_43[VAR_65 + VAR_66 + 2] += 1; VAR_43[VAR_65 + VAR_67 + 3] += 1; } while (0); VAR_37 += VAR_36; } } while (0);

        for (VAR_2 = 0; VAR_2 < VAR_44; VAR_2++)
            if (VAR_43[VAR_2] > VAR_5)
                VAR_5 = VAR_43[VAR_2];
    }
    return VAR_5;
}
