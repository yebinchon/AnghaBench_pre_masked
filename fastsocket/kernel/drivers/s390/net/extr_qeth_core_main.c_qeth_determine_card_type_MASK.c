
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ type; scalar_t__ is_multicast_different; } ;
struct TYPE_7__ {int no_in_queues; scalar_t__ no_out_queues; int default_out_queue; int do_prio_queueing; } ;
struct qeth_card {TYPE_4__* gdev; TYPE_3__ info; TYPE_2__ qdio; } ;
struct TYPE_6__ {scalar_t__ dev_type; scalar_t__ dev_model; } ;
struct TYPE_10__ {TYPE_1__ id; } ;
struct TYPE_9__ {int dev; } ;


 TYPE_5__* FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int,char*) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,char*) ;
 scalar_t__** VAR_9 ;
 int FUNC_3 (struct qeth_card*) ;

__attribute__((used)) static int FUNC_4(struct qeth_card *VAR_10)
{
 int VAR_11 = 0;

 FUNC_1(VAR_8, 2, "detcdtyp");

 VAR_10->qdio.do_prio_queueing = VAR_6;
 VAR_10->qdio.default_out_queue = VAR_2;
 while (VAR_9[VAR_11][VAR_3]) {
  if ((FUNC_0(VAR_10)->id.dev_type ==
    VAR_9[VAR_11][VAR_4]) &&
      (FUNC_0(VAR_10)->id.dev_model ==
    VAR_9[VAR_11][VAR_3])) {
   VAR_10->info.type = VAR_9[VAR_11][VAR_3];
   VAR_10->qdio.no_out_queues =
    VAR_9[VAR_11][VAR_7];
   VAR_10->qdio.no_in_queues = 1;
   VAR_10->info.is_multicast_different =
    VAR_9[VAR_11][VAR_5];
   FUNC_3(VAR_10);
   return 0;
  }
  VAR_11++;
 }
 VAR_10->info.type = VAR_1;
 FUNC_2(&VAR_10->gdev->dev, "The adapter hardware is of an "
  "unknown type\n");
 return -VAR_0;
}
