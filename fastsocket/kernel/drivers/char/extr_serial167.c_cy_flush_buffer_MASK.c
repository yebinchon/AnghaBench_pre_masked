
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct cyclades_port* driver_data; } ;
struct cyclades_port {scalar_t__ xmit_tail; scalar_t__ xmit_head; scalar_t__ xmit_cnt; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (struct cyclades_port*,int ,char*) ;
 int FUNC_4 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_0)
{
 struct cyclades_port *VAR_1 = VAR_0->driver_data;
 unsigned long VAR_2;





 if (FUNC_3(VAR_1, VAR_0->name, "cy_flush_buffer"))
  return;
 FUNC_1(VAR_2);
 VAR_1->xmit_cnt = VAR_1->xmit_head = VAR_1->xmit_tail = 0;
 FUNC_0(VAR_2);
 FUNC_4(VAR_0);
}
