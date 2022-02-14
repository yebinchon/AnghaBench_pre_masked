
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clx2_queue {int last_used; int first_empty; scalar_t__ n_bd; } ;



__attribute__((used)) static inline int FUNC_0(const struct clx2_queue *VAR_0)
{
 int VAR_1 = VAR_0->last_used - VAR_0->first_empty;
 if (VAR_1 <= 0)
  VAR_1 += VAR_0->n_bd;
 VAR_1 -= 2;
 if (VAR_1 < 0)
  VAR_1 = 0;
 return VAR_1;
}
