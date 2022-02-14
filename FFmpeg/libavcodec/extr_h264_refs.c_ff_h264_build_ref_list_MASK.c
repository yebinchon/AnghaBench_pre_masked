
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_29__ {scalar_t__ pic_id; int reference; TYPE_3__* parent; int poc; } ;
struct TYPE_28__ {TYPE_7__* default_ref; int * last_pocs; int avctx; TYPE_5__** long_ref; TYPE_5__** short_ref; int short_ref_count; } ;
struct TYPE_27__ {int reference; int long_ref; int frame_num; int pic_id; } ;
struct TYPE_26__ {int list_count; int curr_pic_num; int* nb_ref_modifications; unsigned int const max_pic_num; int* ref_count; TYPE_7__** ref_list; TYPE_2__** ref_modifications; } ;
struct TYPE_25__ {scalar_t__ long_ref; TYPE_1__* f; } ;
struct TYPE_24__ {unsigned int op; unsigned int val; } ;
struct TYPE_23__ {int * buf; } ;
typedef TYPE_4__ H264SliceContext ;
typedef TYPE_5__ H264Picture ;
typedef TYPE_6__ H264Context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 scalar_t__ FUNC_2 (TYPE_6__*) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,char*,...) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_6__*,TYPE_4__*) ;
 int FUNC_9 (TYPE_7__*,int ,int) ;
 scalar_t__ FUNC_10 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_11 (TYPE_7__*,int) ;
 int FUNC_12 (TYPE_6__*,unsigned int,int*) ;
 int FUNC_13 (TYPE_6__*) ;
 int FUNC_14 (TYPE_6__*) ;
 int FUNC_15 (TYPE_7__*,TYPE_5__*) ;

int FUNC_16(H264Context *VAR_3, H264SliceContext *VAR_4)
{
    int VAR_5, VAR_6, VAR_7;

    FUNC_14(VAR_3);
    FUNC_13(VAR_3);

    FUNC_8(VAR_3, VAR_4);

    for (VAR_5 = 0; VAR_5 < VAR_4->list_count; VAR_5++) {
        int VAR_8 = VAR_4->curr_pic_num;

        for (VAR_6 = 0; VAR_6 < VAR_4->nb_ref_modifications[VAR_5]; VAR_6++) {
            unsigned int VAR_9 = VAR_4->ref_modifications[VAR_5][VAR_6].op;
            unsigned int VAR_10 = VAR_4->ref_modifications[VAR_5][VAR_6].val;
            unsigned int VAR_11;
            int VAR_12;
            H264Picture *VAR_13 = ((void*)0);

            switch (VAR_9) {
            case 0:
            case 1: {
                const unsigned int VAR_14 = VAR_10 + 1;
                int VAR_15;

                if (VAR_14 > VAR_4->max_pic_num) {
                    FUNC_6(VAR_3->avctx, VAR_1,
                           "abs_diff_pic_num overflow\n");
                    return VAR_0;
                }

                if (VAR_9 == 0)
                    VAR_8 -= VAR_14;
                else
                    VAR_8 += VAR_14;
                VAR_8 &= VAR_4->max_pic_num - 1;

                VAR_15 = FUNC_12(VAR_3, VAR_8, &VAR_7);

                for (VAR_12 = VAR_3->short_ref_count - 1; VAR_12 >= 0; VAR_12--) {
                    VAR_13 = VAR_3->short_ref[VAR_12];
                    FUNC_3(VAR_13->reference);
                    FUNC_3(!VAR_13->long_ref);
                    if (VAR_13->frame_num == VAR_15 &&
                        (VAR_13->reference & VAR_7))
                        break;
                }
                if (VAR_12 >= 0)
                    VAR_13->pic_id = VAR_8;
                break;
            }
            case 2: {
                int VAR_16;
                VAR_11 = VAR_10;

                VAR_16 = FUNC_12(VAR_3, VAR_11, &VAR_7);

                if (VAR_16 > 31U) {
                    FUNC_6(VAR_3->avctx, VAR_1,
                           "long_term_pic_idx overflow\n");
                    return VAR_0;
                }
                VAR_13 = VAR_3->long_ref[VAR_16];
                FUNC_3(!(VAR_13 && !VAR_13->reference));
                if (VAR_13 && (VAR_13->reference & VAR_7)) {
                    VAR_13->pic_id = VAR_11;
                    FUNC_3(VAR_13->long_ref);
                    VAR_12 = 0;
                } else {
                    VAR_12 = -1;
                }
                break;
            }
            default:
                FUNC_4(0);
            }

            if (VAR_12 < 0 || FUNC_10(VAR_3, VAR_13)) {
                FUNC_6(VAR_3->avctx, VAR_1,
                       VAR_12 < 0 ? "reference picture missing during reorder\n" :
                               "mismatching reference\n"
                      );
                FUNC_9(&VAR_4->ref_list[VAR_5][VAR_6], 0, sizeof(VAR_4->ref_list[0][0]));
            } else {
                for (VAR_12 = VAR_6; VAR_12 + 1 < VAR_4->ref_count[VAR_5]; VAR_12++) {
                    if (VAR_4->ref_list[VAR_5][VAR_12].parent &&
                        VAR_13->long_ref == VAR_4->ref_list[VAR_5][VAR_12].parent->long_ref &&
                        VAR_13->pic_id == VAR_4->ref_list[VAR_5][VAR_12].pic_id)
                        break;
                }
                for (; VAR_12 > VAR_6; VAR_12--) {
                    VAR_4->ref_list[VAR_5][VAR_12] = VAR_4->ref_list[VAR_5][VAR_12 - 1];
                }
                FUNC_15(&VAR_4->ref_list[VAR_5][VAR_6], VAR_13);
                if (FUNC_1(VAR_3)) {
                    FUNC_11(&VAR_4->ref_list[VAR_5][VAR_6], VAR_7);
                }
            }
        }
    }
    for (VAR_5 = 0; VAR_5 < VAR_4->list_count; VAR_5++) {
        for (VAR_6 = 0; VAR_6 < VAR_4->ref_count[VAR_5]; VAR_6++) {
            if ( !VAR_4->ref_list[VAR_5][VAR_6].parent
                || (!FUNC_1(VAR_3) && (VAR_4->ref_list[VAR_5][VAR_6].reference&3) != 3)) {
                int VAR_17;
                FUNC_6(VAR_3->avctx, VAR_1, "Missing reference picture, default is %d\n", VAR_3->default_ref[VAR_5].poc);
                for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_3->last_pocs); VAR_17++)
                    VAR_3->last_pocs[VAR_17] = VAR_2;
                if (VAR_3->default_ref[VAR_5].parent
                    && !(!FUNC_1(VAR_3) && (VAR_3->default_ref[VAR_5].reference&3) != 3))
                    VAR_4->ref_list[VAR_5][VAR_6] = VAR_3->default_ref[VAR_5];
                else
                    return -1;
            }
            FUNC_4(FUNC_5(VAR_4->ref_list[VAR_5][VAR_6].parent->f->buf[0]) > 0);
        }
    }

    if (FUNC_2(VAR_3))
        FUNC_7(VAR_4);

    return 0;
}
