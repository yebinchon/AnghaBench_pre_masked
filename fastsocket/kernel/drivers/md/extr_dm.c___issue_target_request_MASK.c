
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int target_request_nr; } ;
struct dm_target_io {TYPE_2__ info; } ;
struct dm_target {int dummy; } ;
struct clone_info {int sector; TYPE_3__* bio; TYPE_1__* md; } ;
struct bio {int bi_size; int bi_sector; int bi_destructor; } ;
typedef scalar_t__ sector_t ;
struct TYPE_6__ {int bi_max_vecs; } ;
struct TYPE_4__ {int bs; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*,TYPE_3__*) ;
 int FUNC_1 (struct dm_target*,struct bio*,struct dm_target_io*) ;
 struct dm_target_io* FUNC_2 (struct clone_info*,struct dm_target*) ;
 struct bio* FUNC_3 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct clone_info *VAR_2, struct dm_target *VAR_3,
       unsigned VAR_4, sector_t VAR_5)
{
 struct dm_target_io *VAR_6 = FUNC_2(VAR_2, VAR_3);
 struct bio *VAR_7;

 VAR_6->info.target_request_nr = VAR_4;






 VAR_7 = FUNC_3(VAR_0, VAR_2->bio->bi_max_vecs, VAR_2->md->bs);
 FUNC_0(VAR_7, VAR_2->bio);
 VAR_7->bi_destructor = VAR_1;
 if (VAR_5) {
  VAR_7->bi_sector = VAR_2->sector;
  VAR_7->bi_size = FUNC_4(VAR_5);
 }

 FUNC_1(VAR_3, VAR_7, VAR_6);
}
