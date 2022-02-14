
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl1271 {int dev; TYPE_1__* if_ops; } ;
struct TYPE_2__ {int (* set_block_size ) (int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

bool FUNC_1(struct wl1271 *VAR_1)
{
 if (VAR_1->if_ops->set_block_size) {
  VAR_1->if_ops->set_block_size(VAR_1->dev, VAR_0);
  return 1;
 }

 return 0;
}
