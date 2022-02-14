
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;
typedef enum radeon_hpd_id { ____Placeholder_radeon_hpd_id } radeon_hpd_id ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;


 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

bool FUNC_3(struct radeon_device *VAR_2, enum radeon_hpd_id VAR_3)
{
 u32 VAR_4;
 bool VAR_5 = 0;

 switch (VAR_3) {
 case 129:
  VAR_4 = FUNC_2(VAR_0);
  if (FUNC_0(VAR_4))
   VAR_5 = 1;
  break;
 case 128:
  VAR_4 = FUNC_2(VAR_1);
  if (FUNC_1(VAR_4))
   VAR_5 = 1;
  break;
 default:
  break;
 }
 return VAR_5;
}
