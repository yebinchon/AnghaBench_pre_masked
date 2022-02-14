
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mirror_set {unsigned int nr_mirrors; TYPE_1__* mirror; } ;
struct dm_target {int len; struct mirror_set* private; } ;
typedef int (* iterate_devices_callout_fn ) (struct dm_target*,int ,int ,int ,void*) ;
struct TYPE_2__ {int offset; int dev; } ;



__attribute__((used)) static int FUNC_0(struct dm_target *VAR_0,
      iterate_devices_callout_fn VAR_1, void *VAR_2)
{
 struct mirror_set *VAR_3 = VAR_0->private;
 int VAR_4 = 0;
 unsigned VAR_5;

 for (VAR_5 = 0; !VAR_4 && VAR_5 < VAR_3->nr_mirrors; VAR_5++)
  VAR_4 = VAR_1(VAR_0, VAR_3->mirror[VAR_5].dev,
    VAR_3->mirror[VAR_5].offset, VAR_0->len, VAR_2);

 return VAR_4;
}
