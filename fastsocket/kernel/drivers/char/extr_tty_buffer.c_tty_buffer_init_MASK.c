
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int work; scalar_t__ memory_used; int * free; int * tail; int * head; int lock; } ;
struct tty_struct {TYPE_1__ buf; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

void FUNC_2(struct tty_struct *VAR_1)
{
 FUNC_1(&VAR_1->buf.lock);
 VAR_1->buf.head = ((void*)0);
 VAR_1->buf.tail = ((void*)0);
 VAR_1->buf.free = ((void*)0);
 VAR_1->buf.memory_used = 0;
 FUNC_0(&VAR_1->buf.work, VAR_0);
}
