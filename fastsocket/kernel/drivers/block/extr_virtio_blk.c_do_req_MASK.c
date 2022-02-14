
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_blk {int pool; int * sg; int vq; } ;
struct TYPE_2__ {int type; void* ioprio; scalar_t__ sector; } ;
struct virtblk_req {TYPE_1__ out_hdr; struct request* req; TYPE_1__ status; TYPE_1__ in_hdr; } ;
struct request_queue {int dummy; } ;
struct request {int cmd_flags; int cmd_type; int cmd_len; TYPE_1__* sense; TYPE_1__* cmd; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned long FUNC_1 (struct request_queue*,struct request*,int *) ;
 scalar_t__ FUNC_2 (struct request*) ;
 struct virtblk_req* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct virtblk_req*,int ) ;
 void* FUNC_5 (struct request*) ;
 scalar_t__ FUNC_6 (struct request*) ;
 int FUNC_7 (int *,TYPE_1__*,int) ;
 scalar_t__ FUNC_8 (int ,int *,unsigned long,unsigned long,struct virtblk_req*) ;

__attribute__((used)) static bool FUNC_9(struct request_queue *VAR_9, struct virtio_blk *VAR_10,
     struct request *VAR_11)
{
 unsigned long VAR_12, VAR_13 = 0, VAR_14 = 0;
 struct virtblk_req *VAR_15;

 VAR_15 = FUNC_3(VAR_10->pool, VAR_0);
 if (!VAR_15)

  return 0;

 VAR_15->req = VAR_11;
 if (VAR_11->cmd_flags & VAR_1) {
  VAR_15->out_hdr.type = VAR_3;
  VAR_15->out_hdr.sector = 0;
  VAR_15->out_hdr.ioprio = FUNC_5(VAR_15->req);
 } else {
  switch (VAR_11->cmd_type) {
  case 129:
   VAR_15->out_hdr.type = 0;
   VAR_15->out_hdr.sector = FUNC_2(VAR_15->req);
   VAR_15->out_hdr.ioprio = FUNC_5(VAR_15->req);
   break;
  case 130:
   VAR_15->out_hdr.type = VAR_7;
   VAR_15->out_hdr.sector = 0;
   VAR_15->out_hdr.ioprio = FUNC_5(VAR_15->req);
   break;
  case 128:
   VAR_15->out_hdr.type = VAR_4;
   VAR_15->out_hdr.sector = 0;
   VAR_15->out_hdr.ioprio = FUNC_5(VAR_15->req);
   break;
  default:

   FUNC_0();
  }
 }

 FUNC_7(&VAR_10->sg[VAR_13++], &VAR_15->out_hdr, sizeof(VAR_15->out_hdr));







 if (VAR_15->req->cmd_type == 130)
  FUNC_7(&VAR_10->sg[VAR_13++], VAR_15->req->cmd, VAR_15->req->cmd_len);

 VAR_12 = FUNC_1(VAR_9, VAR_15->req, VAR_10->sg + VAR_13);

 if (VAR_15->req->cmd_type == 130) {
  FUNC_7(&VAR_10->sg[VAR_12 + VAR_13 + VAR_14++], VAR_15->req->sense, VAR_2);
  FUNC_7(&VAR_10->sg[VAR_12 + VAR_13 + VAR_14++], &VAR_15->in_hdr,
      sizeof(VAR_15->in_hdr));
 }

 FUNC_7(&VAR_10->sg[VAR_12 + VAR_13 + VAR_14++], &VAR_15->status,
     sizeof(VAR_15->status));

 if (VAR_12) {
  if (FUNC_6(VAR_15->req) == VAR_8) {
   VAR_15->out_hdr.type |= VAR_6;
   VAR_13 += VAR_12;
  } else {
   VAR_15->out_hdr.type |= VAR_5;
   VAR_14 += VAR_12;
  }
 }

 if (FUNC_8(VAR_10->vq, VAR_10->sg, VAR_13, VAR_14, VAR_15) < 0) {
  FUNC_4(VAR_15, VAR_10->pool);
  return 0;
 }

 return 1;
}
