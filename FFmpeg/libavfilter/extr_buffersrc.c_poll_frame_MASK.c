
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* src; } ;
struct TYPE_6__ {scalar_t__ eof; int fifo; } ;
struct TYPE_5__ {TYPE_2__* priv; } ;
typedef TYPE_2__ BufferSourceContext ;
typedef int AVFrame ;
typedef TYPE_3__ AVFilterLink ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(AVFilterLink *VAR_1)
{
    BufferSourceContext *VAR_2 = VAR_1->src->priv;
    int VAR_3 = FUNC_0(VAR_2->fifo);
    if (!VAR_3 && VAR_2->eof)
        return VAR_0;
    return VAR_3/sizeof(AVFrame*);
}
