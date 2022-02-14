
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct mx3fb_info {int cookie; TYPE_1__* txd; struct mx3fb_data* mx3fb; } ;
struct mx3fb_data {int lock; } ;
struct TYPE_6__ {TYPE_2__* device; } ;
struct TYPE_5__ {int (* device_terminate_all ) (TYPE_3__*) ;} ;
struct TYPE_4__ {TYPE_3__* chan; } ;


 int VAR_0 ;
 int FUNC_0 (struct mx3fb_info*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_4(struct mx3fb_info *VAR_1)
{
 struct mx3fb_data *VAR_2 = VAR_1->mx3fb;
 uint32_t VAR_3;
 unsigned long VAR_4;

 FUNC_1(&VAR_2->lock, VAR_4);

 VAR_3 = FUNC_0(VAR_1);

 FUNC_2(&VAR_2->lock, VAR_4);

 VAR_1->txd->chan->device->device_terminate_all(VAR_1->txd->chan);
 VAR_1->txd = ((void*)0);
 VAR_1->cookie = -VAR_0;
}
