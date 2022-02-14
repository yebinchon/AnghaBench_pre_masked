
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int name; struct slgt_info* driver_data; } ;
struct TYPE_2__ {int open_wait; int * tty; int flags; scalar_t__ count; } ;
struct slgt_info {TYPE_1__ port; int device_name; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct tty_struct*) ;
 scalar_t__ FUNC_2 (struct slgt_info*,int ,char*) ;
 int FUNC_3 (struct slgt_info*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_1)
{
 struct slgt_info *VAR_2 = VAR_1->driver_data;

 if (FUNC_2(VAR_2, VAR_1->name, "hangup"))
  return;
 FUNC_0(("%s hangup\n", VAR_2->device_name));

 FUNC_1(VAR_1);
 FUNC_3(VAR_2);

 VAR_2->port.count = 0;
 VAR_2->port.flags &= ~VAR_0;
 VAR_2->port.tty = ((void*)0);

 FUNC_4(&VAR_2->port.open_wait);
}
