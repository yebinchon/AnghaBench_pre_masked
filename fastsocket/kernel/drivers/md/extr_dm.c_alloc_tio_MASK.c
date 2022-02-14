
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_target_io {int info; struct dm_target* ti; int io; } ;
struct dm_target {int dummy; } ;
struct clone_info {int io; TYPE_1__* md; } ;
struct TYPE_2__ {int tio_pool; } ;


 int VAR_0 ;
 struct dm_target_io* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static struct dm_target_io *FUNC_2(struct clone_info *VAR_1,
          struct dm_target *VAR_2)
{
 struct dm_target_io *VAR_3 = FUNC_0(VAR_1->md->tio_pool, VAR_0);

 VAR_3->io = VAR_1->io;
 VAR_3->ti = VAR_2;
 FUNC_1(&VAR_3->info, 0, sizeof(VAR_3->info));

 return VAR_3;
}
