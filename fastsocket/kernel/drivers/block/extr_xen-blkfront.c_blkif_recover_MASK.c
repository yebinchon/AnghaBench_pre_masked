
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request {int dummy; } ;
struct blkif_request {int id; int nr_segments; TYPE_1__* seg; } ;
struct TYPE_6__ {int req_prod_pvt; } ;
struct blkfront_info {int connected; TYPE_2__* xbdev; TYPE_3__ ring; struct blk_shadow* shadow; int shadow_free; } ;
struct blk_shadow {scalar_t__ request; struct blkif_request req; int * frame; } ;
typedef int copy ;
struct TYPE_5__ {int otherend_id; } ;
struct TYPE_4__ {int gref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct blkif_request* FUNC_0 (TYPE_3__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct blkfront_info*) ;
 size_t FUNC_2 (struct blkfront_info*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct blk_shadow*) ;
 int FUNC_5 (struct blkfront_info*) ;
 struct blk_shadow* FUNC_6 (int,int) ;
 int FUNC_7 (struct blk_shadow*,struct blk_shadow*,int) ;
 int FUNC_8 (struct blk_shadow**,int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct request*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_14(struct blkfront_info *VAR_8)
{
 int VAR_9;
 struct blkif_request *VAR_10;
 struct blk_shadow *VAR_11;
 int VAR_12;


 VAR_11 = FUNC_6(sizeof(VAR_8->shadow),
         VAR_3 | VAR_6 | VAR_5);
 if (!VAR_11)
  return -VAR_2;
 FUNC_7(VAR_11, VAR_8->shadow, sizeof(VAR_8->shadow));


 FUNC_8(&VAR_8->shadow, 0, sizeof(VAR_8->shadow));
 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
  VAR_8->shadow[VAR_9].req.id = VAR_9+1;
 VAR_8->shadow_free = VAR_8->ring.req_prod_pvt;
 VAR_8->shadow[VAR_1-1].req.id = 0x0fffffff;


 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {

  if (VAR_11[VAR_9].request == 0)
   continue;


  VAR_10 = FUNC_0(&VAR_8->ring, VAR_8->ring.req_prod_pvt);
  *VAR_10 = VAR_11[VAR_9].req;


  VAR_10->id = FUNC_2(VAR_8);
  FUNC_7(&VAR_8->shadow[VAR_10->id], &VAR_11[VAR_9], sizeof(VAR_11[VAR_9]));


  for (VAR_12 = 0; VAR_12 < VAR_10->nr_segments; VAR_12++)
   FUNC_3(
    VAR_10->seg[VAR_12].gref,
    VAR_8->xbdev->otherend_id,
    FUNC_9(VAR_8->shadow[VAR_10->id].frame[VAR_12]),
    FUNC_10(
     (struct request *)
     VAR_8->shadow[VAR_10->id].request));
  VAR_8->shadow[VAR_10->id].req = *VAR_10;

  VAR_8->ring.req_prod_pvt++;
 }

 FUNC_4(VAR_11);

 FUNC_13(VAR_8->xbdev, VAR_4);

 FUNC_11(&VAR_7);


 VAR_8->connected = VAR_0;


 FUNC_1(VAR_8);


 FUNC_5(VAR_8);

 FUNC_12(&VAR_7);

 return 0;
}
