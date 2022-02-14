
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lg_eventfd_map {unsigned int num; TYPE_2__* map; } ;
struct lg_cpu {scalar_t__ pending_notify; TYPE_1__* lg; } ;
struct TYPE_4__ {scalar_t__ addr; int event; } ;
struct TYPE_3__ {int eventfds; } ;


 int FUNC_0 (int ,int) ;
 struct lg_eventfd_map* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

bool FUNC_4(struct lg_cpu *VAR_0)
{
 unsigned int VAR_1;
 struct lg_eventfd_map *VAR_2;







 FUNC_2();
 VAR_2 = FUNC_1(VAR_0->lg->eventfds);




 for (VAR_1 = 0; VAR_1 < VAR_2->num; VAR_1++) {
  if (VAR_2->map[VAR_1].addr == VAR_0->pending_notify) {
   FUNC_0(VAR_2->map[VAR_1].event, 1);
   VAR_0->pending_notify = 0;
   break;
  }
 }

 FUNC_3();


 return VAR_0->pending_notify == 0;
}
