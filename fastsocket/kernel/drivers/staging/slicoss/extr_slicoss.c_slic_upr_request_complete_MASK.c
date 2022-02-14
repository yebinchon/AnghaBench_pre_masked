
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int rcv_discards; int rcv_errors; int xmt_errors; int rcv_ucast; int rcv_bytes; int xmt_ucast; int xmt_bytes; } ;
struct TYPE_8__ {int rcv_tcp_bytes; int rcv_tcp_segs; int xmit_tcp_bytes; int xmit_tcp_segs; } ;
struct slicnet_stats {TYPE_4__ iface; TYPE_3__ tcp; } ;
struct sliccard {int pingstatus; } ;
struct slic_upr {scalar_t__ adapter; int upr_request; struct slic_upr* next; } ;
struct slic_stats {scalar_t__ rcv_drops_gb; scalar_t__ rcv_other_error_gb; scalar_t__ xmit_other_error_gb; scalar_t__ xmit_excess_collisions_gb; scalar_t__ xmit_collisions_gb; scalar_t__ rcv_unicasts_gb; scalar_t__ rcv_bytes_gb; scalar_t__ xmit_unicasts_gb; scalar_t__ xmit_bytes_gb; scalar_t__ rcv_tcp_bytes_gb; scalar_t__ rcv_tcp_segs_gb; scalar_t__ xmit_tcp_bytes_gb; scalar_t__ xmit_tcp_segs_gb; } ;
struct TYPE_10__ {int flags; int lock; } ;
struct adapter {scalar_t__ port; TYPE_5__ upr_lock; scalar_t__ rcv_drops; TYPE_2__* netdev; struct slicnet_stats slic_stats; struct slic_stats inicstats_prev; TYPE_1__* pshmem; scalar_t__ upr_busy; struct slic_upr* upr_list; struct sliccard* card; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int inicstats; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct slic_upr*) ;
 int FUNC_4 (struct slic_stats*,struct slic_stats*,int) ;
 int FUNC_5 (struct adapter*,int) ;
 int FUNC_6 (struct adapter*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static void FUNC_9(struct adapter *VAR_2, u32 VAR_3)
{
 struct sliccard *VAR_4 = VAR_2->card;
 struct slic_upr *VAR_5;

 FUNC_7(&VAR_2->upr_lock.lock, VAR_2->upr_lock.flags);
 VAR_5 = VAR_2->upr_list;
 if (!VAR_5) {
  FUNC_0(0);
  FUNC_8(&VAR_2->upr_lock.lock,
     VAR_2->upr_lock.flags);
  return;
 }
 VAR_2->upr_list = VAR_5->next;
 VAR_5->next = ((void*)0);
 VAR_2->upr_busy = 0;
 FUNC_0(VAR_2->port == VAR_5->adapter);
 switch (VAR_5->upr_request) {
 case 128:
  {
   struct slic_stats *VAR_6 =
       (struct slic_stats *) &VAR_2->pshmem->inicstats;
   struct slic_stats *VAR_7 = VAR_6;
   struct slic_stats *VAR_8 = &VAR_2->inicstats_prev;
   struct slicnet_stats *VAR_9 = &VAR_2->slic_stats;

   if (VAR_3 & VAR_1) {
    FUNC_2(&VAR_2->netdev->dev,
     "SLIC_UPR_STATS command failed isr[%x]\n",
     VAR_3);

    break;
   }
   FUNC_1(VAR_9->tcp.xmit_tcp_segs,
     VAR_7->xmit_tcp_segs_gb,
     VAR_8->xmit_tcp_segs_gb);

   FUNC_1(VAR_9->tcp.xmit_tcp_bytes,
     VAR_7->xmit_tcp_bytes_gb,
     VAR_8->xmit_tcp_bytes_gb);

   FUNC_1(VAR_9->tcp.rcv_tcp_segs,
     VAR_7->rcv_tcp_segs_gb,
     VAR_8->rcv_tcp_segs_gb);

   FUNC_1(VAR_9->tcp.rcv_tcp_bytes,
     VAR_7->rcv_tcp_bytes_gb,
     VAR_8->rcv_tcp_bytes_gb);

   FUNC_1(VAR_9->iface.xmt_bytes,
     VAR_7->xmit_bytes_gb,
     VAR_8->xmit_bytes_gb);

   FUNC_1(VAR_9->iface.xmt_ucast,
     VAR_7->xmit_unicasts_gb,
     VAR_8->xmit_unicasts_gb);

   FUNC_1(VAR_9->iface.rcv_bytes,
     VAR_7->rcv_bytes_gb,
     VAR_8->rcv_bytes_gb);

   FUNC_1(VAR_9->iface.rcv_ucast,
     VAR_7->rcv_unicasts_gb,
     VAR_8->rcv_unicasts_gb);

   FUNC_1(VAR_9->iface.xmt_errors,
     VAR_7->xmit_collisions_gb,
     VAR_8->xmit_collisions_gb);

   FUNC_1(VAR_9->iface.xmt_errors,
     VAR_7->xmit_excess_collisions_gb,
     VAR_8->xmit_excess_collisions_gb);

   FUNC_1(VAR_9->iface.xmt_errors,
     VAR_7->xmit_other_error_gb,
     VAR_8->xmit_other_error_gb);

   FUNC_1(VAR_9->iface.rcv_errors,
     VAR_7->rcv_other_error_gb,
     VAR_8->rcv_other_error_gb);

   FUNC_1(VAR_9->iface.rcv_discards,
     VAR_7->rcv_drops_gb,
     VAR_8->rcv_drops_gb);

   if (VAR_7->rcv_drops_gb > VAR_8->rcv_drops_gb) {
    VAR_2->rcv_drops +=
        (VAR_7->rcv_drops_gb -
         VAR_8->rcv_drops_gb);
   }
   FUNC_4(VAR_8, VAR_7, sizeof(struct slic_stats));
   break;
  }
 case 130:
  FUNC_5(VAR_2, VAR_3);
  break;
 case 131:
  break;
 case 129:
  FUNC_0(0);
  break;
 case 134:
  FUNC_0(0);
  break;
 case 135:
  FUNC_0(0);
  break;
 case 133:
  FUNC_0(0);
  break;
 case 132:
  VAR_4->pingstatus |= (VAR_3 & VAR_0);
  break;
 default:
  FUNC_0(0);
 }
 FUNC_3(VAR_5);
 FUNC_6(VAR_2);
 FUNC_8(&VAR_2->upr_lock.lock,
    VAR_2->upr_lock.flags);
}
