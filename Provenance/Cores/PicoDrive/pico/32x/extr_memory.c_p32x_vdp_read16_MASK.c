
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int* vdp_regs; int vdp_fbcr_fake; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static u32 FUNC_0(u32 VAR_3)
{
  u32 VAR_4;
  VAR_3 &= 0x0e;

  VAR_4 = VAR_2.vdp_regs[VAR_3 / 2];
  if (VAR_3 == 0x0a) {




    VAR_2.vdp_fbcr_fake++;
    if (VAR_2.vdp_fbcr_fake & 4)
      VAR_4 |= VAR_0;
    if ((VAR_2.vdp_fbcr_fake & 7) == 0)
      VAR_4 |= VAR_1;
  }
  return VAR_4;
}
