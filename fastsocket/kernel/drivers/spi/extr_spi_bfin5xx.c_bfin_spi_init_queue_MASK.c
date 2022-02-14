
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct driver_data {int * workqueue; TYPE_2__* master; int pump_messages; int pump_transfers; scalar_t__ busy; int run; int lock; int queue; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,unsigned long) ;

__attribute__((used)) static inline int FUNC_6(struct driver_data *VAR_4)
{
 FUNC_0(&VAR_4->queue);
 FUNC_4(&VAR_4->lock);

 VAR_4->run = VAR_1;
 VAR_4->busy = 0;


 FUNC_5(&VAR_4->pump_transfers,
       VAR_3, (unsigned long)VAR_4);


 FUNC_1(&VAR_4->pump_messages, VAR_2);
 VAR_4->workqueue = FUNC_2(
    FUNC_3(VAR_4->master->dev.parent));
 if (VAR_4->workqueue == ((void*)0))
  return -VAR_0;

 return 0;
}
