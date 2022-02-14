
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxnet3_cmd_ring {scalar_t__ next2fill; scalar_t__ size; int gen; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline void
FUNC_2(struct vmxnet3_cmd_ring *VAR_0)
{
 VAR_0->next2fill++;
 if (FUNC_1(VAR_0->next2fill == VAR_0->size)) {
  VAR_0->next2fill = 0;
  FUNC_0(VAR_0->gen);
 }
}
