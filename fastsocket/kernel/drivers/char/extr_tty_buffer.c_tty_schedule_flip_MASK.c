
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int work; int lock; TYPE_1__* tail; } ;
struct tty_struct {TYPE_2__ buf; } ;
struct TYPE_3__ {int used; int commit; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct tty_struct *VAR_0)
{
 unsigned long VAR_1;
 FUNC_1(&VAR_0->buf.lock, VAR_1);
 if (VAR_0->buf.tail != ((void*)0))
  VAR_0->buf.tail->commit = VAR_0->buf.tail->used;
 FUNC_2(&VAR_0->buf.lock, VAR_1);
 FUNC_0(&VAR_0->buf.work, 1);
}
