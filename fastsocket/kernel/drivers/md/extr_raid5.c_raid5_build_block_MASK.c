
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stripe_head {struct r5dev* dev; } ;
struct TYPE_3__ {int bv_page; } ;
struct TYPE_4__ {struct stripe_head* bi_private; int bi_max_vecs; int bi_vcnt; TYPE_1__* bi_io_vec; } ;
struct r5dev {int sector; scalar_t__ flags; int page; TYPE_1__ rvec; TYPE_2__ rreq; TYPE_1__ vec; TYPE_2__ req; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct stripe_head*,int,int) ;

__attribute__((used)) static void FUNC_2(struct stripe_head *VAR_0, int VAR_1, int VAR_2)
{
 struct r5dev *VAR_3 = &VAR_0->dev[VAR_1];

 FUNC_0(&VAR_3->req);
 VAR_3->req.bi_io_vec = &VAR_3->vec;
 VAR_3->req.bi_vcnt++;
 VAR_3->req.bi_max_vecs++;
 VAR_3->req.bi_private = VAR_0;
 VAR_3->vec.bv_page = VAR_3->page;

 FUNC_0(&VAR_3->rreq);
 VAR_3->rreq.bi_io_vec = &VAR_3->rvec;
 VAR_3->rreq.bi_vcnt++;
 VAR_3->rreq.bi_max_vecs++;
 VAR_3->rreq.bi_private = VAR_0;
 VAR_3->rvec.bv_page = VAR_3->page;

 VAR_3->flags = 0;
 VAR_3->sector = FUNC_1(VAR_0, VAR_1, VAR_2);
}
