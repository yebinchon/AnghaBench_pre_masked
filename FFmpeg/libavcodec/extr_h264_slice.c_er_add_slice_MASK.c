
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* h264; } ;
struct TYPE_6__ {TYPE_1__* slice_ctx; int enable_er; } ;
struct TYPE_5__ {int er; } ;
typedef TYPE_3__ H264SliceContext ;
typedef int ERContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(H264SliceContext *VAR_1,
                         int VAR_2, int VAR_3,
                         int VAR_4, int VAR_5, int VAR_6)
{
    if (!VAR_1->h264->enable_er)
        return;

    if (VAR_0) {
        ERContext *VAR_7 = &VAR_1->h264->slice_ctx[0].er;

        FUNC_0(VAR_7, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
    }
}
