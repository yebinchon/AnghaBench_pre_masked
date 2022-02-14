
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int work; } ;
struct TYPE_4__ {TYPE_3__ work; int lock; TYPE_2__* tail; } ;
struct tty_struct {TYPE_1__ buf; scalar_t__ low_latency; } ;
struct TYPE_5__ {int used; int commit; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct tty_struct *VAR_0)
{
 unsigned long VAR_1;
 FUNC_2(&VAR_0->buf.lock, VAR_1);
 if (VAR_0->buf.tail != ((void*)0))
  VAR_0->buf.tail->commit = VAR_0->buf.tail->used;
 FUNC_3(&VAR_0->buf.lock, VAR_1);

 if (VAR_0->low_latency)
  FUNC_0(&VAR_0->buf.work.work);
 else
  FUNC_1(&VAR_0->buf.work, 1);
}
