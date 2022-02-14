
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int base; scalar_t__ offset; scalar_t__ level; } ;
struct TYPE_5__ {TYPE_1__ peak; } ;
typedef TYPE_2__ CFHDContext ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1(CFHDContext *VAR_0)
{
    VAR_0->peak.level = 0;
    VAR_0->peak.offset = 0;
    FUNC_0(&VAR_0->peak.base, 0, sizeof(VAR_0->peak.base));
}
