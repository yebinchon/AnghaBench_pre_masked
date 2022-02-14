
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct phm_regs {int mask; int* values; int count; } ;
struct phantom_device {int status; int ctl_reg; int wait; int counter; scalar_t__ iaddr; int regs_lock; scalar_t__ oaddr; struct phm_regs oregs; } ;
typedef int irqreturn_t ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 unsigned int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_6, void *VAR_7)
{
 struct phantom_device *VAR_8 = VAR_7;
 unsigned int VAR_9;
 u32 VAR_10;

 FUNC_5(&VAR_8->regs_lock);
 VAR_10 = FUNC_2(VAR_8->iaddr + VAR_3);
 if (!(VAR_10 & VAR_5)) {
  FUNC_6(&VAR_8->regs_lock);
  return VAR_1;
 }

 FUNC_3(0, VAR_8->iaddr);
 FUNC_3(0xc0, VAR_8->iaddr);

 if (VAR_8->status & VAR_2) {
  struct phm_regs *VAR_11 = &VAR_8->oregs;
  u32 VAR_12 = FUNC_4(VAR_11->count, 8U);

  for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9++)
   if (VAR_11->mask & FUNC_0(VAR_9))
    FUNC_3(VAR_11->values[VAR_9], VAR_8->oaddr + VAR_9);

  VAR_8->ctl_reg ^= VAR_4;
  FUNC_3(VAR_8->ctl_reg, VAR_8->iaddr + VAR_3);
 }
 FUNC_6(&VAR_8->regs_lock);

 FUNC_2(VAR_8->iaddr);

 FUNC_1(&VAR_8->counter);
 FUNC_7(&VAR_8->wait);

 return VAR_0;
}
