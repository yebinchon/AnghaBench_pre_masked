
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int scanline; } ;
struct TYPE_6__ {TYPE_1__ m; } ;
struct TYPE_5__ {int* sh2irq_mask; int* sh2_regs; } ;
typedef int SH2 ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int *,int ,int) ;

void FUNC_2(SH2 *VAR_3, int VAR_4)
{

  int VAR_5;

  if (!((VAR_2.sh2irq_mask[0] | VAR_2.sh2irq_mask[1]) & 4))
    return;


  if (!(VAR_2.sh2_regs[0] & 0x80) && VAR_1.m.scanline > 224)
    return;

  VAR_5 = (VAR_2.sh2_regs[4 / 2] + 1) * 488;
  if (VAR_3 != ((void*)0))
    FUNC_1(VAR_3, VAR_0, VAR_5);
  else
    FUNC_0(VAR_4, VAR_0, VAR_5);
}
