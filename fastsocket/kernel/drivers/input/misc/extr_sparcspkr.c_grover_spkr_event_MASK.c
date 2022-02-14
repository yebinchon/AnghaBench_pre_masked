
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct grover_beep_info {scalar_t__ enable_reg; scalar_t__ freq_regs; } ;
struct TYPE_4__ {struct grover_beep_info grover; } ;
struct sparcspkr_state {int lock; TYPE_2__ u; } ;
struct TYPE_3__ {int parent; } ;
struct input_dev {TYPE_1__ dev; } ;


 unsigned int VAR_0 ;


 struct sparcspkr_state* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct input_dev *VAR_1, unsigned int VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct sparcspkr_state *VAR_5 = FUNC_0(VAR_1->dev.parent);
 struct grover_beep_info *VAR_6 = &VAR_5->u.grover;
 unsigned int VAR_7 = 0;
 unsigned long VAR_8;

 if (VAR_2 != VAR_0)
  return -1;

 switch (VAR_3) {
  case 129: if (VAR_4) VAR_4 = 1000;
  case 128: break;
  default: return -1;
 }

 if (VAR_4 > 20 && VAR_4 < 32767)
  VAR_7 = 1193182 / VAR_4;

 FUNC_4(&VAR_5->lock, VAR_8);

 if (VAR_7) {

  FUNC_3(FUNC_1(VAR_6->enable_reg) | 3, VAR_6->enable_reg);

  FUNC_3(0xB6, VAR_6->freq_regs + 1);

  FUNC_3(VAR_7 & 0xff, VAR_6->freq_regs + 0);
  FUNC_3((VAR_7 >> 8) & 0xff, VAR_6->freq_regs + 0);
 } else {

  FUNC_3(FUNC_2(VAR_6->enable_reg) & 0xFC, VAR_6->enable_reg);
 }

 FUNC_5(&VAR_5->lock, VAR_8);

 return 0;
}
