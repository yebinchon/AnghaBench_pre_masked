
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct dm_table {struct mapped_device* md; } ;



struct mapped_device *FUNC_0(struct dm_table *VAR_0)
{
 return VAR_0->md;
}
