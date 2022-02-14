
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef int u16 ;
struct nes_hw_aeqe {scalar_t__* aeqe_words; } ;
struct nes_hw_aeq {size_t aeq_head; size_t aeq_size; struct nes_hw_aeqe* aeq_vbase; } ;
struct nes_device {scalar_t__ regs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct nes_device*,struct nes_hw_aeqe*) ;
 int FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct nes_device *VAR_8, struct nes_hw_aeq *VAR_9)
{

 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 struct nes_hw_aeqe volatile *VAR_14;

 VAR_10 = VAR_9->aeq_head;
 VAR_11 = VAR_9->aeq_size;

 do {
  VAR_14 = &VAR_9->aeq_vbase[VAR_10];
  if ((FUNC_0(VAR_14->aeqe_words[VAR_2]) & VAR_4) == 0)
   break;
  VAR_12 = FUNC_0(VAR_14->aeqe_words[VAR_2]);
  VAR_13 = FUNC_0(VAR_14->aeqe_words[VAR_0]);
  if (VAR_12 & (VAR_3|VAR_1)) {
   if (VAR_13 >= VAR_7) {





    FUNC_2(VAR_8, (struct nes_hw_aeqe *)VAR_14);
   } else {

    FUNC_1(VAR_6, "Processing CQP related AE, misc = 0x%04X\n",
      (u16)(VAR_12 >> 16));
   }
  }

  VAR_14->aeqe_words[VAR_2] = 0;

  if (++VAR_10 >= VAR_11)
   VAR_10 = 0;

  FUNC_3(VAR_8->regs + VAR_5, 1 << 16);
 }
 while (1);
 VAR_9->aeq_head = VAR_10;
}
