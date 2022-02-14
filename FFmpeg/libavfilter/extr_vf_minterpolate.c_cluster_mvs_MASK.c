
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int cid; int** mvs; } ;
struct TYPE_8__ {int nb; int* sum; } ;
struct TYPE_7__ {int b_height; int b_width; int log2_mb_size; TYPE_3__* int_blocks; TYPE_2__* clusters; } ;
typedef TYPE_1__ MIContext ;
typedef TYPE_2__ Cluster ;
typedef TYPE_3__ Block ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,TYPE_3__*,int,int,int) ;

__attribute__((used)) static int FUNC_4(MIContext *VAR_2)
{
    int VAR_3, VAR_4, VAR_5 = 0;
    int VAR_6, VAR_7, VAR_8, VAR_9;
    int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    int VAR_16, VAR_17;
    Block *VAR_18;
    Cluster *VAR_19, *VAR_20;

    do {
        VAR_3 = 0;
        for (VAR_7 = 0; VAR_7 < VAR_2->b_height; VAR_7++)
            for (VAR_6 = 0; VAR_6 < VAR_2->b_width; VAR_6++) {
                VAR_18 = &VAR_2->int_blocks[VAR_6 + VAR_7 * VAR_2->b_width];
                VAR_4 = VAR_18->cid;
                VAR_19 = &VAR_2->clusters[VAR_4];
                VAR_10 = VAR_18->mvs[0][0];
                VAR_11 = VAR_18->mvs[0][1];

                if (VAR_19->nb < 2)
                    continue;

                VAR_12 = VAR_19->sum[0] / VAR_19->nb;
                VAR_13 = VAR_19->sum[1] / VAR_19->nb;
                VAR_14 = VAR_12 - VAR_10;
                VAR_15 = VAR_13 - VAR_11;

                if (FUNC_0(VAR_14) > VAR_0 || FUNC_0(VAR_15) > VAR_0) {

                    for (VAR_16 = 1; VAR_16 < 5; VAR_16++)
                        for (VAR_9 = FUNC_1(VAR_7 - VAR_16, 0); VAR_9 < FUNC_2(VAR_7 + VAR_16 + 1, VAR_2->b_height); VAR_9++)
                            for (VAR_8 = FUNC_1(VAR_6 - VAR_16, 0); VAR_8 < FUNC_2(VAR_6 + VAR_16 + 1, VAR_2->b_width); VAR_8++) {
                                Block *VAR_21 = &VAR_2->int_blocks[VAR_8 + VAR_9 * VAR_2->b_width];
                                if (VAR_21->cid > VAR_18->cid) {
                                    if (VAR_21->cid < VAR_4 || VAR_4 == VAR_18->cid)
                                        VAR_4 = VAR_21->cid;
                                }
                            }

                    if (VAR_4 == VAR_18->cid)
                        VAR_4 = VAR_5 + 1;

                    if (VAR_4 >= VAR_1) {
                        continue;
                    }

                    VAR_20 = &VAR_2->clusters[VAR_4];
                    VAR_20->sum[0] += VAR_10;
                    VAR_20->sum[1] += VAR_11;
                    VAR_19->sum[0] -= VAR_10;
                    VAR_19->sum[1] -= VAR_11;
                    VAR_20->nb++;
                    VAR_19->nb--;

                    VAR_5 = FUNC_1(VAR_5, VAR_4);
                    VAR_18->cid = VAR_4;

                    VAR_3 = 1;
                }
            }
    } while (VAR_3);


    for (VAR_7 = 0; VAR_7 < VAR_2->b_height; VAR_7++)
        for (VAR_6 = 0; VAR_6 < VAR_2->b_width; VAR_6++) {
            VAR_18 = &VAR_2->int_blocks[VAR_6 + VAR_7 * VAR_2->b_width];
            for (VAR_9 = FUNC_1(VAR_7 - 1, 0); VAR_9 < FUNC_2(VAR_7 + 2, VAR_2->b_height); VAR_9++)
                for (VAR_8 = FUNC_1(VAR_6 - 1, 0); VAR_8 < FUNC_2(VAR_6 + 2, VAR_2->b_width); VAR_8++) {
                    VAR_14 = VAR_8 - VAR_6;
                    VAR_15 = VAR_9 - VAR_7;

                    if ((VAR_8 - VAR_6) && (VAR_9 - VAR_7) || !VAR_14 && !VAR_15)
                        continue;

                    if (!VAR_6 || !VAR_7 || VAR_6 == VAR_2->b_width - 1 || VAR_7 == VAR_2->b_height - 1)
                        continue;

                    if (VAR_18->cid != VAR_2->int_blocks[VAR_8 + VAR_9 * VAR_2->b_width].cid) {
                        if (!VAR_14 && VAR_18->cid == VAR_2->int_blocks[VAR_8 + (VAR_7 - VAR_15) * VAR_2->b_width].cid ||
                            !VAR_15 && VAR_18->cid == VAR_2->int_blocks[(VAR_6 - VAR_14) + VAR_9 * VAR_2->b_width].cid) {
                            if ((VAR_17 = FUNC_3(VAR_2, VAR_18, VAR_6 << VAR_2->log2_mb_size, VAR_7 << VAR_2->log2_mb_size, VAR_2->log2_mb_size)))
                                return VAR_17;
                        }
                    }
                }
        }

    return 0;
}
