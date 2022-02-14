
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct tty_struct {TYPE_1__ buf; int flags; int read_wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int) ;

void FUNC_6(struct tty_struct *VAR_2)
{
 unsigned long VAR_3;
 FUNC_2(&VAR_2->buf.lock, VAR_3);




 if (FUNC_4(VAR_0, &VAR_2->flags)) {
  FUNC_1(VAR_1, &VAR_2->flags);
  FUNC_3(&VAR_2->buf.lock, VAR_3);
  FUNC_5(VAR_2->read_wait,
    FUNC_4(VAR_1, &VAR_2->flags) == 0);
  return;
 } else
  FUNC_0(VAR_2);
 FUNC_3(&VAR_2->buf.lock, VAR_3);
}
