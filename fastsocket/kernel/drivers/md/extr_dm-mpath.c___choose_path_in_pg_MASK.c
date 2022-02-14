
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* type; } ;
struct priority_group {TYPE_2__ ps; } ;
struct multipath {int current_pgpath; struct priority_group* current_pg; int repeat_count; } ;
struct dm_path {int dummy; } ;
struct TYPE_3__ {struct dm_path* (* select_path ) (TYPE_2__*,int *,size_t) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct multipath*,int ) ;
 int FUNC_1 (struct dm_path*) ;
 struct dm_path* FUNC_2 (TYPE_2__*,int *,size_t) ;

__attribute__((used)) static int FUNC_3(struct multipath *VAR_1, struct priority_group *VAR_2,
          size_t VAR_3)
{
 struct dm_path *VAR_4;

 VAR_4 = VAR_2->ps.type->select_path(&VAR_2->ps, &VAR_1->repeat_count, VAR_3);
 if (!VAR_4)
  return -VAR_0;

 VAR_1->current_pgpath = FUNC_1(VAR_4);

 if (VAR_1->current_pg != VAR_2)
  FUNC_0(VAR_1, VAR_1->current_pgpath);

 return 0;
}
