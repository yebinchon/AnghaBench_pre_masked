
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct blk_integrity {int tuple_size; } ;
struct TYPE_10__ {int bip_vcnt; scalar_t__ bip_idx; scalar_t__ bip_sector; TYPE_3__* bip_vec; } ;
struct TYPE_9__ {int bip_vcnt; scalar_t__ bip_idx; scalar_t__ bip_sector; TYPE_3__* bip_vec; } ;
struct TYPE_8__ {int bv_len; int bv_offset; } ;
struct TYPE_7__ {TYPE_5__* bi_integrity; } ;
struct TYPE_6__ {TYPE_4__* bi_integrity; } ;
struct bio_pair {TYPE_5__ bip2; TYPE_4__ bip1; TYPE_3__ iv2; TYPE_3__ iv1; TYPE_2__ bio2; TYPE_1__ bio1; } ;
struct bio_integrity_payload {int bip_vcnt; scalar_t__ bip_sector; TYPE_3__* bip_vec; } ;
struct bio {struct bio_integrity_payload* bi_integrity; int bi_bdev; } ;


 int FUNC_0 (int) ;
 struct blk_integrity* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct bio*) ;
 unsigned int FUNC_3 (struct blk_integrity*,int) ;

void FUNC_4(struct bio *VAR_0, struct bio_pair *VAR_1, int VAR_2)
{
 struct blk_integrity *VAR_3;
 struct bio_integrity_payload *VAR_4 = VAR_0->bi_integrity;
 unsigned int VAR_5;

 if (FUNC_2(VAR_0) == 0)
  return;

 VAR_3 = FUNC_1(VAR_0->bi_bdev);
 FUNC_0(VAR_3 == ((void*)0));
 FUNC_0(VAR_4->bip_vcnt != 1);

 VAR_5 = FUNC_3(VAR_3, VAR_2);

 VAR_1->bio1.bi_integrity = &VAR_1->bip1;
 VAR_1->bio2.bi_integrity = &VAR_1->bip2;

 VAR_1->iv1 = VAR_4->bip_vec[0];
 VAR_1->iv2 = VAR_4->bip_vec[0];

 VAR_1->bip1.bip_vec[0] = VAR_1->iv1;
 VAR_1->bip2.bip_vec[0] = VAR_1->iv2;

 VAR_1->iv1.bv_len = VAR_2 * VAR_3->tuple_size;
 VAR_1->iv2.bv_offset += VAR_2 * VAR_3->tuple_size;
 VAR_1->iv2.bv_len -= VAR_2 * VAR_3->tuple_size;

 VAR_1->bip1.bip_sector = VAR_0->bi_integrity->bip_sector;
 VAR_1->bip2.bip_sector = VAR_0->bi_integrity->bip_sector + VAR_5;

 VAR_1->bip1.bip_vcnt = VAR_1->bip2.bip_vcnt = 1;
 VAR_1->bip1.bip_idx = VAR_1->bip2.bip_idx = 0;
}
