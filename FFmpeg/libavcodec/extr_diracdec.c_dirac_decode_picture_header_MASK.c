
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef scalar_t__ int64_t ;
struct TYPE_19__ {scalar_t__ display_picture_number; int * data; } ;
struct TYPE_18__ {TYPE_7__* avframe; } ;
struct TYPE_17__ {unsigned int frame_number; int num_refs; TYPE_5__** ref_frames; int avctx; TYPE_13__* current_picture; TYPE_5__** ref_pics; TYPE_5__* all_frames; int gb; } ;
struct TYPE_16__ {int reference; } ;
struct TYPE_15__ {unsigned int display_picture_number; } ;
struct TYPE_14__ {scalar_t__ reference; TYPE_1__* avframe; } ;
typedef int GetBitContext ;
typedef TYPE_2__ DiracFrame ;
typedef TYPE_3__ DiracContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_5__**,int,TYPE_13__*) ;
 int FUNC_2 (int ,int ,char*,...) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 unsigned int FUNC_7 (int *,int) ;
 int FUNC_8 (int ,TYPE_7__*,int ) ;
 int FUNC_9 (TYPE_3__*) ;
 TYPE_2__* FUNC_10 (TYPE_5__**,unsigned int) ;

__attribute__((used)) static int FUNC_11(DiracContext *VAR_8)
{
    unsigned VAR_9, VAR_10;
    int VAR_11, VAR_12, VAR_13;
    int64_t VAR_14, VAR_15;
    GetBitContext *VAR_16 = &VAR_8->gb;


    VAR_10 = VAR_8->current_picture->avframe->display_picture_number = FUNC_7(VAR_16, 32);


    FUNC_2(VAR_8->avctx,VAR_2,"PICTURE_NUM: %d\n",VAR_10);



    if (VAR_8->frame_number < 0)
        VAR_8->frame_number = VAR_10;

    VAR_8->ref_pics[0] = VAR_8->ref_pics[1] = ((void*)0);
    for (VAR_11 = 0; VAR_11 < VAR_8->num_refs; VAR_11++) {
        VAR_15 = (VAR_10 + FUNC_3(VAR_16)) & 0xFFFFFFFF;
        VAR_14 = VAR_5;



        for (VAR_12 = 0; VAR_12 < VAR_7 && VAR_14; VAR_12++)
            if (VAR_8->ref_frames[VAR_12]
                && FUNC_0(VAR_8->ref_frames[VAR_12]->avframe->display_picture_number - VAR_15) < VAR_14) {
                VAR_8->ref_pics[VAR_11] = VAR_8->ref_frames[VAR_12];
                VAR_14 = FUNC_0(VAR_8->ref_frames[VAR_12]->avframe->display_picture_number - VAR_15);
            }

        if (!VAR_8->ref_pics[VAR_11] || VAR_14)
            FUNC_2(VAR_8->avctx, VAR_2, "Reference not found\n");


        if (!VAR_8->ref_pics[VAR_11])
            for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++)
                if (!VAR_8->all_frames[VAR_12].avframe->data[0]) {
                    VAR_8->ref_pics[VAR_11] = &VAR_8->all_frames[VAR_12];
                    VAR_13 = FUNC_8(VAR_8->avctx, VAR_8->ref_pics[VAR_11]->avframe, VAR_1);
                    if (VAR_13 < 0)
                        return VAR_13;
                    break;
                }

        if (!VAR_8->ref_pics[VAR_11]) {
            FUNC_2(VAR_8->avctx, VAR_3, "Reference could not be allocated\n");
            return VAR_0;
        }

    }


    if (VAR_8->current_picture->reference) {
        VAR_9 = (VAR_10 + FUNC_3(VAR_16)) & 0xFFFFFFFF;
        if (VAR_9 != VAR_10) {
            DiracFrame *VAR_17 = FUNC_10(VAR_8->ref_frames, VAR_9);

            if (VAR_17)
                VAR_17->reference &= VAR_4;
            else
                FUNC_2(VAR_8->avctx, VAR_2, "Frame to retire not found\n");
        }


        while (FUNC_1(VAR_8->ref_frames, VAR_7, VAR_8->current_picture)) {
            FUNC_2(VAR_8->avctx, VAR_3, "Reference frame overflow\n");
            FUNC_10(VAR_8->ref_frames, VAR_8->ref_frames[0]->avframe->display_picture_number)->reference &= VAR_4;
        }
    }

    if (VAR_8->num_refs) {
        VAR_13 = FUNC_6(VAR_8);
        if (VAR_13 < 0)
            return VAR_13;
        VAR_13 = FUNC_4(VAR_8);
        if (VAR_13 < 0)
            return VAR_13;
    }
    VAR_13 = FUNC_5(VAR_8);
    if (VAR_13 < 0)
        return VAR_13;

    FUNC_9(VAR_8);
    return 0;
}
