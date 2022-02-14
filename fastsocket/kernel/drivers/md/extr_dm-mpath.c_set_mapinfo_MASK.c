
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union map_info {struct dm_mpath_io* ptr; } ;
struct multipath {int mpio_pool; } ;
struct dm_mpath_io {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dm_mpath_io* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct dm_mpath_io*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct multipath *VAR_2, union map_info *VAR_3)
{
 struct dm_mpath_io *VAR_4;

 VAR_4 = FUNC_0(VAR_2->mpio_pool, VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_1(VAR_4, 0, sizeof(*VAR_4));
 VAR_3->ptr = VAR_4;

 return 0;
}
