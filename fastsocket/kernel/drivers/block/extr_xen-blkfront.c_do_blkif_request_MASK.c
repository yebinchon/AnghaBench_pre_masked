
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {scalar_t__ cmd_type; int buffer; int cmd; TYPE_1__* rq_disk; } ;
struct blkfront_info {int ring; } ;
struct TYPE_2__ {struct blkfront_info* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct request*,int ) ;
 struct request* FUNC_2 (struct request_queue*) ;
 int FUNC_3 (struct request_queue*,struct request*) ;
 int FUNC_4 (struct request*) ;
 scalar_t__ FUNC_5 (struct request*) ;
 int FUNC_6 (struct request*) ;
 int FUNC_7 (struct request*) ;
 int FUNC_8 (struct request_queue*) ;
 scalar_t__ FUNC_9 (struct request*) ;
 int FUNC_10 (struct blkfront_info*) ;
 int FUNC_11 (char*,...) ;
 scalar_t__ FUNC_12 (struct request*) ;

__attribute__((used)) static void FUNC_13(struct request_queue *VAR_2)
{
 struct blkfront_info *VAR_3 = ((void*)0);
 struct request *VAR_4;
 int VAR_5;

 FUNC_11("Entered do_blkif_request\n");

 VAR_5 = 0;

 while ((VAR_4 = FUNC_2(VAR_2)) != ((void*)0)) {
  VAR_3 = VAR_4->rq_disk->private_data;

  if (FUNC_0(&VAR_3->ring))
   goto wait;

  FUNC_7(VAR_4);

  if (VAR_4->cmd_type != VAR_1) {
   FUNC_1(VAR_4, -VAR_0);
   continue;
  }

  FUNC_11("do_blk_req %p: cmd %p, sec %lx, "
    "(%u/%u) buffer:%p [%s]\n",
    VAR_4, VAR_4->cmd, (unsigned long)FUNC_5(VAR_4),
    FUNC_4(VAR_4), FUNC_6(VAR_4),
    VAR_4->buffer, FUNC_12(VAR_4) ? "write" : "read");

  if (FUNC_9(VAR_4)) {
   FUNC_3(VAR_2, VAR_4);
wait:

   FUNC_8(VAR_2);
   break;
  }

  VAR_5++;
 }

 if (VAR_5 != 0)
  FUNC_10(VAR_3);
}
