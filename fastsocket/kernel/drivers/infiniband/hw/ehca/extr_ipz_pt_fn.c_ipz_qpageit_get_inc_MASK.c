
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ipz_queue {scalar_t__ current_q_offset; int pagesize; scalar_t__ queue_length; } ;


 int FUNC_0 (char*) ;
 void* FUNC_1 (struct ipz_queue*) ;

void *FUNC_2(struct ipz_queue *VAR_0)
{
 void *VAR_1 = FUNC_1(VAR_0);
 VAR_0->current_q_offset += VAR_0->pagesize;
 if (VAR_0->current_q_offset > VAR_0->queue_length) {
  VAR_0->current_q_offset -= VAR_0->pagesize;
  VAR_1 = ((void*)0);
 }
 if (((u64)VAR_1) % VAR_0->pagesize) {
  FUNC_0("ERROR!! not at PAGE-Boundary");
  return ((void*)0);
 }
 return VAR_1;
}
