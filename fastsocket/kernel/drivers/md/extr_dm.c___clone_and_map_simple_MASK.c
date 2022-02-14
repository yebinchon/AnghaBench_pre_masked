
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_target_io {int dummy; } ;
struct dm_target {int dummy; } ;
struct clone_info {int sector_count; TYPE_1__* md; scalar_t__ idx; int sector; struct bio* bio; } ;
struct bio {scalar_t__ bi_vcnt; } ;
struct TYPE_2__ {int bs; } ;


 int FUNC_0 (struct dm_target*,struct bio*,struct dm_target_io*) ;
 struct dm_target_io* FUNC_1 (struct clone_info*,struct dm_target*) ;
 struct bio* FUNC_2 (struct bio*,int ,scalar_t__,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct clone_info *VAR_0, struct dm_target *VAR_1)
{
 struct bio *VAR_2, *VAR_3 = VAR_0->bio;
 struct dm_target_io *VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1);
 VAR_2 = FUNC_2(VAR_3, VAR_0->sector, VAR_0->idx,
     VAR_3->bi_vcnt - VAR_0->idx, VAR_0->sector_count,
     VAR_0->md->bs);
 FUNC_0(VAR_1, VAR_2, VAR_4);
 VAR_0->sector_count = 0;
}
