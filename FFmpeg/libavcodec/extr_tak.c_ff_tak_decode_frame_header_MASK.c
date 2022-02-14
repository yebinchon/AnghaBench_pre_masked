
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; scalar_t__ last_frame_samples; scalar_t__ frame_num; } ;
typedef TYPE_1__ TAKStreamInfo ;
typedef int GetBitContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__,char*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;

int FUNC_5(AVCodecContext *VAR_10, GetBitContext *VAR_11,
                               TAKStreamInfo *VAR_12, int VAR_13)
{
    if (FUNC_3(VAR_11, VAR_9) != VAR_8) {
        FUNC_1(VAR_10, VAR_1 + VAR_13, "missing sync id\n");
        return VAR_0;
    }

    VAR_12->flags = FUNC_3(VAR_11, VAR_5);
    VAR_12->frame_num = FUNC_3(VAR_11, VAR_6);

    if (VAR_12->flags & VAR_4) {
        VAR_12->last_frame_samples = FUNC_3(VAR_11, VAR_7) + 1;
        FUNC_4(VAR_11, 2);
    } else {
        VAR_12->last_frame_samples = 0;
    }

    if (VAR_12->flags & VAR_2) {
        FUNC_2(VAR_12, VAR_11);

        if (FUNC_3(VAR_11, 6))
            FUNC_4(VAR_11, 25);
        FUNC_0(VAR_11);
    }

    if (VAR_12->flags & VAR_3)
        return VAR_0;

    FUNC_4(VAR_11, 24);

    return 0;
}
