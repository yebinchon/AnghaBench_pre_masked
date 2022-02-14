
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xen_netif_extra_info {int flags; int type; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {scalar_t__ rsp_cons; } ;
struct netfront_info {TYPE_2__ rx; TYPE_1__* netdev; } ;
struct device {int dummy; } ;
typedef int grant_ref_t ;
struct TYPE_3__ {struct device dev; } ;
typedef scalar_t__ RING_IDX ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct xen_netif_extra_info*,struct xen_netif_extra_info*,int) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct netfront_info*,scalar_t__) ;
 struct sk_buff* FUNC_6 (struct netfront_info*,scalar_t__) ;
 int FUNC_7 (struct netfront_info*,struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_8(struct netfront_info *VAR_4,
        struct xen_netif_extra_info *VAR_5,
        RING_IDX VAR_6)

{
 struct xen_netif_extra_info *VAR_7;
 struct device *VAR_8 = &VAR_4->netdev->dev;
 RING_IDX VAR_9 = VAR_4->rx.rsp_cons;
 int VAR_10 = 0;

 do {
  struct sk_buff *VAR_11;
  grant_ref_t VAR_12;

  if (FUNC_4(VAR_9 + 1 == VAR_6)) {
   if (FUNC_3())
    FUNC_1(VAR_8, "Missing extra info\n");
   VAR_10 = -VAR_0;
   break;
  }

  VAR_7 = (struct xen_netif_extra_info *)
   FUNC_0(&VAR_4->rx, ++VAR_9);

  if (FUNC_4(!VAR_7->type ||
        VAR_7->type >= VAR_3)) {
   if (FUNC_3())
    FUNC_1(VAR_8, "Invalid extra type: %d\n",
     VAR_7->type);
   VAR_10 = -VAR_1;
  } else {
   FUNC_2(&VAR_5[VAR_7->type - 1], VAR_7,
          sizeof(*VAR_7));
  }

  VAR_11 = FUNC_6(VAR_4, VAR_9);
  VAR_12 = FUNC_5(VAR_4, VAR_9);
  FUNC_7(VAR_4, VAR_11, VAR_12);
 } while (VAR_7->flags & VAR_2);

 VAR_4->rx.rsp_cons = VAR_9;
 return VAR_10;
}
