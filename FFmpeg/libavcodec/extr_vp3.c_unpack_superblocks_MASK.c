
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int table; } ;
struct TYPE_8__ {int table; } ;
struct TYPE_9__ {int u_superblock_start; int v_superblock_start; int* superblock_coding; int superblock_count; int* macroblock_coding; int macroblock_count; int** coded_fragment_list; int* kf_coded_fragment_list; int* nkf_coded_fragment_list; int c_superblock_count; int y_superblock_count; int* num_kf_coded_fragment; int* superblock_fragments; int** num_coded_frags; scalar_t__ total_num_coded_frags; TYPE_2__* all_fragments; TYPE_1__ fragment_run_length_vlc; scalar_t__ keyframe; int avctx; TYPE_3__ superblock_run_length_vlc; scalar_t__ theora; } ;
typedef TYPE_4__ Vp3DecodeContext ;
struct TYPE_7__ {int coding_method; } ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int,int) ;
 int FUNC_5 (int*,int,int) ;

__attribute__((used)) static int FUNC_6(Vp3DecodeContext *VAR_8, GetBitContext *VAR_9)
{
    int VAR_10[3] = {
        0, VAR_8->u_superblock_start, VAR_8->v_superblock_start
    };
    int VAR_11 = 0;
    int VAR_12 = 0;
    int VAR_13 = 0;
    int VAR_14 = 0;

    int VAR_15, VAR_16;
    int VAR_17;
    int VAR_18;
    int VAR_19 = 0;

    if (VAR_8->keyframe) {
        FUNC_5(VAR_8->superblock_coding, VAR_5, VAR_8->superblock_count);
    } else {

        VAR_11 = FUNC_2(VAR_9) ^ 1;
        VAR_13 = 0;

        while (VAR_12 < VAR_8->superblock_count && FUNC_3(VAR_9) > 0) {
            if (VAR_8->theora && VAR_13 == VAR_2)
                VAR_11 = FUNC_2(VAR_9);
            else
                VAR_11 ^= 1;

            VAR_13 = FUNC_4(VAR_9, VAR_8->superblock_run_length_vlc.table,
                                   6, 2) + 1;
            if (VAR_13 == 34)
                VAR_13 += FUNC_1(VAR_9, 12);

            if (VAR_13 > VAR_8->superblock_count - VAR_12) {
                FUNC_0(VAR_8->avctx, VAR_1,
                       "Invalid partially coded superblock run length\n");
                return -1;
            }

            FUNC_5(VAR_8->superblock_coding + VAR_12, VAR_11, VAR_13);

            VAR_12 += VAR_13;
            if (VAR_11)
                VAR_14 += VAR_13;
        }



        if (VAR_14 < VAR_8->superblock_count) {
            int VAR_20 = 0;

            VAR_12 = 0;
            VAR_11 = FUNC_2(VAR_9) ^ 1;
            VAR_13 = 0;

            while (VAR_20 < VAR_8->superblock_count - VAR_14 &&
                   FUNC_3(VAR_9) > 0) {
                if (VAR_8->theora && VAR_13 == VAR_2)
                    VAR_11 = FUNC_2(VAR_9);
                else
                    VAR_11 ^= 1;

                VAR_13 = FUNC_4(VAR_9, VAR_8->superblock_run_length_vlc.table,
                                       6, 2) + 1;
                if (VAR_13 == 34)
                    VAR_13 += FUNC_1(VAR_9, 12);

                for (VAR_16 = 0; VAR_16 < VAR_13; VAR_12++) {
                    if (VAR_12 >= VAR_8->superblock_count) {
                        FUNC_0(VAR_8->avctx, VAR_1,
                               "Invalid fully coded superblock run length\n");
                        return -1;
                    }


                    if (VAR_8->superblock_coding[VAR_12] == VAR_6) {
                        VAR_8->superblock_coding[VAR_12] = 2 * VAR_11;
                        VAR_16++;
                    }
                }
                VAR_20 += VAR_13;
            }
        }



        if (VAR_14) {
            VAR_13 = 0;
            VAR_11 = FUNC_2(VAR_9);


            VAR_11 ^= 1;
        }
    }



    VAR_8->total_num_coded_frags = 0;
    FUNC_5(VAR_8->macroblock_coding, VAR_3, VAR_8->macroblock_count);

    VAR_8->coded_fragment_list[0] = VAR_8->keyframe ? VAR_8->kf_coded_fragment_list
                                            : VAR_8->nkf_coded_fragment_list;

    for (VAR_18 = 0; VAR_18 < 3; VAR_18++) {
        int VAR_21 = VAR_10[VAR_18];
        int VAR_22 = VAR_21 + (VAR_18 ? VAR_8->c_superblock_count
                                         : VAR_8->y_superblock_count);
        int VAR_23 = 0;

        if (VAR_8->keyframe) {
            if (VAR_8->num_kf_coded_fragment[VAR_18] == -1) {
                for (VAR_15 = VAR_21; VAR_15 < VAR_22; VAR_15++) {

                    for (VAR_16 = 0; VAR_16 < 16; VAR_16++) {

                        VAR_17 = VAR_8->superblock_fragments[VAR_15 * 16 + VAR_16];
                        if (VAR_17 != -1) {
                            VAR_8->coded_fragment_list[VAR_18][VAR_23++] =
                                VAR_17;
                        }
                    }
                }
                VAR_8->num_kf_coded_fragment[VAR_18] = VAR_23;
            } else
                VAR_23 = VAR_8->num_kf_coded_fragment[VAR_18];
        } else {
            for (VAR_15 = VAR_21; VAR_15 < VAR_22 && FUNC_3(VAR_9) > 0; VAR_15++) {
                if (FUNC_3(VAR_9) < VAR_19 >> 2) {
                    return VAR_0;
                }

                for (VAR_16 = 0; VAR_16 < 16; VAR_16++) {

                    VAR_17 = VAR_8->superblock_fragments[VAR_15 * 16 + VAR_16];
                    if (VAR_17 != -1) {
                        int VAR_24 = VAR_8->superblock_coding[VAR_15];

                        if (VAR_24 == VAR_7) {


                            if (VAR_13-- == 0) {
                                VAR_11 ^= 1;
                                VAR_13 = FUNC_4(VAR_9, VAR_8->fragment_run_length_vlc.table, 5, 2);
                            }
                            VAR_24 = VAR_11;
                        }

                        if (VAR_24) {


                            VAR_8->all_fragments[VAR_17].coding_method =
                                VAR_4;
                            VAR_8->coded_fragment_list[VAR_18][VAR_23++] =
                                VAR_17;
                        } else {

                            VAR_8->all_fragments[VAR_17].coding_method =
                                VAR_3;
                        }
                    }
                }
            }
        }
        if (!VAR_18)
            VAR_19 = VAR_23;
        VAR_8->total_num_coded_frags += VAR_23;
        for (VAR_15 = 0; VAR_15 < 64; VAR_15++)
            VAR_8->num_coded_frags[VAR_18][VAR_15] = VAR_23;
        if (VAR_18 < 2)
            VAR_8->coded_fragment_list[VAR_18 + 1] = VAR_8->coded_fragment_list[VAR_18] +
                                                VAR_23;
    }
    return 0;
}
