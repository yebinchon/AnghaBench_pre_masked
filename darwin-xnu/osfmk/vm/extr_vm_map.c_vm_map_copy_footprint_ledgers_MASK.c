
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int task_t ;
struct TYPE_2__ {int wired_mem; int network_nonvolatile_compressed; int network_nonvolatile; int page_table; int alternate_accounting_compressed; int alternate_accounting; int iokit_mapped; int internal_compressed; int internal; int purgeable_nonvolatile_compressed; int purgeable_nonvolatile; int phys_footprint; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

void
FUNC_1(
 task_t VAR_1,
 task_t VAR_2)
{
 FUNC_0(VAR_1, VAR_2, VAR_0.phys_footprint);
 FUNC_0(VAR_1, VAR_2, VAR_0.purgeable_nonvolatile);
 FUNC_0(VAR_1, VAR_2, VAR_0.purgeable_nonvolatile_compressed);
    FUNC_0(VAR_1, VAR_2, VAR_0.internal);
    FUNC_0(VAR_1, VAR_2, VAR_0.internal_compressed);
    FUNC_0(VAR_1, VAR_2, VAR_0.iokit_mapped);
    FUNC_0(VAR_1, VAR_2, VAR_0.alternate_accounting);
    FUNC_0(VAR_1, VAR_2, VAR_0.alternate_accounting_compressed);
    FUNC_0(VAR_1, VAR_2, VAR_0.page_table);
    FUNC_0(VAR_1, VAR_2, VAR_0.network_nonvolatile);
    FUNC_0(VAR_1, VAR_2, VAR_0.network_nonvolatile_compressed);
    FUNC_0(VAR_1, VAR_2, VAR_0.wired_mem);
}
