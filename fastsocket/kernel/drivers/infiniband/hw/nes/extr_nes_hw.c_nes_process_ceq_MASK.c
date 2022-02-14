
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct nes_hw_cq {int (* ce_handler ) (struct nes_device*,struct nes_hw_cq*) ;} ;
struct nes_hw_ceq {size_t ceq_head; size_t ceq_size; TYPE_1__* ceq_vbase; } ;
struct nes_device {int dummy; } ;
struct TYPE_2__ {scalar_t__* ceqe_words; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct nes_device*,struct nes_hw_cq*) ;

__attribute__((used)) static void FUNC_3(struct nes_device *VAR_3, struct nes_hw_ceq *VAR_4)
{
 u64 VAR_5;
 struct nes_hw_cq *VAR_6;
 u32 VAR_7;
 u32 VAR_8;


 VAR_7 = VAR_4->ceq_head;
 VAR_8 = VAR_4->ceq_size;

 do {
  if (FUNC_1(VAR_4->ceq_vbase[VAR_7].ceqe_words[VAR_0]) &
    VAR_2) {
   VAR_5 = (((u64)(FUNC_1(VAR_4->ceq_vbase[VAR_7].ceqe_words[VAR_0]))) << 32) |
      ((u64)(FUNC_1(VAR_4->ceq_vbase[VAR_7].ceqe_words[VAR_1])));
   VAR_5 <<= 1;
   VAR_6 = *((struct nes_hw_cq **)&VAR_5);

   FUNC_0();
   VAR_4->ceq_vbase[VAR_7].ceqe_words[VAR_0] = 0;


   VAR_6->ce_handler(VAR_3, VAR_6);

   if (++VAR_7 >= VAR_8)
    VAR_7 = 0;
  } else {
   break;
  }

 } while (1);

 VAR_4->ceq_head = VAR_7;
}
