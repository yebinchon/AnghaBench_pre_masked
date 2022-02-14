
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_integrity_payload {int bip_work; int bip_end_io; struct bio* bip_bio; } ;
struct bio {int bi_end_io; struct bio_integrity_payload* bi_integrity; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct bio*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct bio *VAR_2, int VAR_3)
{
 struct bio_integrity_payload *VAR_4 = VAR_2->bi_integrity;

 FUNC_0(VAR_4->bip_bio != VAR_2);





 if (VAR_3) {
  VAR_2->bi_end_io = VAR_4->bip_end_io;
  FUNC_2(VAR_2, VAR_3);

  return;
 }

 FUNC_1(&VAR_4->bip_work, VAR_0);
 FUNC_3(VAR_1, &VAR_4->bip_work);
}
