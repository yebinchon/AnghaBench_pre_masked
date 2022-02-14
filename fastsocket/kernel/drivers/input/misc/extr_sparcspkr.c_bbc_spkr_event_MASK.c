
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bbc_beep_info {scalar_t__ regs; } ;
struct TYPE_4__ {struct bbc_beep_info bbc; } ;
struct sparcspkr_state {int lock; TYPE_2__ u; } ;
struct TYPE_3__ {int parent; } ;
struct input_dev {TYPE_1__ dev; } ;


 unsigned int VAR_0 ;


 unsigned int FUNC_0 (struct bbc_beep_info*,unsigned int) ;
 struct sparcspkr_state* FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct input_dev *VAR_1, unsigned int VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct sparcspkr_state *VAR_5 = FUNC_1(VAR_1->dev.parent);
 struct bbc_beep_info *VAR_6 = &VAR_5->u.bbc;
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

 VAR_7 = FUNC_0(VAR_6, VAR_7);

 FUNC_3(&VAR_5->lock, VAR_8);

 if (VAR_7) {
  FUNC_2(0x01, VAR_6->regs + 0);
  FUNC_2(0x00, VAR_6->regs + 2);
  FUNC_2((VAR_7 >> 16) & 0xff, VAR_6->regs + 3);
  FUNC_2((VAR_7 >> 8) & 0xff, VAR_6->regs + 4);
  FUNC_2(0x00, VAR_6->regs + 5);
 } else {
  FUNC_2(0x00, VAR_6->regs + 0);
 }

 FUNC_4(&VAR_5->lock, VAR_8);

 return 0;
}
