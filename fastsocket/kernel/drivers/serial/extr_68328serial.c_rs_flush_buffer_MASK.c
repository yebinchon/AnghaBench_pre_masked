
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; scalar_t__ driver_data; } ;
struct m68k_serial {scalar_t__ xmit_tail; scalar_t__ xmit_head; scalar_t__ xmit_cnt; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (struct m68k_serial*,int ,char*) ;
 int FUNC_3 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_0)
{
 struct m68k_serial *VAR_1 = (struct m68k_serial *)VAR_0->driver_data;
 unsigned long VAR_2;

 if (FUNC_2(VAR_1, VAR_0->name, "rs_flush_buffer"))
  return;
 FUNC_1(VAR_2);
 VAR_1->xmit_cnt = VAR_1->xmit_head = VAR_1->xmit_tail = 0;
 FUNC_0(VAR_2);
 FUNC_3(VAR_0);
}
