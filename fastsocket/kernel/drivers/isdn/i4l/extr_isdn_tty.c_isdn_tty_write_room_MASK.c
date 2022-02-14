
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int name; scalar_t__ driver_data; } ;
struct TYPE_3__ {int xmit_size; int xmit_count; int online; } ;
typedef TYPE_1__ modem_info ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ,char*) ;

__attribute__((used)) static int
FUNC_1(struct tty_struct *VAR_0)
{
 modem_info *VAR_1 = (modem_info *) VAR_0->driver_data;
 int VAR_2;

 if (FUNC_0(VAR_1, VAR_0->name, "isdn_tty_write_room"))
  return 0;
 if (!VAR_1->online)
  return VAR_1->xmit_size;
 VAR_2 = VAR_1->xmit_size - VAR_1->xmit_count;
 return (VAR_2 < 0) ? 0 : VAR_2;
}
