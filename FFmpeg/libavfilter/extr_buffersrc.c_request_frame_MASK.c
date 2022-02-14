
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int frame ;
struct TYPE_8__ {TYPE_1__* src; } ;
struct TYPE_7__ {int fifo; int nb_failed_requests; scalar_t__ eof; } ;
struct TYPE_6__ {TYPE_2__* priv; } ;
typedef TYPE_2__ BufferSourceContext ;
typedef int AVFrame ;
typedef TYPE_3__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int **,int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_2)
{
    BufferSourceContext *VAR_3 = VAR_2->src->priv;
    AVFrame *VAR_4;
    int VAR_5;

    if (!FUNC_2(VAR_3->fifo)) {
        if (VAR_3->eof)
            return VAR_0;
        VAR_3->nb_failed_requests++;
        return FUNC_0(VAR_1);
    }
    FUNC_1(VAR_3->fifo, &VAR_4, sizeof(VAR_4), ((void*)0));

    VAR_5 = FUNC_3(VAR_2, VAR_4);

    return VAR_5;
}
