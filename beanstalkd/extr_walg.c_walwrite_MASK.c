
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int nrec; scalar_t__ use; TYPE_6__* cur; } ;
typedef TYPE_1__ Wal ;
struct TYPE_13__ {scalar_t__ resv; } ;
struct TYPE_12__ {scalar_t__ file; } ;
typedef TYPE_2__ Job ;


 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_6__*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

int
FUNC_4(Wal *VAR_0, Job *VAR_1)
{
    int VAR_2 = 0;

    if (!VAR_0->use) return 1;
    if (VAR_0->cur->resv > 0 || FUNC_3(VAR_0)) {
        if (VAR_1->file) {
            VAR_2 = FUNC_2(VAR_0->cur, VAR_1);
        } else {
            VAR_2 = FUNC_1(VAR_0->cur, VAR_1);
        }
    }
    if (!VAR_2) {
        FUNC_0(VAR_0->cur);
        VAR_0->use = 0;
    }
    VAR_0->nrec++;
    return VAR_2;
}
