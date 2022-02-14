
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etrax_recv_buffer {scalar_t__ length; struct etrax_recv_buffer* next; } ;
struct e100_serial {scalar_t__ recv_cnt; scalar_t__ max_recv_cnt; struct etrax_recv_buffer* last_recv_buffer; struct etrax_recv_buffer* first_recv_buffer; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static void
FUNC_2(struct e100_serial *VAR_0, struct etrax_recv_buffer *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(VAR_2);

 if (!VAR_0->first_recv_buffer)
  VAR_0->first_recv_buffer = VAR_1;
 else
  VAR_0->last_recv_buffer->next = VAR_1;

 VAR_0->last_recv_buffer = VAR_1;

 VAR_0->recv_cnt += VAR_1->length;
 if (VAR_0->recv_cnt > VAR_0->max_recv_cnt)
  VAR_0->max_recv_cnt = VAR_0->recv_cnt;

 FUNC_0(VAR_2);
}
