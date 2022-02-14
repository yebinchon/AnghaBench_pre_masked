
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int debug; } ;
struct TYPE_7__ {int short_ref_count; TYPE_6__* avctx; } ;
typedef int H264Picture ;
typedef TYPE_1__ H264Context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*,int ,char*,int,int ) ;
 int * FUNC_1 (TYPE_1__*,int,int*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,int) ;

__attribute__((used)) static H264Picture *FUNC_4(H264Context *VAR_2, int VAR_3, int VAR_4)
{
    H264Picture *VAR_5;
    int VAR_6;

    if (VAR_2->avctx->debug & VAR_1)
        FUNC_0(VAR_2->avctx, VAR_0, "remove short %d count %d\n", VAR_3, VAR_2->short_ref_count);

    VAR_5 = FUNC_1(VAR_2, VAR_3, &VAR_6);
    if (VAR_5) {
        if (FUNC_3(VAR_2, VAR_5, VAR_4))
            FUNC_2(VAR_2, VAR_6);
    }

    return VAR_5;
}
