
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct radeon_device*,int) ;

void FUNC_3(struct radeon_device *VAR_7,
    enum radeon_hpd_id VAR_8)
{
 u32 VAR_9;
 bool VAR_10 = FUNC_2(VAR_7, VAR_8);

 switch (VAR_8) {
 case 133:
  VAR_9 = FUNC_0(VAR_0);
  if (VAR_10)
   VAR_9 &= ~VAR_6;
  else
   VAR_9 |= VAR_6;
  FUNC_1(VAR_0, VAR_9);
  break;
 case 132:
  VAR_9 = FUNC_0(VAR_1);
  if (VAR_10)
   VAR_9 &= ~VAR_6;
  else
   VAR_9 |= VAR_6;
  FUNC_1(VAR_1, VAR_9);
  break;
 case 131:
  VAR_9 = FUNC_0(VAR_2);
  if (VAR_10)
   VAR_9 &= ~VAR_6;
  else
   VAR_9 |= VAR_6;
  FUNC_1(VAR_2, VAR_9);
  break;
 case 130:
  VAR_9 = FUNC_0(VAR_3);
  if (VAR_10)
   VAR_9 &= ~VAR_6;
  else
   VAR_9 |= VAR_6;
  FUNC_1(VAR_3, VAR_9);
  break;
 case 129:
  VAR_9 = FUNC_0(VAR_4);
  if (VAR_10)
   VAR_9 &= ~VAR_6;
  else
   VAR_9 |= VAR_6;
  FUNC_1(VAR_4, VAR_9);
   break;
 case 128:
  VAR_9 = FUNC_0(VAR_5);
  if (VAR_10)
   VAR_9 &= ~VAR_6;
  else
   VAR_9 |= VAR_6;
  FUNC_1(VAR_5, VAR_9);
  break;
 default:
  break;
 }
}
