
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ MemId; } ;
struct TYPE_9__ {TYPE_1__ Data; } ;
struct TYPE_12__ {TYPE_2__ surface; } ;
struct TYPE_11__ {int nb_mids; TYPE_3__* mids; } ;
struct TYPE_10__ {scalar_t__ handle; } ;
typedef TYPE_3__ QSVMid ;
typedef TYPE_4__ QSVFramesContext ;
typedef TYPE_5__ QSVFrame ;


 int VAR_0 ;

int FUNC_0(QSVFramesContext *VAR_1, QSVFrame *VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_1->nb_mids; VAR_3++) {
        QSVMid *VAR_4 = &VAR_1->mids[VAR_3];
        if (VAR_4->handle == VAR_2->surface.Data.MemId)
            return VAR_3;
    }
    return VAR_0;
}
