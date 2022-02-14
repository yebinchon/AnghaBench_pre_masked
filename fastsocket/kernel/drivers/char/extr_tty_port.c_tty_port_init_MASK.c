
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_port {int close_delay; int closing_wait; int lock; int mutex; int delta_msr_wait; int close_wait; int open_wait; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct tty_port*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct tty_port *VAR_1)
{
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 FUNC_0(&VAR_1->open_wait);
 FUNC_0(&VAR_1->close_wait);
 FUNC_0(&VAR_1->delta_msr_wait);
 FUNC_2(&VAR_1->mutex);
 FUNC_3(&VAR_1->lock);
 VAR_1->close_delay = (50 * VAR_0) / 100;
 VAR_1->closing_wait = (3000 * VAR_0) / 100;
}
