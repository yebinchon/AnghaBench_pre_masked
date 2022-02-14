
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {TYPE_1__* plug; scalar_t__ queue; } ;
struct TYPE_2__ {int (* unplug_fn ) (TYPE_1__*) ;} ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(struct mddev *VAR_0)
{
 if (VAR_0->queue)
  FUNC_0(VAR_0->queue);
 if (VAR_0->plug)
  VAR_0->plug->unplug_fn(VAR_0->plug);
}
