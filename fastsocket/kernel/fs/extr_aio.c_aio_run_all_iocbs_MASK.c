
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kioctx {int ctx_lock; } ;


 scalar_t__ FUNC_0 (struct kioctx*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct kioctx *VAR_0)
{
 FUNC_1(&VAR_0->ctx_lock);
 while (FUNC_0(VAR_0))
  ;
 FUNC_2(&VAR_0->ctx_lock);
}
