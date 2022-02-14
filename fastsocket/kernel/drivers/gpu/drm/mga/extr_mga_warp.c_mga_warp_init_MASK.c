
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int chipset; } ;
typedef TYPE_1__ drm_mga_private_t ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;



 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;

int FUNC_3(drm_mga_private_t *VAR_12)
{
 u32 VAR_13;



 switch (VAR_12->chipset) {
 case 129:
 case 128:
  FUNC_2(VAR_5, VAR_8);
  FUNC_2(VAR_3, 0x00000E00);
  FUNC_2(VAR_10, 0x00001807);
  FUNC_2(VAR_1, 0x18000000);
  break;
 case 130:
  FUNC_2(VAR_4, VAR_8);
  FUNC_2(VAR_3, 0x1606);
  FUNC_2(VAR_10, 7);
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_7, (VAR_9 |
         VAR_6 | VAR_2));
 VAR_13 = FUNC_1(VAR_7);
 if (VAR_13 != VAR_11) {
  FUNC_0("WARP engine config failed! 0x%x != 0x%x\n",
     VAR_13, VAR_11);
  return -VAR_0;
 }

 return 0;
}
