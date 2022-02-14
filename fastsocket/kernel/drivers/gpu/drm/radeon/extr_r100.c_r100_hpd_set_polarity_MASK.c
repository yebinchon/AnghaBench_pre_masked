
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;
typedef enum radeon_hpd_id { ____Placeholder_radeon_hpd_id } radeon_hpd_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct radeon_device*,int) ;

void FUNC_3(struct radeon_device *VAR_4,
      enum radeon_hpd_id VAR_5)
{
 u32 VAR_6;
 bool VAR_7 = FUNC_2(VAR_4, VAR_5);

 switch (VAR_5) {
 case 129:
  VAR_6 = FUNC_0(VAR_3);
  if (VAR_7)
   VAR_6 &= ~VAR_2;
  else
   VAR_6 |= VAR_2;
  FUNC_1(VAR_3, VAR_6);
  break;
 case 128:
  VAR_6 = FUNC_0(VAR_1);
  if (VAR_7)
   VAR_6 &= ~VAR_0;
  else
   VAR_6 |= VAR_0;
  FUNC_1(VAR_1, VAR_6);
  break;
 default:
  break;
 }
}
