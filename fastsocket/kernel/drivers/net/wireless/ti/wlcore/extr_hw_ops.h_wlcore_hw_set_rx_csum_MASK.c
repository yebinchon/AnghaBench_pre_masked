
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl1271_rx_descriptor {int dummy; } ;
struct wl1271 {TYPE_1__* ops; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int (* set_rx_csum ) (struct wl1271*,struct wl1271_rx_descriptor*,struct sk_buff*) ;} ;


 int FUNC_0 (struct wl1271*,struct wl1271_rx_descriptor*,struct sk_buff*) ;

__attribute__((used)) static inline void
FUNC_1(struct wl1271 *VAR_0,
        struct wl1271_rx_descriptor *VAR_1,
        struct sk_buff *VAR_2)
{
 if (VAR_0->ops->set_rx_csum)
  VAR_0->ops->set_rx_csum(VAR_0, VAR_1, VAR_2);
}
