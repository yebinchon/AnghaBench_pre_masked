
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ mb_x; int slice_height; int mb_y; int msmpeg4_version; int first_slice_line; } ;
typedef TYPE_1__ MpegEncContext ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(MpegEncContext *VAR_0){
    if (VAR_0->mb_x == 0) {
        if (VAR_0->slice_height && (VAR_0->mb_y % VAR_0->slice_height) == 0) {
            if(VAR_0->msmpeg4_version < 4){
                FUNC_0(VAR_0);
            }
            VAR_0->first_slice_line = 1;
        } else {
            VAR_0->first_slice_line = 0;
        }
    }
}
