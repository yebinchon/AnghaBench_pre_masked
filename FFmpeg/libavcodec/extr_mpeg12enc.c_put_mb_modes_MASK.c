
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int interlaced_dct; int pb; int frame_pred_frame_dct; } ;
typedef TYPE_1__ MpegEncContext ;


 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static inline void FUNC_1(MpegEncContext *VAR_0, int VAR_1, int VAR_2,
                                int VAR_3, int VAR_4)
{
    FUNC_0(&VAR_0->pb, VAR_1, VAR_2);
    if (!VAR_0->frame_pred_frame_dct) {
        if (VAR_3)

            FUNC_0(&VAR_0->pb, 2, 2 - VAR_4);
        FUNC_0(&VAR_0->pb, 1, VAR_0->interlaced_dct);
    }
}
