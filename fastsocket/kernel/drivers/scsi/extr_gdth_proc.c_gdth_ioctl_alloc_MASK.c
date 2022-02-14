
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong64 ;
typedef int ulong ;
struct TYPE_3__ {char* pscratch; int smp_lock; int pdev; int scratch_phys; scalar_t__ scratch_busy; } ;
typedef TYPE_1__ gdth_ha_str ;
typedef int dma_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int ,int,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static char *FUNC_3(gdth_ha_str *VAR_2, int VAR_3, int VAR_4,
                              ulong64 *VAR_5)
{
    ulong VAR_6;
    char *VAR_7;

    if (VAR_3 == 0)
        return ((void*)0);

    FUNC_1(&VAR_2->smp_lock, VAR_6);

    if (!VAR_2->scratch_busy && VAR_3 <= VAR_0) {
        VAR_2->scratch_busy = VAR_1;
        VAR_7 = VAR_2->pscratch;
        *VAR_5 = VAR_2->scratch_phys;
    } else if (VAR_4) {
        VAR_7 = ((void*)0);
    } else {
        dma_addr_t VAR_8;

        VAR_7 = FUNC_0(VAR_2->pdev, VAR_3, &VAR_8);
        *VAR_5 = VAR_8;
    }

    FUNC_2(&VAR_2->smp_lock, VAR_6);
    return VAR_7;
}
