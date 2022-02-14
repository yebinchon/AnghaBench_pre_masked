
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {scalar_t__ driver_data; } ;
struct TYPE_2__ {scalar_t__ tail; scalar_t__ head; } ;
struct e100_serial {TYPE_1__ xmit; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct tty_struct*) ;

__attribute__((used)) static void
FUNC_3(struct tty_struct *VAR_0)
{
 struct e100_serial *VAR_1 = (struct e100_serial *)VAR_0->driver_data;
 unsigned long VAR_2;

 FUNC_1(VAR_2);
 VAR_1->xmit.head = VAR_1->xmit.tail = 0;
 FUNC_0(VAR_2);

 FUNC_2(VAR_0);
}
