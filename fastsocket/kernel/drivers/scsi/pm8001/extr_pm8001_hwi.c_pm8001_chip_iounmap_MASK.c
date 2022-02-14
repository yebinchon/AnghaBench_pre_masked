
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pm8001_hba_info {TYPE_1__* io_mem; } ;
typedef int s8 ;
struct TYPE_2__ {scalar_t__ memvirtaddr; } ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct pm8001_hba_info *VAR_0)
{
 s8 VAR_1, VAR_2 = 0;
 for (VAR_1 = 0; VAR_1 < 6; VAR_1++) {
  if ((VAR_1 == 1) || (VAR_1 == 3))
   continue;
  if (VAR_0->io_mem[VAR_2].memvirtaddr) {
   FUNC_0(VAR_0->io_mem[VAR_2].memvirtaddr);
   VAR_2++;
  }
 }
}
