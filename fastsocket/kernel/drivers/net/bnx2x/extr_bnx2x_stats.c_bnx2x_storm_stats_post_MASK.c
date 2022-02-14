
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bnx2x {int stats_pending; int stats_lock; int fw_stats_req_mapping; TYPE_2__* fw_stats_req; int stats_counter; } ;
struct TYPE_3__ {int drv_stats_counter; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct bnx2x *VAR_3)
{
 if (!VAR_3->stats_pending) {
  int VAR_4;

  FUNC_7(&VAR_3->stats_lock);

  if (VAR_3->stats_pending) {
   FUNC_8(&VAR_3->stats_lock);
   return;
  }

  VAR_3->fw_stats_req->hdr.drv_stats_counter =
   FUNC_6(VAR_3->stats_counter++);

  FUNC_0(VAR_0, "Sending statistics ramrod %d\n",
   VAR_3->fw_stats_req->hdr.drv_stats_counter);


  FUNC_4(VAR_3);
  FUNC_3(VAR_3);


  VAR_4 = FUNC_5(VAR_3, VAR_2, 0,
       FUNC_1(VAR_3->fw_stats_req_mapping),
       FUNC_2(VAR_3->fw_stats_req_mapping),
       VAR_1);
  if (VAR_4 == 0)
   VAR_3->stats_pending = 1;

  FUNC_8(&VAR_3->stats_lock);
 }
}
