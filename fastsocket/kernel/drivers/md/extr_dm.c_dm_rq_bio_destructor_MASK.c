
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mapped_device {int bs; } ;
struct dm_rq_clone_bio_info {TYPE_1__* tio; } ;
struct bio {struct dm_rq_clone_bio_info* bi_private; } ;
struct TYPE_2__ {struct mapped_device* md; } ;


 int FUNC_0 (struct bio*,int ) ;
 int FUNC_1 (struct dm_rq_clone_bio_info*) ;

__attribute__((used)) static void FUNC_2(struct bio *VAR_0)
{
 struct dm_rq_clone_bio_info *VAR_1 = VAR_0->bi_private;
 struct mapped_device *VAR_2 = VAR_1->tio->md;

 FUNC_1(VAR_1);
 FUNC_0(VAR_0, VAR_2->bs);
}
