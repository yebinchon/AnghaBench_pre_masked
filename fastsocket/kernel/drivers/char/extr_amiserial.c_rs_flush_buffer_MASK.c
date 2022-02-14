
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int name; struct async_struct* driver_data; } ;
struct TYPE_2__ {scalar_t__ tail; scalar_t__ head; } ;
struct async_struct {TYPE_1__ xmit; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (struct async_struct*,int ,char*) ;
 int FUNC_3 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_0)
{
 struct async_struct *VAR_1 = VAR_0->driver_data;
 unsigned long VAR_2;

 if (FUNC_2(VAR_1, VAR_0->name, "rs_flush_buffer"))
  return;
 FUNC_1(VAR_2);
 VAR_1->xmit.head = VAR_1->xmit.tail = 0;
 FUNC_0(VAR_2);
 FUNC_3(VAR_0);
}
