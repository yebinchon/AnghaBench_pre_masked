
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int afq; scalar_t__ handle; } ;
struct TYPE_4__ {int extradata; TYPE_2__* priv_data; } ;
typedef TYPE_1__ AVCodecContext ;
typedef TYPE_2__ AACContext ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_0)
{
    AACContext *VAR_1 = VAR_0->priv_data;

    if (VAR_1->handle)
        FUNC_0(&VAR_1->handle);
    FUNC_1(&VAR_0->extradata);
    FUNC_2(&VAR_1->afq);

    return 0;
}
