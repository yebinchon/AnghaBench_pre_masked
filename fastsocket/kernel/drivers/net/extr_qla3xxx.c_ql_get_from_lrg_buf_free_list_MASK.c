
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_rcv_buf_cb {struct ql_rcv_buf_cb* next; } ;
struct ql3_adapter {int lrg_buf_free_count; int * lrg_buf_free_tail; struct ql_rcv_buf_cb* lrg_buf_free_head; } ;



__attribute__((used)) static struct ql_rcv_buf_cb *FUNC_0(struct ql3_adapter
          *VAR_0)
{
 struct ql_rcv_buf_cb *VAR_1;

 if ((VAR_1 = VAR_0->lrg_buf_free_head) != ((void*)0)) {
  if ((VAR_0->lrg_buf_free_head = VAR_1->next) == ((void*)0))
   VAR_0->lrg_buf_free_tail = ((void*)0);
  VAR_0->lrg_buf_free_count--;
 }

 return VAR_1;
}
