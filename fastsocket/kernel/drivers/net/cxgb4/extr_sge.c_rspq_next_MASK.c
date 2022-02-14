
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_rspq {int iqe_len; scalar_t__ cidx; scalar_t__ size; int gen; void* desc; void* cur_desc; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct sge_rspq *VAR_0)
{
 VAR_0->cur_desc = (void *)VAR_0->cur_desc + VAR_0->iqe_len;
 if (FUNC_0(++VAR_0->cidx == VAR_0->size)) {
  VAR_0->cidx = 0;
  VAR_0->gen ^= 1;
  VAR_0->cur_desc = VAR_0->desc;
 }
}
