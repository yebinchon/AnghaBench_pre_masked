
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tape_request {scalar_t__ rc; struct tape_device* device; } ;
struct TYPE_4__ {int block_position; int request_queue; } ;
struct tape_device {TYPE_2__ blk_data; int req_queue; TYPE_1__* discipline; } ;
struct request {int dummy; } ;
struct TYPE_3__ {int (* free_bread ) (struct tape_request*) ;} ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct request*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct request*) ;
 int FUNC_4 (struct request*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct tape_request*) ;
 int FUNC_7 (struct tape_device*) ;

__attribute__((used)) static void
FUNC_8(struct tape_request *VAR_2, void *VAR_3)
{
 struct tape_device *VAR_4;
 struct request *VAR_5;

 FUNC_0(6, "__tapeblock_end_request()\n");

 VAR_4 = VAR_2->device;
 VAR_5 = (struct request *) VAR_3;
 FUNC_1(VAR_5, (VAR_2->rc == 0) ? 0 : -VAR_0);
 if (VAR_2->rc == 0)

  VAR_4->blk_data.block_position =
    (FUNC_3(VAR_5) + FUNC_4(VAR_5)) >> VAR_1;
 else

  VAR_4->blk_data.block_position = -1;
 VAR_4->discipline->free_bread(VAR_2);
 if (!FUNC_5(&VAR_4->req_queue) ||
     FUNC_2(VAR_4->blk_data.request_queue))
  FUNC_7(VAR_4);
}
