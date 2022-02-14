
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
struct usb_hcd {int dummy; } ;
struct TYPE_10__ {unsigned long data; int function; } ;
struct oxu_hcd {int i_thresh; int next_uframe; int command; TYPE_4__* async; scalar_t__ reclaim_ready; int * reclaim; TYPE_1__* caps; int periodic_size; TYPE_5__ watchdog; int lock; } ;
struct TYPE_7__ {int * qh; } ;
struct TYPE_9__ {TYPE_3__* dummy; int hw_alt_next; int qh_state; int hw_qtd_next; void* hw_token; void* hw_info1; int qh_dma; int hw_next; TYPE_2__ qh_next; } ;
struct TYPE_8__ {int qtd_dma; } ;
struct TYPE_6__ {int hcc_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (struct oxu_hcd*,int ) ;
 struct oxu_hcd* FUNC_8 (struct usb_hcd*) ;
 int FUNC_9 (TYPE_5__*) ;
 int VAR_8 ;
 int FUNC_10 (int,unsigned int) ;
 int FUNC_11 (struct oxu_hcd*,char*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct usb_hcd *VAR_11)
{
 struct oxu_hcd *VAR_12 = FUNC_8(VAR_11);
 u32 VAR_13;
 int VAR_14;
 u32 VAR_15;

 FUNC_13(&VAR_12->lock);

 FUNC_9(&VAR_12->watchdog);
 VAR_12->watchdog.function = VAR_9;
 VAR_12->watchdog.data = (unsigned long) VAR_12;





 VAR_12->periodic_size = VAR_1;
 VAR_14 = FUNC_7(VAR_12, VAR_4);
 if (VAR_14 < 0)
  return VAR_14;


 VAR_15 = FUNC_12(&VAR_12->caps->hcc_params);
 if (FUNC_1(VAR_15))
  VAR_12->i_thresh = 8;
 else
  VAR_12->i_thresh = 2 + FUNC_2(VAR_15);

 VAR_12->reclaim = ((void*)0);
 VAR_12->reclaim_ready = 0;
 VAR_12->next_uframe = -1;
 VAR_12->async->qh_next.qh = ((void*)0);
 VAR_12->async->hw_next = FUNC_4(VAR_12->async->qh_dma);
 VAR_12->async->hw_info1 = FUNC_6(VAR_5);
 VAR_12->async->hw_token = FUNC_6(VAR_7);
 VAR_12->async->hw_qtd_next = VAR_2;
 VAR_12->async->qh_state = VAR_6;
 VAR_12->async->hw_alt_next = FUNC_5(VAR_12->async->dummy->qtd_dma);


 if (VAR_8 < 0 || VAR_8 > 6)
  VAR_8 = 0;
 VAR_13 = 1 << (16 + VAR_8);
 if (FUNC_0(VAR_15)) {







  if (VAR_10) {
   VAR_10 = FUNC_10(VAR_10, (unsigned) 3);
   VAR_13 |= VAR_0;
   VAR_13 |= VAR_10 << 8;
  }
  FUNC_11(VAR_12, "park %d\n", VAR_10);
 }
 if (FUNC_3(VAR_15)) {

  VAR_13 &= ~(3 << 2);
  VAR_13 |= (VAR_3 << 2);
 }
 VAR_12->command = VAR_13;

 return 0;
}
