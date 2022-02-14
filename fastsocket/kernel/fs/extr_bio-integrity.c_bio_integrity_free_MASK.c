
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bio_set {int bio_integrity_pool; } ;
struct bio_integrity_payload {size_t bip_slab; int * bip_buf; } ;
struct bio {struct bio_integrity_payload* bi_integrity; } ;
struct TYPE_2__ {int slab; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bio*,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct bio_integrity_payload*) ;
 int FUNC_4 (struct bio_integrity_payload*,int ) ;
 scalar_t__ FUNC_5 (size_t) ;

void FUNC_6(struct bio *VAR_3, struct bio_set *VAR_4)
{
 struct bio_integrity_payload *VAR_5 = VAR_3->bi_integrity;

 FUNC_0(VAR_5 == ((void*)0));


 if (!FUNC_1(VAR_3, VAR_0) && !FUNC_1(VAR_3, VAR_1)
     && VAR_5->bip_buf != ((void*)0))
  FUNC_2(VAR_5->bip_buf);

 if (FUNC_5(VAR_5->bip_slab))
  FUNC_4(VAR_5, VAR_4->bio_integrity_pool);
 else
  FUNC_3(VAR_2[VAR_5->bip_slab].slab, VAR_5);

 VAR_3->bi_integrity = ((void*)0);
}
