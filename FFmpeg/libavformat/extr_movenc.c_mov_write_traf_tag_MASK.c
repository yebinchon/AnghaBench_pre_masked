
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef void* int64_t ;
struct TYPE_16__ {void* tfrf_offset; } ;
struct TYPE_15__ {scalar_t__ mode; int ism_lookahead; } ;
struct TYPE_14__ {int entry; int nb_frag_info; TYPE_4__* frag_info; TYPE_1__* cluster; } ;
struct TYPE_13__ {scalar_t__ pos; scalar_t__ size; } ;
typedef TYPE_2__ MOVTrack ;
typedef TYPE_3__ MOVMuxContext ;
typedef TYPE_4__ MOVFragmentInfo ;
typedef int AVIOContext ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int *,TYPE_3__*,TYPE_2__*,void*) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 int FUNC_7 (int *,TYPE_3__*,TYPE_2__*,int,int,int) ;
 int FUNC_8 (int *,void*) ;

__attribute__((used)) static int FUNC_9(AVIOContext *VAR_1, MOVMuxContext *VAR_2,
                              MOVTrack *VAR_3, int64_t VAR_4,
                              int VAR_5)
{
    int64_t VAR_6 = FUNC_0(VAR_1);
    int VAR_7, VAR_8 = 0;
    FUNC_2(VAR_1, 0);
    FUNC_3(VAR_1, "traf");

    FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4);
    if (VAR_2->mode != VAR_0)
        FUNC_4(VAR_1, VAR_3);
    for (VAR_7 = 1; VAR_7 < VAR_3->entry; VAR_7++) {
        if (VAR_3->cluster[VAR_7].pos != VAR_3->cluster[VAR_7 - 1].pos + VAR_3->cluster[VAR_7 - 1].size) {
            FUNC_7(VAR_1, VAR_2, VAR_3, VAR_5, VAR_8, VAR_7);
            VAR_8 = VAR_7;
        }
    }
    FUNC_7(VAR_1, VAR_2, VAR_3, VAR_5, VAR_8, VAR_3->entry);
    if (VAR_2->mode == VAR_0) {
        FUNC_6(VAR_1, VAR_3);

        if (VAR_2->ism_lookahead) {
            int VAR_9, VAR_10 = 16 + 4 + 1 + 16 * VAR_2->ism_lookahead;

            if (VAR_3->nb_frag_info > 0) {
                MOVFragmentInfo *VAR_11 = &VAR_3->frag_info[VAR_3->nb_frag_info - 1];
                if (!VAR_11->tfrf_offset)
                    VAR_11->tfrf_offset = FUNC_0(VAR_1);
            }
            FUNC_2(VAR_1, 8 + VAR_10);
            FUNC_3(VAR_1, "free");
            for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
                FUNC_1(VAR_1, 0);
        }
    }

    return FUNC_8(VAR_1, VAR_6);
}
