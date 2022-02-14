
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxnet3_cmd_ring {scalar_t__ next2comp; scalar_t__ next2fill; int size; } ;



__attribute__((used)) static inline int
FUNC_0(struct vmxnet3_cmd_ring *VAR_0)
{
 return (VAR_0->next2comp > VAR_0->next2fill ? 0 : VAR_0->size) +
  VAR_0->next2comp - VAR_0->next2fill - 1;
}
