
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int table; } ;
struct TYPE_7__ {int total_num_coded_frags; int nqps; size_t** coded_fragment_list; TYPE_2__* all_fragments; TYPE_1__ superblock_run_length_vlc; } ;
typedef TYPE_3__ Vp3DecodeContext ;
struct TYPE_6__ {int qpi; } ;
typedef int GetBitContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int,int) ;

__attribute__((used)) static int FUNC_4(Vp3DecodeContext *VAR_1, GetBitContext *VAR_2)
{
    int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    int VAR_10 = VAR_1->total_num_coded_frags;

    for (VAR_3 = 0; VAR_3 < VAR_1->nqps - 1 && VAR_10 > 0; VAR_3++) {
        VAR_4 = VAR_8 = VAR_9 = 0;

        VAR_6 = FUNC_1(VAR_2) ^ 1;
        VAR_7 = 0;

        do {
            if (VAR_7 == VAR_0)
                VAR_6 = FUNC_1(VAR_2);
            else
                VAR_6 ^= 1;

            VAR_7 = FUNC_3(VAR_2, VAR_1->superblock_run_length_vlc.table, 6, 2) + 1;
            if (VAR_7 == 34)
                VAR_7 += FUNC_0(VAR_2, 12);
            VAR_8 += VAR_7;

            if (!VAR_6)
                VAR_9 += VAR_7;

            for (VAR_5 = 0; VAR_5 < VAR_7; VAR_4++) {
                if (VAR_4 >= VAR_1->total_num_coded_frags)
                    return -1;

                if (VAR_1->all_fragments[VAR_1->coded_fragment_list[0][VAR_4]].qpi == VAR_3) {
                    VAR_1->all_fragments[VAR_1->coded_fragment_list[0][VAR_4]].qpi += VAR_6;
                    VAR_5++;
                }
            }
        } while (VAR_8 < VAR_10 && FUNC_2(VAR_2) > 0);

        VAR_10 -= VAR_9;
    }

    return 0;
}
