
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {scalar_t__ peri_regs; } ;
typedef TYPE_1__ SH2 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,char*,int,int,int ) ;
 int FUNC_1 (TYPE_1__*) ;

u32 FUNC_2(u32 VAR_1, SH2 *VAR_2)
{
  u16 *VAR_3 = (void *)VAR_2->peri_regs;
  u32 VAR_4;

  VAR_1 &= 0x1ff;
  VAR_4 = VAR_3[(VAR_1 / 2) ^ 1];

  FUNC_0(VAR_2, VAR_0, "peri r16 [%08x]     %04x @%06x",
    VAR_1 | ~0x1ff, VAR_4, FUNC_1(VAR_2));
  return VAR_4;
}
