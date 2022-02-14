
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int name; scalar_t__ driver_data; } ;
struct TYPE_3__ {int mcr; int x_char; } ;
typedef TYPE_1__ modem_info ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,char*) ;

__attribute__((used)) static void
FUNC_3(struct tty_struct *VAR_1)
{
 modem_info *VAR_2 = (modem_info *) VAR_1->driver_data;

 if (FUNC_2(VAR_2, VAR_1->name, "isdn_tty_throttle"))
  return;
 if (FUNC_0(VAR_1))
  VAR_2->x_char = FUNC_1(VAR_1);
 VAR_2->mcr &= ~VAR_0;
}
