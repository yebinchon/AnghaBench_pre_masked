
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int map_lock; struct dm_table* map; } ;
struct dm_table {int dummy; } ;


 int FUNC_0 (struct dm_table*,int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static struct dm_table *FUNC_3(struct mapped_device *VAR_0)
{
 struct dm_table *VAR_1 = VAR_0->map;
 unsigned long VAR_2;

 if (!VAR_1)
  return ((void*)0);

 FUNC_0(VAR_1, ((void*)0), ((void*)0));
 FUNC_1(&VAR_0->map_lock, VAR_2);
 VAR_0->map = ((void*)0);
 FUNC_2(&VAR_0->map_lock, VAR_2);

 return VAR_1;
}
