
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c2_cq {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct c2_cq *VAR_0, struct c2_cq *VAR_1)
{
 if (VAR_0 == VAR_1)
  FUNC_1(&VAR_0->lock);
 else if (VAR_0 > VAR_1) {
  FUNC_0(&VAR_1->lock);
  FUNC_1(&VAR_0->lock);
 } else {
  FUNC_0(&VAR_0->lock);
  FUNC_1(&VAR_1->lock);
 }
}
