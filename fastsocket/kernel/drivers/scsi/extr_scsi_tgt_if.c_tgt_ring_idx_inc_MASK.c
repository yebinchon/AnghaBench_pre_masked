
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tgt_ring {int tr_idx; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct tgt_ring *VAR_1)
{
 if (VAR_1->tr_idx == VAR_0 - 1)
  VAR_1->tr_idx = 0;
 else
  VAR_1->tr_idx++;
}
