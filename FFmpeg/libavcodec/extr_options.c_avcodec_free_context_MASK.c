
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* rc_override; struct TYPE_5__* inter_matrix; struct TYPE_5__* intra_matrix; struct TYPE_5__* subtitle_header; struct TYPE_5__* extradata; } ;
typedef TYPE_1__ AVCodecContext ;


 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(AVCodecContext **VAR_0)
{
    AVCodecContext *VAR_1 = *VAR_0;

    if (!VAR_1)
        return;

    FUNC_1(VAR_1);

    FUNC_0(&VAR_1->extradata);
    FUNC_0(&VAR_1->subtitle_header);
    FUNC_0(&VAR_1->intra_matrix);
    FUNC_0(&VAR_1->inter_matrix);
    FUNC_0(&VAR_1->rc_override);

    FUNC_0(VAR_0);
}
