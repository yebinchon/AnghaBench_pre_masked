
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {int len; struct delay_c* private; } ;
struct delay_c {int start_write; scalar_t__ dev_write; int start_read; scalar_t__ dev_read; } ;
typedef int (* iterate_devices_callout_fn ) (struct dm_target*,scalar_t__,int ,int ,void*) ;



__attribute__((used)) static int FUNC_0(struct dm_target *VAR_0,
     iterate_devices_callout_fn VAR_1, void *VAR_2)
{
 struct delay_c *VAR_3 = VAR_0->private;
 int VAR_4 = 0;

 VAR_4 = VAR_1(VAR_0, VAR_3->dev_read, VAR_3->start_read, VAR_0->len, VAR_2);
 if (VAR_4)
  goto out;

 if (VAR_3->dev_write)
  VAR_4 = VAR_1(VAR_0, VAR_3->dev_write, VAR_3->start_write, VAR_0->len, VAR_2);

out:
 return VAR_4;
}
