
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int* mb_type; } ;
struct TYPE_19__ {scalar_t__ pixel_shift; TYPE_1__ cur_pic; } ;
struct TYPE_18__ {int mb_xy; scalar_t__ qscale; int is_complex; } ;
typedef TYPE_2__ H264SliceContext ;
typedef TYPE_3__ H264Context ;


 scalar_t__ FUNC_0 (TYPE_3__ const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int const) ;
 int FUNC_2 (TYPE_3__ const*,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__ const*,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__ const*,TYPE_2__*) ;
 int FUNC_5 (TYPE_3__ const*,TYPE_2__*) ;
 int FUNC_6 (TYPE_3__ const*,TYPE_2__*) ;

void FUNC_7(const H264Context *VAR_1, H264SliceContext *VAR_2)
{
    const int VAR_3 = VAR_2->mb_xy;
    const int VAR_4 = VAR_1->cur_pic.mb_type[VAR_3];
    int VAR_5 = VAR_0 || VAR_2->is_complex ||
                        FUNC_1(VAR_4) || VAR_2->qscale == 0;

    if (FUNC_0(VAR_1)) {
        if (VAR_5 || VAR_1->pixel_shift)
            FUNC_2(VAR_1, VAR_2);
        else
            FUNC_3(VAR_1, VAR_2);
    } else if (VAR_5) {
        FUNC_4(VAR_1, VAR_2);
    } else if (VAR_1->pixel_shift) {
        FUNC_5(VAR_1, VAR_2);
    } else
        FUNC_6(VAR_1, VAR_2);
}
