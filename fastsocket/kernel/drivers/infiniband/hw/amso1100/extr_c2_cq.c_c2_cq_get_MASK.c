
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c2_dev {int lock; struct c2_cq** qptr_array; } ;
struct c2_cq {int refcount; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static struct c2_cq *FUNC_3(struct c2_dev *VAR_0, int VAR_1)
{
 struct c2_cq *VAR_2;
 unsigned long VAR_3;

 FUNC_1(&VAR_0->lock, VAR_3);
 VAR_2 = VAR_0->qptr_array[VAR_1];
 if (!VAR_2) {
  FUNC_2(&VAR_0->lock, VAR_3);
  return ((void*)0);
 }
 FUNC_0(&VAR_2->refcount);
 FUNC_2(&VAR_0->lock, VAR_3);
 return VAR_2;
}
