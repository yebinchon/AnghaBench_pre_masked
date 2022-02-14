
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct carm_request {unsigned long long tag; scalar_t__ n_elem; } ;
struct carm_host {unsigned long long msg_alloc; scalar_t__ hw_sg_used; int n_msgs; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned long long VAR_1 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct carm_host *VAR_2, struct carm_request *VAR_3)
{
 FUNC_0(VAR_3->tag < VAR_1);

 if (FUNC_1((VAR_2->msg_alloc & (1ULL << VAR_3->tag)) == 0))
  return -VAR_0;

 FUNC_0(VAR_2->hw_sg_used >= VAR_3->n_elem);

 VAR_2->msg_alloc &= ~(1ULL << VAR_3->tag);
 VAR_2->hw_sg_used -= VAR_3->n_elem;
 VAR_2->n_msgs--;

 return 0;
}
