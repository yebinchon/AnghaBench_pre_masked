
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl1271_tx_hw_descr {int dummy; } ;
struct wl1271 {TYPE_1__* ops; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int (* set_tx_desc_data_len ) (struct wl1271*,struct wl1271_tx_hw_descr*,struct sk_buff*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct wl1271*,struct wl1271_tx_hw_descr*,struct sk_buff*) ;

__attribute__((used)) static inline void
FUNC_2(struct wl1271 *VAR_0,
          struct wl1271_tx_hw_descr *VAR_1,
          struct sk_buff *VAR_2)
{
 if (!VAR_0->ops->set_tx_desc_data_len)
  FUNC_0(1);

 VAR_0->ops->set_tx_desc_data_len(VAR_0, VAR_1, VAR_2);
}
