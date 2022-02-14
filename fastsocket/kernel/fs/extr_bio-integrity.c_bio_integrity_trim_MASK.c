
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_integrity {unsigned int tuple_size; } ;
struct bio_integrity_payload {scalar_t__ bip_sector; } ;
struct bio {int bi_bdev; struct bio_integrity_payload* bi_integrity; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct blk_integrity* FUNC_1 (int ) ;
 int FUNC_2 (struct bio*,int ) ;
 unsigned int FUNC_3 (struct blk_integrity*,unsigned int) ;
 int FUNC_4 (struct bio_integrity_payload*,unsigned int) ;
 int FUNC_5 (struct bio_integrity_payload*,unsigned int) ;

void FUNC_6(struct bio *VAR_1, unsigned int VAR_2,
   unsigned int VAR_3)
{
 struct bio_integrity_payload *VAR_4 = VAR_1->bi_integrity;
 struct blk_integrity *VAR_5 = FUNC_1(VAR_1->bi_bdev);
 unsigned int VAR_6;

 FUNC_0(VAR_4 == ((void*)0));
 FUNC_0(VAR_5 == ((void*)0));
 FUNC_0(!FUNC_2(VAR_1, VAR_0));

 VAR_6 = FUNC_3(VAR_5, VAR_3);
 VAR_4->bip_sector = VAR_4->bip_sector + VAR_2;
 FUNC_4(VAR_4, VAR_2 * VAR_5->tuple_size);
 FUNC_5(VAR_4, VAR_3 * VAR_5->tuple_size);
}
