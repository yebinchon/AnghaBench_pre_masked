
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fifo {int size; int lock; int count; int r; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_2(struct fifo *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2;

 if (!VAR_0) {
  return -1;
 }

 FUNC_0(&VAR_0->lock, VAR_1);
 if (!VAR_0->count) {

  VAR_2 = -1;
 } else {

  VAR_2 = VAR_0->r++ & (VAR_0->size-1);
  VAR_0->count--;
 }
 FUNC_1(&VAR_0->lock, VAR_1);

 return VAR_2;
}
