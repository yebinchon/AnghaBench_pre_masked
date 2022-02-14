
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvfc_crq_queue {size_t cur; size_t size; struct ibmvfc_crq* msgs; } ;
struct ibmvfc_host {struct ibmvfc_crq_queue crq; } ;
struct ibmvfc_crq {int valid; } ;


 int FUNC_0 () ;

__attribute__((used)) static struct ibmvfc_crq *FUNC_1(struct ibmvfc_host *VAR_0)
{
 struct ibmvfc_crq_queue *VAR_1 = &VAR_0->crq;
 struct ibmvfc_crq *VAR_2;

 VAR_2 = &VAR_1->msgs[VAR_1->cur];
 if (VAR_2->valid & 0x80) {
  if (++VAR_1->cur == VAR_1->size)
   VAR_1->cur = 0;
  FUNC_0();
 } else
  VAR_2 = ((void*)0);

 return VAR_2;
}
