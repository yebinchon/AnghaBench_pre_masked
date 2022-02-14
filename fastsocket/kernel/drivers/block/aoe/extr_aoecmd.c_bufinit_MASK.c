
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct buf {scalar_t__ bv_resid; TYPE_1__* bv; int sector; int resid; struct bio* bio; struct request* rq; } ;
struct bio {size_t bi_idx; TYPE_1__* bi_io_vec; int bi_sector; int bi_size; } ;
struct TYPE_2__ {scalar_t__ bv_len; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct buf*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct buf *VAR_0, struct request *VAR_1, struct bio *VAR_2)
{
 FUNC_2(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->rq = VAR_1;
 VAR_0->bio = VAR_2;
 VAR_0->resid = VAR_2->bi_size;
 VAR_0->sector = VAR_2->bi_sector;
 FUNC_1(VAR_2);
 VAR_0->bv = &VAR_2->bi_io_vec[VAR_2->bi_idx];
 VAR_0->bv_resid = VAR_0->bv->bv_len;
 FUNC_0(VAR_0->bv_resid == 0);
}
