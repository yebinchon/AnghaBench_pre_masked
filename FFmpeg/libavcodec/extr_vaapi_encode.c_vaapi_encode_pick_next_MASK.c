
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ type; int nb_refs; int is_reference; int * ref_count; scalar_t__ force_idr; scalar_t__ encode_issued; struct TYPE_18__* next; int b_depth; TYPE_1__** refs; } ;
typedef TYPE_2__ VAAPIEncodePicture ;
struct TYPE_19__ {int idr_counter; int gop_per_idr; int b_per_p; int gop_counter; int gop_size; scalar_t__ input_order; scalar_t__ decode_delay; TYPE_2__* next_prev; scalar_t__ end_of_stream; TYPE_2__* pic_end; TYPE_2__* pic_start; scalar_t__ closed_gop; } ;
typedef TYPE_3__ VAAPIEncodeContext ;
struct TYPE_20__ {TYPE_3__* priv_data; } ;
struct TYPE_17__ {int encode_issued; } ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_4__*,int ,char*,...) ;
 int FUNC_3 (TYPE_4__*,TYPE_2__*,TYPE_2__*,int,int,int) ;
 int FUNC_4 (TYPE_4__*,TYPE_2__*,TYPE_2__*,TYPE_2__*,int,TYPE_2__**) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_7,
                                  VAAPIEncodePicture **VAR_8)
{
    VAAPIEncodeContext *VAR_9 = VAR_7->priv_data;
    VAAPIEncodePicture *VAR_10 = ((void*)0), *VAR_11, *VAR_12;
    int VAR_13, VAR_14, VAR_15;




    for (VAR_10 = VAR_9->pic_start; VAR_10; VAR_10 = VAR_10->next) {
        if (VAR_10->encode_issued)
            continue;
        if (VAR_10->type != VAR_3)
            continue;
        for (VAR_13 = 0; VAR_13 < VAR_10->nb_refs; VAR_13++) {
            if (!VAR_10->refs[VAR_13]->encode_issued)
                break;
        }
        if (VAR_13 == VAR_10->nb_refs)
            break;
    }

    if (VAR_10) {
        FUNC_2(VAR_7, VAR_1, "Pick B-picture at depth %d to "
               "encode next.\n", VAR_10->b_depth);
        *VAR_8 = VAR_10;
        return 0;
    }



    VAR_12 = ((void*)0);
    VAR_14 = 0;
    VAR_15 = VAR_9->closed_gop ||
                     VAR_9->idr_counter == VAR_9->gop_per_idr;
    for (VAR_10 = VAR_9->pic_start; VAR_10; VAR_10 = VAR_11) {
        VAR_11 = VAR_10->next;
        if (VAR_10->encode_issued) {
            VAR_12 = VAR_10;
            continue;
        }


        if (VAR_10->force_idr)
            break;
        if (VAR_14 == VAR_9->b_per_p)
            break;


        if (VAR_9->gop_counter + VAR_14 + VAR_15 >= VAR_9->gop_size)
            break;


        if (VAR_11 && VAR_11->force_idr)
            break;
        ++VAR_14;
    }


    if (!VAR_10 && VAR_9->end_of_stream) {
        --VAR_14;
        VAR_10 = VAR_9->pic_end;
        if (VAR_10->encode_issued)
            return VAR_0;
    }

    if (!VAR_10) {
        FUNC_2(VAR_7, VAR_1, "Pick nothing to encode next - "
               "need more input for reference pictures.\n");
        return FUNC_0(VAR_2);
    }
    if (VAR_9->input_order <= VAR_9->decode_delay && !VAR_9->end_of_stream) {
        FUNC_2(VAR_7, VAR_1, "Pick nothing to encode next - "
               "need more input for timestamps.\n");
        return FUNC_0(VAR_2);
    }

    if (VAR_10->force_idr) {
        FUNC_2(VAR_7, VAR_1, "Pick forced IDR-picture to "
               "encode next.\n");
        VAR_10->type = VAR_5;
        VAR_9->idr_counter = 1;
        VAR_9->gop_counter = 1;

    } else if (VAR_9->gop_counter + VAR_14 >= VAR_9->gop_size) {
        if (VAR_9->idr_counter == VAR_9->gop_per_idr) {
            FUNC_2(VAR_7, VAR_1, "Pick new-GOP IDR-picture to "
                   "encode next.\n");
            VAR_10->type = VAR_5;
            VAR_9->idr_counter = 1;
        } else {
            FUNC_2(VAR_7, VAR_1, "Pick new-GOP I-picture to "
                   "encode next.\n");
            VAR_10->type = VAR_4;
            ++VAR_9->idr_counter;
        }
        VAR_9->gop_counter = 1;

    } else {
        if (VAR_9->gop_counter + VAR_14 + VAR_15 == VAR_9->gop_size) {
            FUNC_2(VAR_7, VAR_1, "Pick group-end P-picture to "
                   "encode next.\n");
        } else {
            FUNC_2(VAR_7, VAR_1, "Pick normal P-picture to "
                   "encode next.\n");
        }
        VAR_10->type = VAR_6;
        FUNC_1(VAR_12);
        VAR_9->gop_counter += 1 + VAR_14;
    }
    VAR_10->is_reference = 1;
    *VAR_8 = VAR_10;

    FUNC_3(VAR_7, VAR_10, VAR_10, 0, 1, 0);
    if (VAR_10->type != VAR_5) {
        FUNC_3(VAR_7, VAR_10, VAR_12,
                             VAR_10->type == VAR_6,
                             VAR_14 > 0, 0);
        FUNC_3(VAR_7, VAR_10, VAR_9->next_prev, 0, 0, 1);
    }
    if (VAR_9->next_prev)
        --VAR_9->next_prev->ref_count[0];

    if (VAR_14 > 0) {
        FUNC_4(VAR_7, VAR_12, VAR_10, VAR_10, 1,
                                    &VAR_9->next_prev);
    } else {
        VAR_9->next_prev = VAR_10;
    }
    ++VAR_9->next_prev->ref_count[0];
    return 0;
}
