
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* sps; } ;
struct TYPE_11__ {scalar_t__ threads_type; TYPE_3__ ps; TYPE_1__* ref; } ;
struct TYPE_10__ {int poc; int tf; int * tab_mvf; } ;
struct TYPE_8__ {int min_pu_width; int log2_ctb_size; int height; int width; int log2_min_pu_size; } ;
struct TYPE_7__ {TYPE_4__* collocated_ref; } ;
typedef int MvField ;
typedef int Mv ;
typedef TYPE_4__ HEVCFrame ;
typedef TYPE_5__ HEVCContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int FUNC_3(HEVCContext *VAR_2, int VAR_3, int VAR_4,
                                       int VAR_5, int VAR_6, int VAR_7,
                                       Mv *VAR_8, int VAR_9)
{
    MvField *VAR_10;
    MvField VAR_11;
    int VAR_12, VAR_13, VAR_14, VAR_15;
    int VAR_16 = VAR_2->ps.sps->min_pu_width;
    int VAR_17 = 0;
    int VAR_18;

    HEVCFrame *VAR_19 = VAR_2->ref->collocated_ref;

    if (!VAR_19) {
        FUNC_2(VAR_8, 0, sizeof(*VAR_8));
        return 0;
    }

    VAR_10 = VAR_19->tab_mvf;
    VAR_18 = VAR_19->poc;


    VAR_12 = VAR_3 + VAR_5;
    VAR_13 = VAR_4 + VAR_6;

    if (VAR_10 &&
        (VAR_4 >> VAR_2->ps.sps->log2_ctb_size) == (VAR_13 >> VAR_2->ps.sps->log2_ctb_size) &&
        VAR_13 < VAR_2->ps.sps->height &&
        VAR_12 < VAR_2->ps.sps->width) {
        VAR_12 &= ~15;
        VAR_13 &= ~15;
        if (VAR_2->threads_type == VAR_1)
            FUNC_1(&VAR_19->tf, VAR_13, 0);
        VAR_14 = VAR_12 >> VAR_2->ps.sps->log2_min_pu_size;
        VAR_15 = VAR_13 >> VAR_2->ps.sps->log2_min_pu_size;
        VAR_11 = FUNC_0(VAR_14, VAR_15);
        VAR_17 = VAR_0;
    }


    if (VAR_10 && !VAR_17) {
        VAR_12 = VAR_3 + (VAR_5 >> 1);
        VAR_13 = VAR_4 + (VAR_6 >> 1);
        VAR_12 &= ~15;
        VAR_13 &= ~15;
        if (VAR_2->threads_type == VAR_1)
            FUNC_1(&VAR_19->tf, VAR_13, 0);
        VAR_14 = VAR_12 >> VAR_2->ps.sps->log2_min_pu_size;
        VAR_15 = VAR_13 >> VAR_2->ps.sps->log2_min_pu_size;
        VAR_11 = FUNC_0(VAR_14, VAR_15);
        VAR_17 = VAR_0;
    }
    return VAR_17;
}
