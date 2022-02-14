
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_streams; scalar_t__ current_stream; int offset; int * xma; } ;
typedef TYPE_1__ XMADecodeCtx ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(AVCodecContext *VAR_0)
{
    XMADecodeCtx *VAR_1 = VAR_0->priv_data;
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1->num_streams; VAR_2++)
        FUNC_0(&VAR_1->xma[VAR_2]);

    FUNC_1(VAR_1->offset, 0, sizeof(VAR_1->offset));
    VAR_1->current_stream = 0;
}
