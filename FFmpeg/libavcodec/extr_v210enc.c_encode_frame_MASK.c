
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_21__ {int width; int height; } ;
struct TYPE_20__ {scalar_t__ format; } ;
struct TYPE_19__ {scalar_t__ size; int data; } ;
struct TYPE_18__ {int flags; int * data; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrameSideData ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* FUNC_1 (TYPE_3__ const*,int ) ;
 int FUNC_2 (TYPE_4__*,int ,char*) ;
 int * FUNC_3 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_4 (TYPE_4__*,TYPE_1__*,int,int) ;
 int FUNC_5 (int *,int ,scalar_t__) ;
 int FUNC_6 (TYPE_4__*,int *,TYPE_3__ const*) ;
 int FUNC_7 (TYPE_4__*,int *,TYPE_3__ const*) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_9, AVPacket *VAR_10,
                        const AVFrame *VAR_11, int *VAR_12)
{
    int VAR_13 = ((VAR_9->width + 47) / 48) * 48;
    int VAR_14 = VAR_13 * 8 / 3;
    AVFrameSideData *VAR_15;
    int VAR_16;
    uint8_t *VAR_17;

    VAR_16 = FUNC_4(VAR_9, VAR_10, VAR_9->height * VAR_14, VAR_9->height * VAR_14);
    if (VAR_16 < 0) {
        FUNC_2(VAR_9, VAR_2, "Error getting output packet.\n");
        return VAR_16;
    }
    VAR_17 = VAR_10->data;

    if (VAR_11->format == VAR_4)
        FUNC_6(VAR_9, VAR_17, VAR_11);
    else if(VAR_11->format == VAR_3)
        FUNC_7(VAR_9, VAR_17, VAR_11);

    VAR_15 = FUNC_1(VAR_11, VAR_0);
    if (VAR_15 && VAR_15->size) {
        uint8_t *VAR_18 = FUNC_3(VAR_10, VAR_5, VAR_15->size);
        if (!VAR_18)
            return FUNC_0(VAR_8);
        FUNC_5(VAR_18, VAR_15->data, VAR_15->size);
    }

    VAR_15 = FUNC_1(VAR_11, VAR_1);
    if (VAR_15 && VAR_15->size) {
        uint8_t *VAR_19 = FUNC_3(VAR_10, VAR_6, VAR_15->size);
        if (!VAR_19)
            return FUNC_0(VAR_8);
        FUNC_5(VAR_19, VAR_15->data, VAR_15->size);
    }

    VAR_10->flags |= VAR_7;
    *VAR_12 = 1;
    return 0;
}
