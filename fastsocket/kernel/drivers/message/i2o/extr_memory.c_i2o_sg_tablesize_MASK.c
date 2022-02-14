
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct i2o_message {int dummy; } ;
struct TYPE_3__ {TYPE_2__* virt; } ;
struct i2o_controller {scalar_t__ short_req; scalar_t__ pae_support; TYPE_1__ status_block; } ;
struct TYPE_4__ {int inbound_frame_size; } ;
typedef TYPE_2__ i2o_status_block ;



u16 FUNC_0(struct i2o_controller *VAR_0, u16 VAR_1)
{
 i2o_status_block *VAR_2 = VAR_0->status_block.virt;
 u16 VAR_3 =
     (VAR_2->inbound_frame_size - sizeof(struct i2o_message) / 4) -
     VAR_1;

 if (VAR_0->pae_support) {




  VAR_3 -= 2;
  VAR_3 /= 3;
 } else
  VAR_3 /= 2;

 if (VAR_0->short_req && (VAR_3 > 8))
  VAR_3 = 8;

 return VAR_3;
}
