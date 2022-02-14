
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int name; struct async_struct* driver_data; } ;
struct async_struct {int IER; } ;
struct TYPE_2__ {void* intreq; void* intena; } ;


 void* VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct async_struct*,int ,char*) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_3)
{
 struct async_struct *VAR_4 = VAR_3->driver_data;
 unsigned long VAR_5;

 if (FUNC_3(VAR_4, VAR_3->name, "rs_stop"))
  return;

 FUNC_1(VAR_5);
 if (VAR_4->IER & VAR_1) {
  VAR_4->IER &= ~VAR_1;

  VAR_2.intena = VAR_0;
  FUNC_2();
  VAR_2.intreq = VAR_0;
  FUNC_2();
 }
 FUNC_0(VAR_5);
}
