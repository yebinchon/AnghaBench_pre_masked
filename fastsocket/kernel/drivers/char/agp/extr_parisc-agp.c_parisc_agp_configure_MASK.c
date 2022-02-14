
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _parisc_agp_info {scalar_t__ lba_cap_offset; scalar_t__ lba_regs; int gart_base; } ;
struct TYPE_2__ {int mode; scalar_t__ capndx; int gart_bus_addr; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct _parisc_agp_info VAR_2 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int
FUNC_1(void)
{
 struct _parisc_agp_info *VAR_3 = &VAR_2;

 VAR_1->gart_bus_addr = VAR_3->gart_base;
 VAR_1->capndx = VAR_3->lba_cap_offset;
 VAR_1->mode = FUNC_0(VAR_3->lba_regs+VAR_3->lba_cap_offset+VAR_0);

 return 0;
}
