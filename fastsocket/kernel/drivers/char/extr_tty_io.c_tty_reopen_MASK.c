
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int ldisc_mutex; int flags; struct tty_driver* driver; scalar_t__ count; TYPE_1__* link; } ;
struct tty_driver {scalar_t__ type; scalar_t__ subtype; } ;
struct TYPE_2__ {int count; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_5)
{
 struct tty_driver *VAR_6 = VAR_5->driver;

 if (FUNC_3(VAR_2, &VAR_5->flags))
  return -VAR_0;

 if (VAR_6->type == VAR_3 &&
     VAR_6->subtype == VAR_1) {




  if (VAR_5->count)
   return -VAR_0;

  VAR_5->link->count++;
 }
 VAR_5->count++;
 VAR_5->driver = VAR_6;

 FUNC_1(&VAR_5->ldisc_mutex);
 FUNC_0(!FUNC_3(VAR_4, &VAR_5->flags));
 FUNC_2(&VAR_5->ldisc_mutex);

 return 0;
}
