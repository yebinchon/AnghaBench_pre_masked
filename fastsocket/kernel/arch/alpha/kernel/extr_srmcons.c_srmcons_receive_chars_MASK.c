
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct srmcons_private {int lock; TYPE_1__ timer; scalar_t__ tty; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void
FUNC_7(unsigned long VAR_2)
{
 struct srmcons_private *VAR_3 = (struct srmcons_private *)VAR_2;
 unsigned long VAR_4;
 int VAR_5 = 10;

 FUNC_2(VAR_4);
 if (FUNC_4(&VAR_1)) {
  if (!FUNC_6(VAR_3->tty))
   VAR_5 = 100;
  FUNC_5(&VAR_1);
 }

 FUNC_3(&VAR_3->lock);
 if (VAR_3->tty) {
  VAR_3->timer.expires = VAR_0 + VAR_5;
  FUNC_0(&VAR_3->timer);
 }
 FUNC_5(&VAR_3->lock);

 FUNC_1(VAR_4);
}
