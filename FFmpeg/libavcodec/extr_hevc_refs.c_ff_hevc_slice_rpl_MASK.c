
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_12__ {scalar_t__ slice_type; int* nb_refs; int** list_entry_lx; size_t collocated_list; size_t collocated_ref_idx; scalar_t__* rpl_modification_flag; } ;
struct TYPE_14__ {TYPE_2__* ref; int avctx; TYPE_4__* rps; TYPE_3__ sh; } ;
struct TYPE_10__ {int member_0; } ;
struct TYPE_13__ {int nb_refs; int* isLongTerm; int * ref; int * list; TYPE_1__ member_0; } ;
struct TYPE_11__ {int collocated_ref; TYPE_4__* refPicList; } ;
typedef TYPE_3__ SliceHeader ;
typedef TYPE_4__ RefPicList ;
typedef TYPE_5__ HEVCContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_4__*,int) ;

int FUNC_5(HEVCContext *VAR_7)
{
    SliceHeader *VAR_8 = &VAR_7->sh;

    uint8_t VAR_9 = VAR_8->slice_type == VAR_3 ? 2 : 1;
    uint8_t VAR_10;
    int VAR_11, VAR_12, VAR_13;

    VAR_13 = FUNC_3(VAR_7);
    if (VAR_13 < 0)
        return VAR_13;

    if (!(VAR_7->rps[VAR_6].nb_refs + VAR_7->rps[VAR_5].nb_refs +
          VAR_7->rps[VAR_4].nb_refs)) {
        FUNC_2(VAR_7->avctx, VAR_1, "Zero refs in the frame RPS.\n");
        return VAR_0;
    }

    for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
        RefPicList VAR_14 = { 0 };
        RefPicList *VAR_15 = &VAR_7->ref->refPicList[VAR_10];




        int VAR_16[3] = { VAR_10 ? VAR_5 : VAR_6,
                              VAR_10 ? VAR_6 : VAR_5,
                              VAR_4 };


        while (VAR_14.nb_refs < VAR_8->nb_refs[VAR_10]) {
            for (VAR_11 = 0; VAR_11 < FUNC_1(VAR_16); VAR_11++) {
                RefPicList *VAR_17 = &VAR_7->rps[VAR_16[VAR_11]];
                for (VAR_12 = 0; VAR_12 < VAR_17->nb_refs && VAR_14.nb_refs < VAR_2; VAR_12++) {
                    VAR_14.list[VAR_14.nb_refs] = VAR_17->list[VAR_12];
                    VAR_14.ref[VAR_14.nb_refs] = VAR_17->ref[VAR_12];
                    VAR_14.isLongTerm[VAR_14.nb_refs] = VAR_11 == 2;
                    VAR_14.nb_refs++;
                }
            }
        }


        if (VAR_8->rpl_modification_flag[VAR_10]) {
            for (VAR_11 = 0; VAR_11 < VAR_8->nb_refs[VAR_10]; VAR_11++) {
                int VAR_18 = VAR_8->list_entry_lx[VAR_10][VAR_11];

                if (VAR_18 >= VAR_14.nb_refs) {
                    FUNC_2(VAR_7->avctx, VAR_1, "Invalid reference index.\n");
                    return VAR_0;
                }

                VAR_15->list[VAR_11] = VAR_14.list[VAR_18];
                VAR_15->ref[VAR_11] = VAR_14.ref[VAR_18];
                VAR_15->isLongTerm[VAR_11] = VAR_14.isLongTerm[VAR_18];
                VAR_15->nb_refs++;
            }
        } else {
            FUNC_4(VAR_15, &VAR_14, sizeof(*VAR_15));
            VAR_15->nb_refs = FUNC_0(VAR_15->nb_refs, VAR_8->nb_refs[VAR_10]);
        }

        if (VAR_8->collocated_list == VAR_10 &&
            VAR_8->collocated_ref_idx < VAR_15->nb_refs)
            VAR_7->ref->collocated_ref = VAR_15->ref[VAR_8->collocated_ref_idx];
    }

    return 0;
}
