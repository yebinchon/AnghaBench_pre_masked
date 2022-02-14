
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_buffer_object {int event_queue; int reserved; int mem; int * ttm; TYPE_2__* bdev; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int (* move_notify ) (struct ttm_buffer_object*,int *) ;} ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct ttm_buffer_object*,int *) ;
 int FUNC_3 (struct ttm_buffer_object*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ttm_buffer_object *VAR_0)
{
 if (VAR_0->bdev->driver->move_notify)
  VAR_0->bdev->driver->move_notify(VAR_0, ((void*)0));

 if (VAR_0->ttm) {
  FUNC_5(VAR_0->ttm);
  FUNC_4(VAR_0->ttm);
  VAR_0->ttm = ((void*)0);
 }
 FUNC_3(VAR_0, &VAR_0->mem);

 FUNC_0(&VAR_0->reserved, 0);
 FUNC_6(&VAR_0->event_queue);
 FUNC_1();
}
