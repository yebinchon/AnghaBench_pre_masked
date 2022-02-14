
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c2_cq {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static inline void FUNC_2(struct c2_cq *VAR_1, struct c2_cq *VAR_2)
{
 if (VAR_1 == VAR_2)
  FUNC_0(&VAR_1->lock);
 else if (VAR_1 > VAR_2) {
  FUNC_0(&VAR_1->lock);
  FUNC_1(&VAR_2->lock, VAR_0);
 } else {
  FUNC_0(&VAR_2->lock);
  FUNC_1(&VAR_1->lock, VAR_0);
 }
}
