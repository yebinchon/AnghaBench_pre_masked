
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int* peri_regs; } ;
typedef TYPE_1__ SH2 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,char*,int,int,int ) ;
 int FUNC_1 (TYPE_1__*) ;

u32 FUNC_2(u32 VAR_1, SH2 *VAR_2)
{
  u32 VAR_3;
  VAR_1 &= 0x1fc;
  VAR_3 = VAR_2->peri_regs[VAR_1 / 4];

  FUNC_0(VAR_2, VAR_0, "peri r32 [%08x] %08x @%06x",
    VAR_1 | ~0x1ff, VAR_3, FUNC_1(VAR_2));
  return VAR_3;
}
