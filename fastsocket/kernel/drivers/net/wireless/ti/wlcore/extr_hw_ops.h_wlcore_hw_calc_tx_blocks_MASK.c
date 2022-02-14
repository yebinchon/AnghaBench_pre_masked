
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wl1271 {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* calc_tx_blocks ) (struct wl1271*,int ,int ) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct wl1271*,int ,int ) ;

__attribute__((used)) static inline u32
FUNC_2(struct wl1271 *VAR_0, u32 VAR_1, u32 VAR_2)
{
 if (!VAR_0->ops->calc_tx_blocks)
  FUNC_0(1);

 return VAR_0->ops->calc_tx_blocks(VAR_0, VAR_1, VAR_2);
}
