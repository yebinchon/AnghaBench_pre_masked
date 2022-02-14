
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viosrp_crq {int valid; } ;
struct crq_queue {size_t cur; size_t size; int lock; struct viosrp_crq* msgs; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static struct viosrp_crq *FUNC_2(struct crq_queue *VAR_0)
{
 struct viosrp_crq *VAR_1;
 unsigned long VAR_2;

 FUNC_0(&VAR_0->lock, VAR_2);
 VAR_1 = &VAR_0->msgs[VAR_0->cur];
 if (VAR_1->valid & 0x80) {
  if (++VAR_0->cur == VAR_0->size)
   VAR_0->cur = 0;
 } else
  VAR_1 = ((void*)0);
 FUNC_1(&VAR_0->lock, VAR_2);

 return VAR_1;
}
