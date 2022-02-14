
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int * inputs; TYPE_3__* priv; } ;
struct TYPE_12__ {TYPE_5__* src; scalar_t__ request_samples; } ;
struct TYPE_9__ {TYPE_2__* next; } ;
struct TYPE_11__ {TYPE_1__ root; } ;
struct TYPE_10__ {int frame; } ;
typedef TYPE_3__ FifoContext ;
typedef TYPE_4__ AVFilterLink ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_1)
{
    FifoContext *VAR_2 = VAR_1->src->priv;
    int VAR_3 = 0;

    if (!VAR_2->root.next) {
        if ((VAR_3 = FUNC_1(VAR_1->src->inputs[0])) < 0) {
            if (VAR_3 == VAR_0 && VAR_1->request_samples)
                return FUNC_3(VAR_1->src);
            return VAR_3;
        }
        if (!VAR_2->root.next)
            return 0;
    }

    if (VAR_1->request_samples) {
        return FUNC_3(VAR_1->src);
    } else {
        VAR_3 = FUNC_0(VAR_1, VAR_2->root.next->frame);
        FUNC_2(VAR_2);
    }

    return VAR_3;
}
