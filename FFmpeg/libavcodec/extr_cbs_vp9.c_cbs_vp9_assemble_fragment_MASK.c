
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {int bytes_per_framesize_minus_1; int frames_in_superframe_minus_1; int* frame_sizes; int superframe_marker; } ;
typedef TYPE_1__ VP9RawSuperframeIndex ;
struct TYPE_17__ {int * data; } ;
struct TYPE_16__ {int log_ctx; } ;
struct TYPE_15__ {int nb_units; size_t data_size; int * data; TYPE_5__* data_ref; TYPE_2__* units; } ;
struct TYPE_14__ {size_t data_size; int * data; int data_ref; } ;
typedef int PutBitContext ;
typedef TYPE_2__ CodedBitstreamUnit ;
typedef TYPE_3__ CodedBitstreamFragment ;
typedef TYPE_4__ CodedBitstreamContext ;
typedef TYPE_5__ AVBufferRef ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 TYPE_5__* FUNC_2 (scalar_t__) ;
 TYPE_5__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__**) ;
 int FUNC_5 (int ,int ,char*,...) ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (TYPE_4__*,int *,TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,size_t) ;
 int FUNC_10 (int *,int *,size_t) ;
 int FUNC_11 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(CodedBitstreamContext *VAR_5,
                                     CodedBitstreamFragment *VAR_6)
{
    int VAR_7;

    if (VAR_6->nb_units == 1) {


        CodedBitstreamUnit *VAR_8 = &VAR_6->units[0];

        VAR_6->data_ref = FUNC_3(VAR_8->data_ref);
        if (!VAR_6->data_ref)
            return FUNC_0(VAR_3);

        VAR_6->data = VAR_8->data;
        VAR_6->data_size = VAR_8->data_size;

    } else {


        VP9RawSuperframeIndex VAR_9;
        PutBitContext VAR_10;
        AVBufferRef *VAR_11;
        uint8_t *VAR_12;
        size_t VAR_13, VAR_14, VAR_15;
        int VAR_16, VAR_17;

        if (VAR_6->nb_units > 8) {
            FUNC_5(VAR_5->log_ctx, VAR_1, "Too many frames to "
                   "make superframe: %d.\n", VAR_6->nb_units);
            return FUNC_0(VAR_2);
        }

        VAR_14 = 0;
        for (VAR_16 = 0; VAR_16 < VAR_6->nb_units; VAR_16++)
            if (VAR_14 < VAR_6->units[VAR_16].data_size)
                VAR_14 = VAR_6->units[VAR_16].data_size;

        if (VAR_14 < 2)
            VAR_17 = 1;
        else
            VAR_17 = FUNC_6(VAR_14) / 8 + 1;
        FUNC_1(VAR_17 <= 4);

        VAR_9.superframe_marker = VAR_4;
        VAR_9.bytes_per_framesize_minus_1 = VAR_17 - 1;
        VAR_9.frames_in_superframe_minus_1 = VAR_6->nb_units - 1;

        VAR_13 = 2;
        for (VAR_16 = 0; VAR_16 < VAR_6->nb_units; VAR_16++) {
            VAR_13 += VAR_17 + VAR_6->units[VAR_16].data_size;
            VAR_9.frame_sizes[VAR_16] = VAR_6->units[VAR_16].data_size;
        }

        VAR_11 = FUNC_2(VAR_13 + VAR_0);
        if (!VAR_11)
            return FUNC_0(VAR_3);
        VAR_12 = VAR_11->data;
        FUNC_11(VAR_12 + VAR_13, 0, VAR_0);

        VAR_15 = 0;
        for (VAR_16 = 0; VAR_16 < VAR_6->nb_units; VAR_16++) {
            FUNC_1(VAR_13 - VAR_15 > VAR_6->units[VAR_16].data_size);
            FUNC_10(VAR_12 + VAR_15, VAR_6->units[VAR_16].data,
                   VAR_6->units[VAR_16].data_size);
            VAR_15 += VAR_6->units[VAR_16].data_size;
        }
        FUNC_1(VAR_13 - VAR_15 == 2 + VAR_6->nb_units * VAR_17);

        FUNC_9(&VAR_10, VAR_12 + VAR_15, VAR_13 - VAR_15);

        VAR_7 = FUNC_7(VAR_5, &VAR_10, &VAR_9);
        if (VAR_7 < 0) {
            FUNC_5(VAR_5->log_ctx, VAR_1, "Failed to write "
                   "superframe index.\n");
            FUNC_4(&VAR_11);
            return VAR_7;
        }

        FUNC_1(FUNC_12(&VAR_10) == 0);
        FUNC_8(&VAR_10);

        VAR_6->data_ref = VAR_11;
        VAR_6->data = VAR_12;
        VAR_6->data_size = VAR_13;
    }

    return 0;
}
