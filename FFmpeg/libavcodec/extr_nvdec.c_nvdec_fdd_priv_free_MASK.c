
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int decoder_ref; int idx_ref; } ;
typedef TYPE_1__ NVDECFrame ;


 int FUNC_0 (int *) ;
 int FUNC_1 (void**) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
    NVDECFrame *VAR_1 = VAR_0;

    if (!VAR_1)
        return;

    FUNC_0(&VAR_1->idx_ref);
    FUNC_0(&VAR_1->decoder_ref);

    FUNC_1(&VAR_0);
}
