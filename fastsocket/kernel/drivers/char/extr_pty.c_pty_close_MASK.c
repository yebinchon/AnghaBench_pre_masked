
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {int count; TYPE_1__* link; TYPE_2__* driver; int flags; scalar_t__ packet; int write_wait; int read_wait; } ;
struct file {int dummy; } ;
struct TYPE_5__ {scalar_t__ subtype; } ;
struct TYPE_4__ {int write_wait; int read_wait; int flags; scalar_t__ packet; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct tty_struct *VAR_3, struct file *VAR_4)
{
 FUNC_0(!VAR_3);
 if (VAR_3->driver->subtype == VAR_0)
  FUNC_1(VAR_3->count > 1);
 else {
  if (VAR_3->count > 2)
   return;
 }
 FUNC_5(&VAR_3->read_wait);
 FUNC_5(&VAR_3->write_wait);
 VAR_3->packet = 0;
 if (!VAR_3->link)
  return;
 VAR_3->link->packet = 0;
 FUNC_3(VAR_1, &VAR_3->link->flags);
 FUNC_5(&VAR_3->link->read_wait);
 FUNC_5(&VAR_3->link->write_wait);
 if (VAR_3->driver->subtype == VAR_0) {
  FUNC_3(VAR_1, &VAR_3->flags);




  FUNC_4(VAR_3->link);
 }
}
