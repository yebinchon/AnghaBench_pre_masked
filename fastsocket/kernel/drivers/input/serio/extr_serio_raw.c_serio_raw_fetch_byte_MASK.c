
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serio_raw {size_t head; size_t tail; char* queue; TYPE_1__* serio; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct serio_raw *VAR_1, char *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 FUNC_0(&VAR_1->serio->lock, VAR_3);

 VAR_4 = VAR_1->head == VAR_1->tail;
 if (!VAR_4) {
  *VAR_2 = VAR_1->queue[VAR_1->tail];
  VAR_1->tail = (VAR_1->tail + 1) % VAR_0;
 }

 FUNC_1(&VAR_1->serio->lock, VAR_3);

 return !VAR_4;
}
