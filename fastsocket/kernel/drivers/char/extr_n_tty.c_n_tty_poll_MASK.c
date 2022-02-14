
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int minimum_to_wake; TYPE_2__* ops; int flags; TYPE_1__* link; scalar_t__ packet; int write_wait; int read_wait; } ;
struct file {int dummy; } ;
typedef int poll_table ;
struct TYPE_4__ {scalar_t__ write; } ;
struct TYPE_3__ {scalar_t__ ctrl_status; } ;


 int FUNC_0 (struct tty_struct*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (struct tty_struct*,int) ;
 int FUNC_3 (struct file*,int *,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (struct tty_struct*) ;
 scalar_t__ FUNC_6 (struct file*) ;
 int FUNC_7 (struct tty_struct*) ;
 scalar_t__ FUNC_8 (struct tty_struct*) ;

__attribute__((used)) static unsigned int FUNC_9(struct tty_struct *VAR_8, struct file *VAR_9,
       poll_table *VAR_10)
{
 unsigned int VAR_11 = 0;

 FUNC_3(VAR_9, &VAR_8->read_wait, VAR_10);
 FUNC_3(VAR_9, &VAR_8->write_wait, VAR_10);
 if (FUNC_2(VAR_8, FUNC_1(VAR_8) ? 0 : FUNC_0(VAR_8)))
  VAR_11 |= VAR_1 | VAR_4;
 if (VAR_8->packet && VAR_8->link->ctrl_status)
  VAR_11 |= VAR_3 | VAR_1 | VAR_4;
 if (FUNC_4(VAR_6, &VAR_8->flags))
  VAR_11 |= VAR_0;
 if (FUNC_6(VAR_9))
  VAR_11 |= VAR_0;
 if (!(VAR_11 & (VAR_0 | VAR_1 | VAR_4))) {
  if (FUNC_0(VAR_8) && !FUNC_1(VAR_8))
   VAR_8->minimum_to_wake = FUNC_0(VAR_8);
  else
   VAR_8->minimum_to_wake = 1;
 }
 if (VAR_8->ops->write && !FUNC_7(VAR_8) &&
   FUNC_5(VAR_8) < VAR_7 &&
   FUNC_8(VAR_8) > 0)
  VAR_11 |= VAR_2 | VAR_5;
 return VAR_11;
}
