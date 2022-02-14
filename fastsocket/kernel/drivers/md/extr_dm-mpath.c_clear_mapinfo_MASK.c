
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union map_info {struct dm_mpath_io* ptr; } ;
struct multipath {int mpio_pool; } ;
struct dm_mpath_io {int dummy; } ;


 int FUNC_0 (struct dm_mpath_io*,int ) ;

__attribute__((used)) static void FUNC_1(struct multipath *VAR_0, union map_info *VAR_1)
{
 struct dm_mpath_io *VAR_2 = VAR_1->ptr;

 VAR_1->ptr = ((void*)0);
 FUNC_0(VAR_2, VAR_0->mpio_pool);
}
