
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ picture_id; int flags; int BottomFieldOrderCnt; int TopFieldOrderCnt; } ;
typedef TYPE_1__ VAPictureH264 ;
struct TYPE_10__ {int size; int max_size; TYPE_1__* va_pics; } ;
struct TYPE_9__ {int f; } ;
typedef TYPE_2__ H264Picture ;
typedef TYPE_3__ DPB ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__ const*,int ) ;

__attribute__((used)) static int FUNC_2(DPB *VAR_2, const H264Picture *VAR_3)
{
    int VAR_4;

    if (VAR_2->size >= VAR_2->max_size)
        return -1;

    for (VAR_4 = 0; VAR_4 < VAR_2->size; VAR_4++) {
        VAPictureH264 * const VAR_5 = &VAR_2->va_pics[VAR_4];
        if (VAR_5->picture_id == FUNC_0(VAR_3->f)) {
            VAPictureH264 VAR_6;
            FUNC_1(&VAR_6, VAR_3, 0);

            if ((VAR_6.flags ^ VAR_5->flags) & (VAR_1 | VAR_0)) {
                VAR_5->flags |= VAR_6.flags & (VAR_1 | VAR_0);

                if (VAR_6.flags & VAR_1) {
                    VAR_5->TopFieldOrderCnt = VAR_6.TopFieldOrderCnt;
                } else {
                    VAR_5->BottomFieldOrderCnt = VAR_6.BottomFieldOrderCnt;
                }
            }
            return 0;
        }
    }

    FUNC_1(&VAR_2->va_pics[VAR_2->size++], VAR_3, 0);
    return 0;
}
