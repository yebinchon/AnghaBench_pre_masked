
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct SAPState {int sdp; scalar_t__ ann_fd; scalar_t__ sdp_ctx; } ;
struct TYPE_3__ {struct SAPState* priv_data; } ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_0)
{
    struct SAPState *VAR_1 = VAR_0->priv_data;
    if (VAR_1->sdp_ctx)
        FUNC_1(&VAR_1->sdp_ctx);
    if (VAR_1->ann_fd)
        FUNC_3(VAR_1->ann_fd);
    FUNC_0(&VAR_1->sdp);
    FUNC_2();
    return 0;
}
