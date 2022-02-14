
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ idx_out; struct bio* bio_out; } ;
struct dm_crypt_io {scalar_t__ sector; TYPE_1__ ctx; int error; TYPE_2__* target; } ;
struct crypt_config {scalar_t__ start; } ;
struct bio {scalar_t__ bi_vcnt; scalar_t__ bi_sector; } ;
struct TYPE_4__ {struct crypt_config* private; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct dm_crypt_io*) ;
 int FUNC_3 (struct crypt_config*,struct bio*) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (struct dm_crypt_io*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct dm_crypt_io *VAR_1,
       int VAR_2, int VAR_3)
{
 struct bio *VAR_4 = VAR_1->ctx.bio_out;
 struct crypt_config *VAR_5 = VAR_1->target->private;

 if (FUNC_6(VAR_2 < 0)) {
  FUNC_3(VAR_5, VAR_4);
  FUNC_1(VAR_4);
  VAR_1->error = -VAR_0;
  FUNC_2(VAR_1);
  return;
 }


 FUNC_0(VAR_1->ctx.idx_out < VAR_4->bi_vcnt);

 VAR_4->bi_sector = VAR_5->start + VAR_1->sector;

 if (VAR_3)
  FUNC_5(VAR_1);
 else
  FUNC_4(VAR_4);
}
