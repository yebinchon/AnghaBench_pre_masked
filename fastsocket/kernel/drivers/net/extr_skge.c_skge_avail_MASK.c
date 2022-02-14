
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skge_ring {scalar_t__ to_clean; scalar_t__ to_use; int count; } ;


 int FUNC_0 () ;

__attribute__((used)) static inline int FUNC_1(const struct skge_ring *VAR_0)
{
 FUNC_0();
 return ((VAR_0->to_clean > VAR_0->to_use) ? 0 : VAR_0->count)
  + (VAR_0->to_clean - VAR_0->to_use) - 1;
}
