
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int dmna_ret_2m; unsigned short hint_vector; int busreq; } ;
struct TYPE_4__ {int* s68k_regs; TYPE_1__ m; scalar_t__ bios; int word_ram2M; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

void FUNC_3(void)
{
  u32 VAR_1 = VAR_0->s68k_regs[3];


  if (VAR_1 & 4)
    FUNC_2(VAR_0->word_ram2M);
  FUNC_1(VAR_1);
  FUNC_0(VAR_0->m.busreq, VAR_1);
  VAR_0->m.dmna_ret_2m &= 3;


  *(unsigned short *)(VAR_0->bios + 0x72) = VAR_0->m.hint_vector;
}
