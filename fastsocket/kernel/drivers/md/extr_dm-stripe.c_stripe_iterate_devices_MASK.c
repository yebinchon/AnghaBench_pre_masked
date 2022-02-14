
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_c {unsigned int stripes; int stripe_width; TYPE_1__* stripe; } ;
struct dm_target {struct stripe_c* private; } ;
typedef int (* iterate_devices_callout_fn ) (struct dm_target*,int ,int ,int ,void*) ;
struct TYPE_2__ {int physical_start; int dev; } ;



__attribute__((used)) static int FUNC_0(struct dm_target *VAR_0,
      iterate_devices_callout_fn VAR_1, void *VAR_2)
{
 struct stripe_c *VAR_3 = VAR_0->private;
 int VAR_4 = 0;
 unsigned VAR_5 = 0;

 do {
  VAR_4 = VAR_1(VAR_0, VAR_3->stripe[VAR_5].dev,
    VAR_3->stripe[VAR_5].physical_start,
    VAR_3->stripe_width, VAR_2);
 } while (!VAR_4 && ++VAR_5 < VAR_3->stripes);

 return VAR_4;
}
