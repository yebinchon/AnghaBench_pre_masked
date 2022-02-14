
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct n_hdlc_buf_list {int spinlock; int count; struct n_hdlc_buf* tail; struct n_hdlc_buf* head; } ;
struct n_hdlc_buf {struct n_hdlc_buf* link; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct n_hdlc_buf_list *VAR_0,
      struct n_hdlc_buf *VAR_1)
{
 unsigned long VAR_2;
 FUNC_0(&VAR_0->spinlock,VAR_2);

 VAR_1->link=((void*)0);
 if (VAR_0->tail)
  VAR_0->tail->link = VAR_1;
 else
  VAR_0->head = VAR_1;
 VAR_0->tail = VAR_1;
 (VAR_0->count)++;

 FUNC_1(&VAR_0->spinlock,VAR_2);

}
