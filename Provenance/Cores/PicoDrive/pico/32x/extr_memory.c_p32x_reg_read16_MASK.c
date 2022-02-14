
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int comm_dirty_68k; int comm_dirty_sh2; int* regs; } ;
struct TYPE_3__ {unsigned int m68krcycles_done; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 unsigned int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,unsigned int,int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (int,int *,unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static u32 FUNC_7(u32 VAR_3)
{
  VAR_3 &= 0x3e;





  if ((VAR_3 & 0x30) == 0x20) {
    unsigned int VAR_4 = FUNC_0();
    int VAR_5 = 1 << (VAR_3 & 0x0f) / 2;

    if (VAR_4 - VAR_2 > 244
        || (VAR_1.comm_dirty_68k & VAR_5))
      FUNC_5(VAR_4);

    if (VAR_1.comm_dirty_sh2 & VAR_5)
      VAR_1.comm_dirty_sh2 &= ~VAR_5;
    else if (FUNC_3(VAR_3, VAR_4, VAR_0)) {
      FUNC_2(1);
      FUNC_1(16);
    }
    goto out;
  }


  if (VAR_3 == 2) {
    unsigned int VAR_6 = FUNC_0();
    if (VAR_6 - VAR_2 > 64)
      FUNC_5(VAR_6);
    goto out;
  }

  if ((VAR_3 & 0x30) == 0x30)
    return FUNC_4(VAR_3, ((void*)0), FUNC_0());

out:
  return VAR_1.regs[VAR_3 / 2];
}
