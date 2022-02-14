
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u32 ;
struct TYPE_12__ {size_t is_slave; int other_sh2; scalar_t__ poll_addr; } ;
struct TYPE_11__ {int* regs; int comm_dirty_sh2; int * sh2irqi; int sh2irqs; } ;
typedef TYPE_1__ SH2 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_10__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int,int,TYPE_1__*,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int,int,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_9(u32 VAR_8, u32 VAR_9, SH2 *VAR_10)
{
  VAR_8 &= 0x3e;

  VAR_10->poll_addr = 0;


  if ((VAR_8 & 0x30) == 0x20) {
    int VAR_11;
    if (VAR_6.regs[VAR_8 / 2] == VAR_9)
      return;

    VAR_6.regs[VAR_8 / 2] = VAR_9;
    FUNC_0(VAR_0);
    FUNC_4(VAR_10->other_sh2, VAR_7,
      FUNC_8(VAR_10));
    VAR_11 = 1 << (VAR_8 & 0x0f) / 2;
    VAR_6.comm_dirty_sh2 |= VAR_11;
    return;
  }

  else if ((VAR_8 & 0x30) == 0x30) {
    FUNC_3(VAR_8, VAR_9, VAR_10, FUNC_8(VAR_10));
    return;
  }

  switch (VAR_8) {
    case 0:
      VAR_6.regs[0] &= ~VAR_5;
      VAR_6.regs[0] |= VAR_9 & VAR_5;
      break;
    case 0x14:
      VAR_6.sh2irqs &= ~VAR_4;
      goto irls;
    case 0x16:
      VAR_6.sh2irqi[VAR_10->is_slave] &= ~VAR_3;
      goto irls;
    case 0x18:
      VAR_6.sh2irqi[VAR_10->is_slave] &= ~VAR_1;
      goto irls;
    case 0x1a:
      VAR_6.regs[2 / 2] &= ~(1 << VAR_10->is_slave);
      FUNC_6(VAR_10, 0);
      return;
    case 0x1c:
      FUNC_2(VAR_10);
      VAR_6.sh2irqi[VAR_10->is_slave] &= ~VAR_2;
      FUNC_1(VAR_10);
      goto irls;
  }

  FUNC_5(VAR_8 | 1, VAR_9, VAR_10);
  return;

irls:
  FUNC_7(VAR_10, 0);
}
