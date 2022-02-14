
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_mbox {int seq_snd; } ;
typedef int mbox_msg_t ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct omap_mbox *VAR_1, mbox_msg_t * VAR_2)
{
 if (!VAR_0)
  return;


 *VAR_2 = (*VAR_2 & 0x7fffffff) | VAR_1->seq_snd;

 VAR_1->seq_snd ^= 1 << 31;
}
