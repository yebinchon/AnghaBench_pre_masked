
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int debug; } ;
struct TYPE_8__ {int short_ref_count; TYPE_5__* avctx; TYPE_1__** short_ref; } ;
struct TYPE_7__ {int frame_num; } ;
typedef TYPE_1__ H264Picture ;
typedef TYPE_2__ H264Context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,int ,char*,int,int,TYPE_1__*) ;

__attribute__((used)) static H264Picture *FUNC_1(H264Context *VAR_2, int VAR_3, int *VAR_4)
{
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_2->short_ref_count; VAR_5++) {
        H264Picture *VAR_6 = VAR_2->short_ref[VAR_5];
        if (VAR_2->avctx->debug & VAR_1)
            FUNC_0(VAR_2->avctx, VAR_0, "%d %d %p\n", VAR_5, VAR_6->frame_num, VAR_6);
        if (VAR_6->frame_num == VAR_3) {
            *VAR_4 = VAR_5;
            return VAR_6;
        }
    }
    return ((void*)0);
}
