
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_19__ ;
typedef struct TYPE_21__ TYPE_17__ ;
typedef struct TYPE_20__ TYPE_16__ ;


typedef char uint8_t ;
struct TYPE_30__ {TYPE_2__* avframe; } ;
struct TYPE_29__ {TYPE_4__* priv_data; } ;
struct TYPE_28__ {scalar_t__ display_picture_number; } ;
struct TYPE_27__ {char* data; int size; } ;
struct TYPE_26__ {scalar_t__ frame_number; TYPE_19__* current_picture; TYPE_9__** delay_frames; TYPE_7__* avctx; TYPE_1__* all_frames; } ;
struct TYPE_25__ {TYPE_17__* avframe; int reference; } ;
struct TYPE_24__ {int display_picture_number; } ;
struct TYPE_23__ {int interpolated; TYPE_16__* avframe; int reference; } ;
struct TYPE_22__ {TYPE_17__* avframe; int reference; } ;
struct TYPE_21__ {scalar_t__ display_picture_number; } ;
struct TYPE_20__ {scalar_t__* data; } ;
typedef TYPE_3__ DiracFrame ;
typedef TYPE_4__ DiracContext ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVFrame ;
typedef TYPE_7__ AVCodecContext ;


 int VAR_0 ;
 unsigned int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_9__**,int ,TYPE_19__*) ;
 int FUNC_2 (void*,TYPE_17__*) ;
 int FUNC_3 (TYPE_16__*) ;
 int FUNC_4 (TYPE_7__*,int ,char*,...) ;
 int FUNC_5 (TYPE_7__*,char*,unsigned int) ;
 int FUNC_6 (TYPE_4__*,TYPE_6__*,int*) ;
 int FUNC_7 (int ,int ,int) ;
 TYPE_3__* FUNC_8 (TYPE_9__**,int) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_5, void *VAR_6, int *VAR_7, AVPacket *VAR_8)
{
    DiracContext *VAR_9 = VAR_5->priv_data;
    AVFrame *VAR_10 = VAR_6;
    uint8_t *VAR_11 = VAR_8->data;
    int VAR_12 = VAR_8->size;
    int VAR_13, VAR_14 = 0;
    int VAR_15;
    unsigned VAR_16;


    for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++)
        if (VAR_9->all_frames[VAR_13].avframe->data[0] && !VAR_9->all_frames[VAR_13].reference) {
            FUNC_3(VAR_9->all_frames[VAR_13].avframe);
            FUNC_7(VAR_9->all_frames[VAR_13].interpolated, 0, sizeof(VAR_9->all_frames[VAR_13].interpolated));
        }

    VAR_9->current_picture = ((void*)0);
    *VAR_7 = 0;


    if (VAR_12 == 0)
        return FUNC_6(VAR_9, (AVFrame *)VAR_6, VAR_7);

    for (;;) {



        for (; VAR_14 + VAR_1 < VAR_12; VAR_14++) {
            if (VAR_11[VAR_14 ] == 'B' && VAR_11[VAR_14+1] == 'B' &&
                VAR_11[VAR_14+2] == 'C' && VAR_11[VAR_14+3] == 'D')
                break;
        }

        if (VAR_14 + VAR_1 >= VAR_12)
            break;

        VAR_16 = FUNC_0(VAR_11+VAR_14+5);
        if (VAR_16 > VAR_12 - VAR_14 || !VAR_16) {
            if(VAR_16 > VAR_12 - VAR_14)
            FUNC_4(VAR_9->avctx, VAR_0,
                   "Data unit with size %d is larger than input buffer, discarding\n",
                   VAR_16);
            VAR_14 += 4;
            continue;
        }

        VAR_15 = FUNC_5(VAR_5, VAR_11+VAR_14, VAR_16);
        if (VAR_15 < 0)
        {
            FUNC_4(VAR_9->avctx, VAR_0,"Error in dirac_decode_data_unit\n");
            return VAR_15;
        }
        VAR_14 += VAR_16;
    }

    if (!VAR_9->current_picture)
        return VAR_12;

    if (VAR_9->current_picture->avframe->display_picture_number > VAR_9->frame_number) {
        DiracFrame *VAR_17 = FUNC_8(VAR_9->delay_frames, VAR_9->frame_number);

        VAR_9->current_picture->reference |= VAR_2;

        if (FUNC_1(VAR_9->delay_frames, VAR_3, VAR_9->current_picture)) {
            int VAR_18 = VAR_9->delay_frames[0]->avframe->display_picture_number;

            FUNC_4(VAR_5, VAR_0, "Delay frame overflow\n");

            for (VAR_13 = 1; VAR_9->delay_frames[VAR_13]; VAR_13++)
                if (VAR_9->delay_frames[VAR_13]->avframe->display_picture_number < VAR_18)
                    VAR_18 = VAR_9->delay_frames[VAR_13]->avframe->display_picture_number;

            VAR_17 = FUNC_8(VAR_9->delay_frames, VAR_18);
            FUNC_1(VAR_9->delay_frames, VAR_3, VAR_9->current_picture);
        }

        if (VAR_17) {
            VAR_17->reference ^= VAR_2;
            if((VAR_15=FUNC_2(VAR_6, VAR_17->avframe)) < 0)
                return VAR_15;
            *VAR_7 = 1;
        }
    } else if (VAR_9->current_picture->avframe->display_picture_number == VAR_9->frame_number) {

        if((VAR_15=FUNC_2(VAR_6, VAR_9->current_picture->avframe)) < 0)
            return VAR_15;
        *VAR_7 = 1;
    }

    if (*VAR_7)
        VAR_9->frame_number = VAR_10->display_picture_number + 1LL;

    return VAR_14;
}
