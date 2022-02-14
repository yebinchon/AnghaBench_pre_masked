
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int devid; } ;
struct ath_hw {TYPE_2__ hw_version; } ;
struct ath_common {TYPE_1__* bus_ops; } ;
struct TYPE_3__ {int ath_bus_type; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_hw*) ;
 struct ath_common* FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_common*,char*,int) ;

int FUNC_3(struct ath_hw *VAR_2)
{
 int VAR_3;
 struct ath_common *VAR_4 = FUNC_1(VAR_2);


 switch (VAR_2->hw_version.devid) {
 case 144:
 case 143:
 case 145:
 case 142:
 case 141:
 case 140:
 case 139:
 case 138:
 case 137:
 case 146:
 case 130:
 case 133:
 case 136:
 case 135:
 case 129:
 case 131:
 case 134:
 case 128:
 case 132:
  break;
 default:
  if (VAR_4->bus_ops->ath_bus_type == VAR_0)
   break;
  FUNC_2(VAR_4, "Hardware device ID 0x%04x not supported\n",
   VAR_2->hw_version.devid);
  return -VAR_1;
 }

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3) {
  FUNC_2(VAR_4,
   "Unable to initialize hardware; initialization status: %d\n",
   VAR_3);
  return VAR_3;
 }

 return 0;
}
