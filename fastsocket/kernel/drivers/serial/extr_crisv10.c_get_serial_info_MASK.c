
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct serial_struct {int port; int custom_divisor; int closing_wait; int close_delay; int baud_base; int flags; int irq; int line; int type; } ;
struct e100_serial {int custom_divisor; int closing_wait; int close_delay; int baud_base; int flags; int irq; scalar_t__ ioport; int line; int type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct serial_struct*,struct serial_struct*,int) ;
 int FUNC_1 (struct serial_struct*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct e100_serial * VAR_1,
  struct serial_struct * VAR_2)
{
 struct serial_struct VAR_3;






 if (!VAR_2)
  return -VAR_0;
 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.type = VAR_1->type;
 VAR_3.line = VAR_1->line;
 VAR_3.port = (int)VAR_1->ioport;
 VAR_3.irq = VAR_1->irq;
 VAR_3.flags = VAR_1->flags;
 VAR_3.baud_base = VAR_1->baud_base;
 VAR_3.close_delay = VAR_1->close_delay;
 VAR_3.closing_wait = VAR_1->closing_wait;
 VAR_3.custom_divisor = VAR_1->custom_divisor;
 if (FUNC_0(VAR_2, &VAR_3, sizeof(*VAR_2)))
  return -VAR_0;
 return 0;
}
