
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool_c {int data_dev; } ;
struct dm_target {int len; struct pool_c* private; } ;
typedef int (* iterate_devices_callout_fn ) (struct dm_target*,int ,int ,int ,void*) ;



__attribute__((used)) static int FUNC_0(struct dm_target *VAR_0,
    iterate_devices_callout_fn VAR_1, void *VAR_2)
{
 struct pool_c *VAR_3 = VAR_0->private;

 return VAR_1(VAR_0, VAR_3->data_dev, 0, VAR_0->len, VAR_2);
}
