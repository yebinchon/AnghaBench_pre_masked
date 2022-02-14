
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__* pf_gains_old; scalar_t__* pf_gains; scalar_t__* pf_gains_new; scalar_t__ buf; int pf_period; int pf_period_old; int pf_period_new; } ;
struct TYPE_7__ {int (* postfilter ) (scalar_t__,int ,scalar_t__*,int const) ;} ;
struct TYPE_8__ {int blocksize; int blocks; TYPE_1__ opusdsp; } ;
typedef TYPE_2__ CeltFrame ;
typedef TYPE_3__ CeltBlock ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 int FUNC_3 (scalar_t__,int ,scalar_t__*,int const) ;

__attribute__((used)) static void FUNC_4(CeltFrame *VAR_2, CeltBlock *VAR_3)
{
    int VAR_4 = VAR_2->blocksize * VAR_2->blocks;
    const int VAR_5 = VAR_4 - 2 * VAR_0;

    FUNC_0(VAR_3, VAR_3->buf + 1024);

    VAR_3->pf_period_old = VAR_3->pf_period;
    FUNC_1(VAR_3->pf_gains_old, VAR_3->pf_gains, sizeof(VAR_3->pf_gains));

    VAR_3->pf_period = VAR_3->pf_period_new;
    FUNC_1(VAR_3->pf_gains, VAR_3->pf_gains_new, sizeof(VAR_3->pf_gains));

    if (VAR_4 > VAR_0) {
        FUNC_0(VAR_3, VAR_3->buf + 1024 + VAR_0);

        if (VAR_3->pf_gains[0] > VAR_1 && VAR_5 > 0)
            VAR_2->opusdsp.postfilter(VAR_3->buf + 1024 + 2 * VAR_0,
                                  VAR_3->pf_period, VAR_3->pf_gains,
                                  VAR_5);

        VAR_3->pf_period_old = VAR_3->pf_period;
        FUNC_1(VAR_3->pf_gains_old, VAR_3->pf_gains, sizeof(VAR_3->pf_gains));
    }

    FUNC_2(VAR_3->buf, VAR_3->buf + VAR_4, (1024 + VAR_0 / 2) * sizeof(float));
}
