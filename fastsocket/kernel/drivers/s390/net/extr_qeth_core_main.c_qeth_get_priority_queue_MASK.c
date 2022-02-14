
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {int default_out_queue; int no_out_queues; int do_prio_queueing; } ;
struct TYPE_4__ {scalar_t__ type; int is_multicast_different; } ;
struct qeth_card {TYPE_2__ qdio; TYPE_1__ info; } ;
struct TYPE_6__ {int tos; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* FUNC_0 (struct sk_buff*) ;

int FUNC_1(struct qeth_card *VAR_8, struct sk_buff *VAR_9,
   int VAR_10, int VAR_11)
{
 if (!VAR_10 && (VAR_8->info.type == VAR_4 ||
       VAR_8->info.type == VAR_5))
  return VAR_8->qdio.default_out_queue;
 switch (VAR_8->qdio.no_out_queues) {
 case 4:
  if (VAR_11 && VAR_8->info.is_multicast_different)
   return VAR_8->info.is_multicast_different &
    (VAR_8->qdio.no_out_queues - 1);
  if (VAR_8->qdio.do_prio_queueing && (VAR_10 == 4)) {
   const u8 VAR_12 = FUNC_0(VAR_9)->tos;

   if (VAR_8->qdio.do_prio_queueing ==
    VAR_7) {
    if (VAR_12 & VAR_3)
     return 3;
    if (VAR_12 & VAR_0)
     return 2;
    if (VAR_12 & VAR_1)
     return 1;
    if (VAR_12 & VAR_2)
     return 0;
   }
   if (VAR_8->qdio.do_prio_queueing ==
    VAR_6)
    return 3 - (VAR_12 >> 6);
  } else if (VAR_8->qdio.do_prio_queueing && (VAR_10 == 6)) {

  }
  return VAR_8->qdio.default_out_queue;
 case 1:
 default:
  return VAR_8->qdio.default_out_queue;
 }
}
