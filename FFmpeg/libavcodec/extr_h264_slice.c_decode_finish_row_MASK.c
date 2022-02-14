
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_18__ {int mb_height; scalar_t__ picture_structure; TYPE_4__* cur_pic_ptr; scalar_t__ droppable; } ;
struct TYPE_17__ {int mb_y; TYPE_3__* h264; scalar_t__ deblocking_filter; } ;
struct TYPE_16__ {int tf; } ;
struct TYPE_15__ {TYPE_2__* slice_ctx; } ;
struct TYPE_13__ {scalar_t__ error_occurred; } ;
struct TYPE_14__ {TYPE_1__ er; } ;
typedef TYPE_5__ H264SliceContext ;
typedef TYPE_6__ H264Context ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_6__ const*) ;
 int FUNC_2 (TYPE_6__ const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_6__ const*,TYPE_5__*,int,int) ;
 int FUNC_4 (int *,int,int) ;

__attribute__((used)) static void FUNC_5(const H264Context *VAR_1, H264SliceContext *VAR_2)
{
    int VAR_3 = 16 * (VAR_2->mb_y >> FUNC_1(VAR_1));
    int VAR_4 = 16 * VAR_1->mb_height >> FUNC_1(VAR_1);
    int VAR_5 = 16 << FUNC_2(VAR_1);
    int VAR_6 = (16 + 4) << FUNC_2(VAR_1);

    if (VAR_2->deblocking_filter) {
        if ((VAR_3 + VAR_5) >= VAR_4)
            VAR_5 += VAR_6;
        VAR_3 -= VAR_6;
    }

    if (VAR_3 >= VAR_4 || (VAR_3 + VAR_5) < 0)
        return;

    VAR_5 = FUNC_0(VAR_5, VAR_4 - VAR_3);
    if (VAR_3 < 0) {
        VAR_5 = VAR_3 + VAR_5;
        VAR_3 = 0;
    }

    FUNC_3(VAR_1, VAR_2, VAR_3, VAR_5);

    if (VAR_1->droppable || VAR_2->h264->slice_ctx[0].er.error_occurred)
        return;

    FUNC_4(&VAR_1->cur_pic_ptr->tf, VAR_3 + VAR_5 - 1,
                              VAR_1->picture_structure == VAR_0);
}
