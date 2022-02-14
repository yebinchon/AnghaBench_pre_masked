
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_9__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_11__ {int* regs; int* sh2_regs; int* sh2irq_mask; int dmac0_fifo_ptr; int* dmac_fifo; int comm_dirty_68k; } ;
struct TYPE_10__ {size_t is_slave; } ;
typedef TYPE_1__ SH2 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_9__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int,char*,int,int ) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int,TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int,int ,int) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static u32 FUNC_7(u32 VAR_6, SH2 *VAR_7)
{
  u16 *VAR_8 = VAR_4.regs;
  VAR_6 &= 0x3e;

  switch (VAR_6) {
    case 0x00:
      return (VAR_8[0] & VAR_2) | VAR_4.sh2_regs[0]
        | VAR_4.sh2irq_mask[VAR_7->is_slave];
    case 0x04:
      FUNC_5(VAR_7, VAR_6, VAR_5, 3);
      FUNC_6(VAR_7);
      return VAR_4.sh2_regs[4 / 2];
    case 0x06:
      return (VAR_8[VAR_6 / 2] & ~VAR_3) | 0x4000;
    case 0x08:
    case 0x0a:
    case 0x0c:
    case 0x0e:
    case 0x10:
      return VAR_8[VAR_6 / 2];
    case 0x12:
      if (VAR_4.dmac0_fifo_ptr > 0) {
        VAR_4.dmac0_fifo_ptr--;
        VAR_8[VAR_6 / 2] = VAR_4.dmac_fifo[0];
        FUNC_1(&VAR_4.dmac_fifo[0], &VAR_4.dmac_fifo[1],
          VAR_4.dmac0_fifo_ptr * 2);
      }
      return VAR_8[VAR_6 / 2];
    case 0x14:
    case 0x16:
    case 0x18:
    case 0x1a:
    case 0x1c:
      return 0;
  }


  if ((VAR_6 & 0x30) == 0x20) {
    int VAR_9 = 1 << (VAR_6 & 0x0f) / 2;
    if (VAR_4.comm_dirty_68k & VAR_9)
      VAR_4.comm_dirty_68k &= ~VAR_9;
    else
      FUNC_5(VAR_7, VAR_6, VAR_5, 3);
    FUNC_6(VAR_7);
    return VAR_8[VAR_6 / 2];
  }
  if ((VAR_6 & 0x30) == 0x30)
    return FUNC_2(VAR_6, VAR_7, FUNC_3(VAR_7));

  FUNC_0(VAR_7, VAR_0|VAR_1,
    "unhandled sysreg r16 [%02x] @%08x", VAR_6, FUNC_4(VAR_7));
  return 0;
}
