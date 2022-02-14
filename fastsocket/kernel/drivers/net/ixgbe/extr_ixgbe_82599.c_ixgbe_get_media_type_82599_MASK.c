
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct ixgbe_hw {int device_id; TYPE_1__ phy; } ;
typedef enum ixgbe_media_type { ____Placeholder_ixgbe_media_type } ixgbe_media_type ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



__attribute__((used)) static enum ixgbe_media_type FUNC_0(struct ixgbe_hw *VAR_7)
{
 enum ixgbe_media_type VAR_8;


 switch (VAR_7->phy.type) {
 case 129:
 case 128:
  VAR_8 = VAR_1;
  goto out;
 default:
  break;
 }

 switch (VAR_7->device_id) {
 case 140:
 case 139:
 case 143:
 case 141:
 case 144:
 case 130:

  VAR_8 = VAR_0;
  break;
 case 136:
 case 134:
 case 135:
 case 133:
 case 132:
 case 145:
  VAR_8 = VAR_3;
  break;
 case 142:
  VAR_8 = VAR_2;
  break;
 case 131:
  VAR_8 = VAR_1;
  break;
 case 138:
  VAR_8 = VAR_4;
  break;
 case 137:
  VAR_8 = VAR_5;
  break;
 default:
  VAR_8 = VAR_6;
  break;
 }
out:
 return VAR_8;
}
