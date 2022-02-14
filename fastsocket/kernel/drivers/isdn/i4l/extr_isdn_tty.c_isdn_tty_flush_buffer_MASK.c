
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {int name; scalar_t__ driver_data; } ;
struct TYPE_4__ {scalar_t__ xmit_count; } ;
typedef TYPE_1__ modem_info ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,char*) ;
 int FUNC_2 (struct tty_struct*) ;

__attribute__((used)) static void
FUNC_3(struct tty_struct *VAR_0)
{
 modem_info *VAR_1;

 if (!VAR_0) {
  return;
 }
 VAR_1 = (modem_info *) VAR_0->driver_data;
 if (FUNC_1(VAR_1, VAR_0->name, "isdn_tty_flush_buffer")) {
  return;
 }
 FUNC_0(VAR_1);
 VAR_1->xmit_count = 0;
 FUNC_2(VAR_0);
}
