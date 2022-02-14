
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_13__ {scalar_t__ strict_std_compliance; int has_b_frames; int frame_number; int flags; int flags2; } ;
struct TYPE_8__ {TYPE_3__* sps; } ;
struct TYPE_12__ {int mmco_reset; scalar_t__* last_pocs; scalar_t__ next_outputed_poc; int frame_recovered; TYPE_7__* avctx; TYPE_4__* next_output_pic; TYPE_4__** delayed_pic; TYPE_4__* cur_pic_ptr; TYPE_1__ ps; } ;
struct TYPE_11__ {int mmco_reset; scalar_t__ poc; scalar_t__ reference; int recovered; TYPE_2__* f; } ;
struct TYPE_10__ {int num_reorder_frames; scalar_t__ bitstream_restriction_flag; } ;
struct TYPE_9__ {scalar_t__ pict_type; int flags; scalar_t__ key_frame; } ;
typedef TYPE_3__ SPS ;
typedef TYPE_4__ H264Picture ;
typedef TYPE_5__ H264Context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_0 (int,int) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_7__*,int,char*,...) ;

__attribute__((used)) static int FUNC_3(H264Context *VAR_12)
{
    const SPS *VAR_13 = VAR_12->ps.sps;
    H264Picture *VAR_14 = VAR_12->cur_pic_ptr;
    H264Picture *VAR_15 = VAR_12->cur_pic_ptr;
    int VAR_16, VAR_17, VAR_18, VAR_19;

    VAR_15->mmco_reset = VAR_12->mmco_reset;
    VAR_12->mmco_reset = 0;

    if (VAR_13->bitstream_restriction_flag ||
        VAR_12->avctx->strict_std_compliance >= VAR_8) {
        VAR_12->avctx->has_b_frames = FUNC_0(VAR_12->avctx->has_b_frames, VAR_13->num_reorder_frames);
    }

    for (VAR_16 = 0; 1; VAR_16++) {
        if(VAR_16 == VAR_11 || VAR_15->poc < VAR_12->last_pocs[VAR_16]){
            if(VAR_16)
                VAR_12->last_pocs[VAR_16-1] = VAR_15->poc;
            break;
        } else if(VAR_16) {
            VAR_12->last_pocs[VAR_16-1]= VAR_12->last_pocs[VAR_16];
        }
    }
    VAR_18 = VAR_11 - VAR_16;
    if( VAR_15->f->pict_type == VAR_6
       || (VAR_12->last_pocs[VAR_11-2] > VAR_10 && VAR_12->last_pocs[VAR_11-1] - (int64_t)VAR_12->last_pocs[VAR_11-2] > 2))
        VAR_18 = FUNC_0(VAR_18, 1);
    if (VAR_18 == VAR_11) {
        FUNC_2(VAR_12->avctx, VAR_4, "Invalid POC %d<%d\n", VAR_15->poc, VAR_12->last_pocs[0]);
        for (VAR_16 = 1; VAR_16 < VAR_11; VAR_16++)
            VAR_12->last_pocs[VAR_16] = VAR_10;
        VAR_12->last_pocs[0] = VAR_15->poc;
        VAR_15->mmco_reset = 1;
    } else if(VAR_12->avctx->has_b_frames < VAR_18 && !VAR_13->bitstream_restriction_flag){
        int VAR_20 = VAR_12->avctx->frame_number > 1 ? VAR_5 : VAR_4;
        FUNC_2(VAR_12->avctx, VAR_20, "Increasing reorder buffer to %d\n", VAR_18);
        VAR_12->avctx->has_b_frames = VAR_18;
    }

    VAR_17 = 0;
    while (VAR_12->delayed_pic[VAR_17])
        VAR_17++;

    FUNC_1(VAR_17 <= VAR_11);

    VAR_12->delayed_pic[VAR_17++] = VAR_15;
    if (VAR_15->reference == 0)
        VAR_15->reference = VAR_7;

    VAR_14 = VAR_12->delayed_pic[0];
    VAR_19 = 0;
    for (VAR_16 = 1; VAR_12->delayed_pic[VAR_16] &&
                !VAR_12->delayed_pic[VAR_16]->f->key_frame &&
                !VAR_12->delayed_pic[VAR_16]->mmco_reset;
         VAR_16++)
        if (VAR_12->delayed_pic[VAR_16]->poc < VAR_14->poc) {
            VAR_14 = VAR_12->delayed_pic[VAR_16];
            VAR_19 = VAR_16;
        }
    if (VAR_12->avctx->has_b_frames == 0 &&
        (VAR_12->delayed_pic[0]->f->key_frame || VAR_12->delayed_pic[0]->mmco_reset))
        VAR_12->next_outputed_poc = VAR_10;
    VAR_18 = VAR_14->poc < VAR_12->next_outputed_poc;

    if (VAR_18 || VAR_17 > VAR_12->avctx->has_b_frames) {
        VAR_14->reference &= ~VAR_7;
        for (VAR_16 = VAR_19; VAR_12->delayed_pic[VAR_16]; VAR_16++)
            VAR_12->delayed_pic[VAR_16] = VAR_12->delayed_pic[VAR_16 + 1];
    }
    if (!VAR_18 && VAR_17 > VAR_12->avctx->has_b_frames) {
        VAR_12->next_output_pic = VAR_14;
        if (VAR_19 == 0 && VAR_12->delayed_pic[0] && (VAR_12->delayed_pic[0]->f->key_frame || VAR_12->delayed_pic[0]->mmco_reset)) {
            VAR_12->next_outputed_poc = VAR_10;
        } else
            VAR_12->next_outputed_poc = VAR_14->poc;

        if (VAR_14->recovered) {


            VAR_12->frame_recovered |= VAR_9;
        }
        VAR_14->recovered |= !!(VAR_12->frame_recovered & VAR_9);

        if (!VAR_14->recovered) {
            if (!(VAR_12->avctx->flags & VAR_1) &&
                !(VAR_12->avctx->flags2 & VAR_0)) {
                VAR_12->next_output_pic = ((void*)0);
            } else {
                VAR_14->f->flags |= VAR_2;
            }
        }
    } else {
        FUNC_2(VAR_12->avctx, VAR_3, "no picture %s\n", VAR_18 ? "ooo" : "");
    }

    return 0;
}
