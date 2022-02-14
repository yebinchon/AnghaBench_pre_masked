
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct etrax_recv_buffer {int length; unsigned char error; unsigned char* buffer; } ;
struct TYPE_4__ {int rx; } ;
struct TYPE_3__ {struct tty_struct* tty; } ;
struct e100_serial {TYPE_2__ icount; TYPE_1__ port; scalar_t__ uses_dma_in; } ;


 struct etrax_recv_buffer* FUNC_0 (int) ;
 int FUNC_1 (struct e100_serial*,struct etrax_recv_buffer*) ;
 int FUNC_2 (struct tty_struct*,unsigned char,unsigned char) ;

__attribute__((used)) static int
FUNC_3(struct e100_serial *VAR_0, unsigned char VAR_1, unsigned char VAR_2)
{
 struct etrax_recv_buffer *VAR_3;
 if (VAR_0->uses_dma_in) {
  if (!(VAR_3 = FUNC_0(4)))
   return 0;

  VAR_3->length = 1;
  VAR_3->error = VAR_2;
  VAR_3->buffer[0] = VAR_1;

  FUNC_1(VAR_0, VAR_3);

  VAR_0->icount.rx++;
 } else {
  struct tty_struct *VAR_4 = VAR_0->port.tty;
  FUNC_2(VAR_4, VAR_1, VAR_2);
  VAR_0->icount.rx++;
 }

 return 1;
}
