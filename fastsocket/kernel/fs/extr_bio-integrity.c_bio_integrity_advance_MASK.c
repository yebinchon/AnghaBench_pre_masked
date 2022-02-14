
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_integrity {unsigned int tuple_size; } ;
struct bio_integrity_payload {int dummy; } ;
struct bio {int bi_bdev; struct bio_integrity_payload* bi_integrity; } ;


 int FUNC_0 (int ) ;
 struct blk_integrity* FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct blk_integrity*,unsigned int) ;
 int FUNC_3 (struct bio_integrity_payload*,unsigned int) ;

void FUNC_4(struct bio *VAR_0, unsigned int VAR_1)
{
 struct bio_integrity_payload *VAR_2 = VAR_0->bi_integrity;
 struct blk_integrity *VAR_3 = FUNC_1(VAR_0->bi_bdev);
 unsigned int VAR_4;

 FUNC_0(VAR_2 == ((void*)0));
 FUNC_0(VAR_3 == ((void*)0));

 VAR_4 = FUNC_2(VAR_3, VAR_1 >> 9);
 FUNC_3(VAR_2, VAR_4 * VAR_3->tuple_size);
}
