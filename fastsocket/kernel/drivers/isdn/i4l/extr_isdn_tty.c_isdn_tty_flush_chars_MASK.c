
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int name; scalar_t__ driver_data; } ;
struct TYPE_3__ {int xmit_queue; scalar_t__ xmit_count; } ;
typedef TYPE_1__ modem_info ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct tty_struct *VAR_1)
{
 modem_info *VAR_2 = (modem_info *) VAR_1->driver_data;

 if (FUNC_1(VAR_2, VAR_1->name, "isdn_tty_flush_chars"))
  return;
 if ((VAR_2->xmit_count) || !FUNC_2(&VAR_2->xmit_queue))
  FUNC_0(VAR_0, 1);
}
