
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long data; int function; } ;
struct plug_handle {void (* unplug_fn ) (struct plug_handle*) ;int unplug_work; TYPE_1__ unplug_timer; scalar_t__ unplug_flag; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2(struct plug_handle *VAR_2,
    void (*VAR_3)(struct plug_handle *))
{
 VAR_2->unplug_flag = 0;
 VAR_2->unplug_fn = VAR_3;
 FUNC_1(&VAR_2->unplug_timer);
 VAR_2->unplug_timer.function = VAR_0;
 VAR_2->unplug_timer.data = (unsigned long)VAR_2;
 FUNC_0(&VAR_2->unplug_work, VAR_1);
}
