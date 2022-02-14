
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int name; struct esp_struct* driver_data; } ;
struct TYPE_2__ {int open_wait; int * tty; int flags; scalar_t__ count; } ;
struct esp_struct {TYPE_1__ port; } ;


 int VAR_0 ;
 int FUNC_0 (struct tty_struct*) ;
 scalar_t__ FUNC_1 (struct esp_struct*,int ,char*) ;
 int FUNC_2 (struct esp_struct*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_1)
{
 struct esp_struct *VAR_2 = VAR_1->driver_data;

 if (FUNC_1(VAR_2, VAR_1->name, "esp_hangup"))
  return;

 FUNC_0(VAR_1);
 FUNC_2(VAR_2);
 VAR_2->port.count = 0;
 VAR_2->port.flags &= ~VAR_0;
 VAR_2->port.tty = ((void*)0);
 FUNC_3(&VAR_2->port.open_wait);
}
