
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_vec {int dummy; } ;
struct bio_set {int dummy; } ;
struct bio_integrity_payload {int bip_vcnt; int bip_idx; int bip_sector; int bip_vec; } ;
struct bio {struct bio_integrity_payload* bi_integrity; } ;
typedef int gfp_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct bio_integrity_payload* FUNC_1 (struct bio*,int ,int,struct bio_set*) ;
 int FUNC_2 (int ,int ,int) ;

int FUNC_3(struct bio *VAR_1, struct bio *VAR_2,
   gfp_t VAR_3, struct bio_set *VAR_4)
{
 struct bio_integrity_payload *VAR_5 = VAR_2->bi_integrity;
 struct bio_integrity_payload *VAR_6;

 FUNC_0(VAR_5 == ((void*)0));

 VAR_6 = FUNC_1(VAR_1, VAR_3, VAR_5->bip_vcnt, VAR_4);

 if (VAR_6 == ((void*)0))
  return -VAR_0;

 FUNC_2(VAR_6->bip_vec, VAR_5->bip_vec,
        VAR_5->bip_vcnt * sizeof(struct bio_vec));

 VAR_6->bip_sector = VAR_5->bip_sector;
 VAR_6->bip_vcnt = VAR_5->bip_vcnt;
 VAR_6->bip_idx = VAR_5->bip_idx;

 return 0;
}
