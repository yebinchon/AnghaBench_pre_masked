
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct etrax_recv_buffer {unsigned int length; int error; scalar_t__ buffer; struct etrax_recv_buffer* next; } ;
struct TYPE_2__ {struct tty_struct* tty; } ;
struct e100_serial {unsigned int recv_cnt; int * last_recv_buffer; struct etrax_recv_buffer* first_recv_buffer; TYPE_1__ port; } ;


 int VAR_0 ;
 int FUNC_0 (struct etrax_recv_buffer*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (scalar_t__,scalar_t__,unsigned int) ;
 int FUNC_4 (struct tty_struct*) ;
 int FUNC_5 (struct tty_struct*,scalar_t__,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct e100_serial *VAR_1)
{
 struct tty_struct *VAR_2;
 struct etrax_recv_buffer *VAR_3;
 unsigned long VAR_4;

 FUNC_2(VAR_4);
 VAR_2 = VAR_1->port.tty;

 if (!VAR_2) {
  FUNC_1(VAR_4);
  return;
 }

 while ((VAR_3 = VAR_1->first_recv_buffer) != ((void*)0)) {
  unsigned int VAR_5 = VAR_3->length;

  FUNC_5(VAR_2, VAR_3->buffer, VAR_5);
  VAR_1->recv_cnt -= VAR_5;

  if (VAR_5 == VAR_3->length) {
   VAR_1->first_recv_buffer = VAR_3->next;
   FUNC_0(VAR_3);
  } else {
   VAR_3->length -= VAR_5;
   FUNC_3(VAR_3->buffer, VAR_3->buffer + VAR_5, VAR_3->length);
   VAR_3->error = VAR_0;
  }
 }

 if (!VAR_1->first_recv_buffer)
  VAR_1->last_recv_buffer = ((void*)0);

 FUNC_1(VAR_4);


 FUNC_4(VAR_2);
}
