
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct cas {scalar_t__ regs; } ;
struct TYPE_3__ {int val; int mask; int outarg; int outop; int fnext; int foff; int snext; int soff; int op; int outmask; int outshift; int outenab; scalar_t__ note; } ;
typedef TYPE_1__ cas_hp_inst_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct cas *VAR_17, cas_hp_inst_t *VAR_18)
{
 cas_hp_inst_t *VAR_19;
 u32 VAR_20;
 int VAR_21;

 VAR_21 = 0;
 while ((VAR_19 = VAR_18) && VAR_19->note) {
  FUNC_1(VAR_21, VAR_17->regs + VAR_13);

  VAR_20 = FUNC_0(VAR_1, VAR_19->val);
  VAR_20 |= FUNC_0(VAR_0, VAR_19->mask);
  FUNC_1(VAR_20, VAR_17->regs + VAR_14);

  VAR_20 = FUNC_0(VAR_9, VAR_19->outarg >> 10);
  VAR_20 |= FUNC_0(VAR_10, VAR_19->outop);
  VAR_20 |= FUNC_0(VAR_6, VAR_19->fnext);
  VAR_20 |= FUNC_0(VAR_7, VAR_19->foff);
  VAR_20 |= FUNC_0(VAR_11, VAR_19->snext);
  VAR_20 |= FUNC_0(VAR_12, VAR_19->soff);
  VAR_20 |= FUNC_0(VAR_8, VAR_19->op);
  FUNC_1(VAR_20, VAR_17->regs + VAR_16);

  VAR_20 = FUNC_0(VAR_4, VAR_19->outmask);
  VAR_20 |= FUNC_0(VAR_5, VAR_19->outshift);
  VAR_20 |= FUNC_0(VAR_3, VAR_19->outenab);
  VAR_20 |= FUNC_0(VAR_2, VAR_19->outarg);
  FUNC_1(VAR_20, VAR_17->regs + VAR_15);
  ++VAR_18;
  ++VAR_21;
 }
}
