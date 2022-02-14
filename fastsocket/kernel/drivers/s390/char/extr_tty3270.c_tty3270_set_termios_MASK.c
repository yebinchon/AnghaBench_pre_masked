
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct tty3270* driver_data; } ;
struct TYPE_2__ {int lock; } ;
struct tty3270 {int inattr; TYPE_1__ view; } ;
struct ktermios {int dummy; } ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tty3270*,int) ;
 int FUNC_5 (struct tty3270*,int *,int ) ;

__attribute__((used)) static void
FUNC_6(struct tty_struct *VAR_2, struct ktermios *VAR_3)
{
 struct tty3270 *VAR_4;
 int VAR_5;

 VAR_4 = VAR_2->driver_data;
 if (!VAR_4)
  return;
 FUNC_2(&VAR_4->view.lock);
 if (FUNC_1(VAR_2)) {
  VAR_5 = FUNC_0(VAR_2) ? VAR_0: VAR_1;
  if (VAR_5 != VAR_4->inattr) {
   VAR_4->inattr = VAR_5;
   FUNC_5(VAR_4, ((void*)0), 0);
   FUNC_4(VAR_4, 1);
  }
 }
 FUNC_3(&VAR_4->view.lock);
}
