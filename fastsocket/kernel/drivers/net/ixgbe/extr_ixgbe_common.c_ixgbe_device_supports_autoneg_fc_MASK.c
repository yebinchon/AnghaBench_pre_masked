
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* check_link ) (struct ixgbe_hw*,int *,int*,int) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {int media_type; } ;
struct ixgbe_hw {int device_id; TYPE_3__ mac; TYPE_1__ phy; } ;
typedef int ixgbe_link_speed ;





 int VAR_0 ;




 int FUNC_0 (struct ixgbe_hw*,int *,int*,int) ;

bool FUNC_1(struct ixgbe_hw *VAR_1)
{
 bool VAR_2 = 0;
 ixgbe_link_speed VAR_3;
 bool VAR_4;

 switch (VAR_1->phy.media_type) {
 case 128:
 case 129:
  VAR_1->mac.ops.check_link(VAR_1, &VAR_3, &VAR_4, 0);

  if (VAR_4)
   VAR_2 = VAR_3 == VAR_0 ?
    1 : 0;
  else
   VAR_2 = 1;
  break;
 case 131:
  VAR_2 = 1;
  break;
 case 130:

  switch (VAR_1->device_id) {
  case 134:
  case 133:
  case 132:
   VAR_2 = 1;
   break;
  default:
   break;
  }
 default:
  break;
 }

 return VAR_2;
}
