
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int esc3_level_length; int esc3_run_length; int gb; } ;
struct TYPE_6__ {int pq; TYPE_1__ s; scalar_t__ dquantfrm; } ;
typedef TYPE_2__ VC1Context ;
struct TYPE_7__ {int table; } ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_4__* VAR_2 ;
 int* VAR_3 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int ,int ,int) ;
 scalar_t__** VAR_4 ;
 scalar_t__** VAR_5 ;
 int*** VAR_6 ;
 int* VAR_7 ;
 scalar_t__** VAR_8 ;
 scalar_t__** VAR_9 ;

__attribute__((used)) static int FUNC_6(VC1Context *VAR_10, int *VAR_11, int *VAR_12,
                                int *VAR_13, int VAR_14)
{
    GetBitContext *VAR_15 = &VAR_10->s.gb;
    int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;

    VAR_16 = FUNC_5(VAR_15, VAR_2[VAR_14].table, VAR_0, 3);
    if (VAR_16 < 0)
        return VAR_16;
    if (VAR_16 != VAR_3[VAR_14] - 1) {
        VAR_17 = VAR_6[VAR_14][VAR_16][0];
        VAR_18 = VAR_6[VAR_14][VAR_16][1];
        VAR_19 = VAR_16 >= VAR_7[VAR_14] || FUNC_3(VAR_15) < 0;
        VAR_20 = FUNC_2(VAR_15);
    } else {
        int VAR_21 = FUNC_0(VAR_15);
        if (VAR_21 != 2) {
            VAR_16 = FUNC_5(VAR_15, VAR_2[VAR_14].table, VAR_0, 3);
            if (VAR_16 >= VAR_3[VAR_14] - 1U)
                return VAR_1;
            VAR_17 = VAR_6[VAR_14][VAR_16][0];
            VAR_18 = VAR_6[VAR_14][VAR_16][1];
            VAR_19 = VAR_16 >= VAR_7[VAR_14];
            if (VAR_21 == 0) {
                if (VAR_19)
                    VAR_18 += VAR_8[VAR_14][VAR_17];
                else
                    VAR_18 += VAR_4[VAR_14][VAR_17];
            } else {
                if (VAR_19)
                    VAR_17 += VAR_9[VAR_14][VAR_18] + 1;
                else
                    VAR_17 += VAR_5[VAR_14][VAR_18] + 1;
            }
            VAR_20 = FUNC_2(VAR_15);
        } else {
            VAR_19 = FUNC_2(VAR_15);
            if (VAR_10->s.esc3_level_length == 0) {
                if (VAR_10->pq < 8 || VAR_10->dquantfrm) {
                    VAR_10->s.esc3_level_length = FUNC_1(VAR_15, 3);
                    if (!VAR_10->s.esc3_level_length)
                        VAR_10->s.esc3_level_length = FUNC_1(VAR_15, 2) + 8;
                } else {
                    VAR_10->s.esc3_level_length = FUNC_4(VAR_15, 1, 6) + 2;
                }
                VAR_10->s.esc3_run_length = 3 + FUNC_1(VAR_15, 2);
            }
            VAR_17 = FUNC_1(VAR_15, VAR_10->s.esc3_run_length);
            VAR_20 = FUNC_2(VAR_15);
            VAR_18 = FUNC_1(VAR_15, VAR_10->s.esc3_level_length);
        }
    }

    *VAR_11 = VAR_19;
    *VAR_12 = VAR_17;
    *VAR_13 = (VAR_18 ^ -VAR_20) + VAR_20;

    return 0;
}
