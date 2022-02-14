
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union map_info {struct dm_mpath_io* ptr; } ;
struct request {int dummy; } ;
struct pgpath {int path; TYPE_1__* pg; } ;
struct path_selector {TYPE_2__* type; } ;
struct multipath {int dummy; } ;
struct dm_target {struct multipath* private; } ;
struct dm_mpath_io {int nr_bytes; struct pgpath* pgpath; } ;
struct TYPE_4__ {int (* end_io ) (struct path_selector*,int *,int ) ;} ;
struct TYPE_3__ {struct path_selector ps; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct multipath*,union map_info*) ;
 int FUNC_2 (struct multipath*,struct request*,int,struct dm_mpath_io*) ;
 int FUNC_3 (struct path_selector*,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct dm_target *VAR_0, struct request *VAR_1,
       int VAR_2, union map_info *VAR_3)
{
 struct multipath *VAR_4 = VAR_0->private;
 struct dm_mpath_io *VAR_5 = VAR_3->ptr;
 struct pgpath *VAR_6;
 struct path_selector *VAR_7;
 int VAR_8;

 FUNC_0(!VAR_5);

 VAR_8 = FUNC_2(VAR_4, VAR_1, VAR_2, VAR_5);
 VAR_6 = VAR_5->pgpath;
 if (VAR_6) {
  VAR_7 = &VAR_6->pg->ps;
  if (VAR_7->type->end_io)
   VAR_7->type->end_io(VAR_7, &VAR_6->path, VAR_5->nr_bytes);
 }
 FUNC_1(VAR_4, VAR_3);

 return VAR_8;
}
