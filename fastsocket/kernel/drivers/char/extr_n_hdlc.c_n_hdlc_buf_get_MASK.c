
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct n_hdlc_buf_list {int spinlock; int * tail; struct n_hdlc_buf* head; int count; } ;
struct n_hdlc_buf {struct n_hdlc_buf* link; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static struct n_hdlc_buf* FUNC_2(struct n_hdlc_buf_list *VAR_0)
{
 unsigned long VAR_1;
 struct n_hdlc_buf *VAR_2;
 FUNC_0(&VAR_0->spinlock,VAR_1);

 VAR_2 = VAR_0->head;
 if (VAR_2) {
  VAR_0->head = VAR_2->link;
  (VAR_0->count)--;
 }
 if (!VAR_0->head)
  VAR_0->tail = ((void*)0);

 FUNC_1(&VAR_0->spinlock,VAR_1);
 return VAR_2;

}
