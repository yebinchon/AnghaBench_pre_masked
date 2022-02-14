
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct gendisk {int flags; struct request_queue* queue; } ;
struct carm_host {TYPE_1__* port; } ;
struct TYPE_2__ {struct gendisk* disk; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct gendisk*) ;
 int FUNC_2 (struct gendisk*) ;

__attribute__((used)) static void FUNC_3(struct carm_host *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct gendisk *VAR_4 = VAR_2->port[VAR_3].disk;
  if (VAR_4) {
   struct request_queue *VAR_5 = VAR_4->queue;

   if (VAR_4->flags & VAR_1)
    FUNC_1(VAR_4);
   if (VAR_5)
    FUNC_0(VAR_5);
   FUNC_2(VAR_4);
  }
 }
}
