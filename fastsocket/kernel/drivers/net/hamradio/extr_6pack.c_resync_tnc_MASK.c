
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {unsigned long data; void (* function ) (unsigned long) ;scalar_t__ expires; } ;
struct sixpack {int status; int status1; int led_state; TYPE_4__ resync_t; TYPE_2__* tty; scalar_t__ status2; scalar_t__ rx_count_cooked; scalar_t__ rx_count; } ;
struct TYPE_7__ {TYPE_1__* ops; } ;
struct TYPE_6__ {int (* write ) (TYPE_2__*,char*,int) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_2__*,int*,int) ;
 int FUNC_3 (TYPE_2__*,char*,int) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_2)
{
 struct sixpack *VAR_3 = (struct sixpack *) VAR_2;
 static char VAR_4 = 0xe8;



 VAR_3->rx_count = 0;
 VAR_3->rx_count_cooked = 0;



 VAR_3->status = 1;
 VAR_3->status1 = 1;
 VAR_3->status2 = 0;



 VAR_3->led_state = 0x60;
 VAR_3->tty->ops->write(VAR_3->tty, &VAR_3->led_state, 1);
 VAR_3->tty->ops->write(VAR_3->tty, &VAR_4, 1);




 FUNC_1(&VAR_3->resync_t);
 VAR_3->resync_t.data = (unsigned long) VAR_3;
 VAR_3->resync_t.function = FUNC_4;
 VAR_3->resync_t.expires = VAR_1 + VAR_0;
 FUNC_0(&VAR_3->resync_t);
}
