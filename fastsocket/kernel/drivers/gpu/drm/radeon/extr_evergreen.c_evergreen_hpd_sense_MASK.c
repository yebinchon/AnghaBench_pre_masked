
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
typedef enum radeon_hpd_id { ____Placeholder_radeon_hpd_id } radeon_hpd_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int FUNC_0 (int ) ;

bool FUNC_1(struct radeon_device *VAR_7, enum radeon_hpd_id VAR_8)
{
 bool VAR_9 = 0;

 switch (VAR_8) {
 case 133:
  if (FUNC_0(VAR_0) & VAR_6)
   VAR_9 = 1;
  break;
 case 132:
  if (FUNC_0(VAR_1) & VAR_6)
   VAR_9 = 1;
  break;
 case 131:
  if (FUNC_0(VAR_2) & VAR_6)
   VAR_9 = 1;
  break;
 case 130:
  if (FUNC_0(VAR_3) & VAR_6)
   VAR_9 = 1;
  break;
 case 129:
  if (FUNC_0(VAR_4) & VAR_6)
   VAR_9 = 1;
  break;
 case 128:
  if (FUNC_0(VAR_5) & VAR_6)
   VAR_9 = 1;
   break;
 default:
  break;
 }

 return VAR_9;
}
