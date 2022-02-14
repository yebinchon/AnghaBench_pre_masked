
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usbnet {int done; TYPE_3__* net; TYPE_2__* driver_info; } ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_4__ {int rx_errors; } ;
struct TYPE_6__ {TYPE_1__ stats; } ;
struct TYPE_5__ {int flags; int (* rx_fixup ) (struct usbnet*,struct sk_buff*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct usbnet*,int ,TYPE_3__*,char*) ;
 int VAR_2 ;
 int FUNC_2 (int *,struct sk_buff*) ;
 int FUNC_3 (struct usbnet*,struct sk_buff*) ;
 int FUNC_4 (struct usbnet*,struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_5 (struct usbnet *VAR_3, struct sk_buff *VAR_4)
{
 if (VAR_3->driver_info->rx_fixup &&
     !VAR_3->driver_info->rx_fixup (VAR_3, VAR_4)) {

  if (!(VAR_3->driver_info->flags & VAR_1))
   VAR_3->net->stats.rx_errors++;
  goto done;
 }


 if (VAR_4->len) {

  if (VAR_3->driver_info->flags & VAR_0)
   FUNC_0(VAR_4);
  else
   FUNC_4(VAR_3, VAR_4);
  return;
 }

 FUNC_1(VAR_3, VAR_2, VAR_3->net, "drop\n");
 VAR_3->net->stats.rx_errors++;
done:
 FUNC_2(&VAR_3->done, VAR_4);
}
