
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_crypt_io {scalar_t__ sector; int error; struct bio* base_bio; TYPE_1__* target; } ;
struct crypt_config {scalar_t__ start; int bs; } ;
struct bio_vec {int dummy; } ;
struct bio {int bi_vcnt; int bi_io_vec; scalar_t__ bi_sector; int bi_size; scalar_t__ bi_idx; } ;
struct TYPE_2__ {struct crypt_config* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bio* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct dm_crypt_io*,struct bio*) ;
 int FUNC_4 (struct dm_crypt_io*) ;
 int FUNC_5 (struct dm_crypt_io*) ;
 int FUNC_6 (struct bio*) ;
 int FUNC_7 (int ,int ,int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct dm_crypt_io *VAR_2)
{
 struct crypt_config *VAR_3 = VAR_2->target->private;
 struct bio *VAR_4 = VAR_2->base_bio;
 struct bio *VAR_5;

 FUNC_5(VAR_2);






 VAR_5 = FUNC_0(VAR_1, FUNC_2(VAR_4), VAR_3->bs);
 if (FUNC_8(!VAR_5)) {
  VAR_2->error = -VAR_0;
  FUNC_4(VAR_2);
  return;
 }

 FUNC_3(VAR_2, VAR_5);
 VAR_5->bi_idx = 0;
 VAR_5->bi_vcnt = FUNC_2(VAR_4);
 VAR_5->bi_size = VAR_4->bi_size;
 VAR_5->bi_sector = VAR_3->start + VAR_2->sector;
 FUNC_7(VAR_5->bi_io_vec, FUNC_1(VAR_4),
        sizeof(struct bio_vec) * VAR_5->bi_vcnt);

 FUNC_6(VAR_5);
}
