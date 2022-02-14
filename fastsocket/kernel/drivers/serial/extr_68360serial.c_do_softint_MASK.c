
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_3__ {struct tty_struct* tty; } ;
struct TYPE_4__ {int event; TYPE_1__ port; } ;
typedef TYPE_2__ ser_info_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
 ser_info_t *VAR_2 = (ser_info_t *) VAR_1;
 struct tty_struct *VAR_3;

 VAR_3 = VAR_2->port.tty;
 if (!VAR_3)
  return;

 if (FUNC_0(VAR_0, &VAR_2->event))
  FUNC_1(VAR_3);
}
