
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int head; int tail; char* buf; } ;
struct async_struct {char x_char; TYPE_4__ xmit; TYPE_3__* tty; TYPE_2__* state; } ;
struct TYPE_13__ {int (* write ) (TYPE_5__*,char*,int) ;} ;
struct TYPE_11__ {scalar_t__ stopped; scalar_t__ hw_stopped; } ;
struct TYPE_9__ {int tx; } ;
struct TYPE_10__ {TYPE_1__ icount; } ;


 int FUNC_0 (int,int,int) ;
 int VAR_0 ;
 TYPE_5__* VAR_1 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*,int,int,scalar_t__) ;
 int FUNC_5 (TYPE_5__*,char*,int) ;
 int FUNC_6 (TYPE_5__*,char*,int) ;
 int FUNC_7 (TYPE_5__*,char*,int) ;

__attribute__((used)) static void FUNC_8(struct async_struct *VAR_2, int *VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;


 FUNC_2(VAR_5);

 if (VAR_2->x_char) {
  char VAR_6 = VAR_2->x_char;

  VAR_1->write(VAR_1, &VAR_6, 1);

  VAR_2->state->icount.tx++;
  VAR_2->x_char = 0;

  goto out;
 }

 if (VAR_2->xmit.head == VAR_2->xmit.tail || VAR_2->tty->stopped || VAR_2->tty->hw_stopped) {




  goto out;
 }
 VAR_4 = FUNC_3(FUNC_0(VAR_2->xmit.head, VAR_2->xmit.tail, VAR_0),
      VAR_0 - VAR_2->xmit.tail);
 VAR_1->write(VAR_1, VAR_2->xmit.buf+VAR_2->xmit.tail, VAR_4);

 VAR_2->xmit.tail = (VAR_2->xmit.tail+VAR_4) & (VAR_0-1);




 VAR_4 = FUNC_0(VAR_2->xmit.head, VAR_2->xmit.tail, VAR_0);
 if (VAR_4) {
  VAR_1->write(VAR_1, VAR_2->xmit.buf, VAR_4);
  VAR_2->xmit.tail += VAR_4;
 }
out:
 FUNC_1(VAR_5);
}
