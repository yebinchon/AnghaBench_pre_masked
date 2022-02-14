
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;
typedef enum radeon_hpd_id { ____Placeholder_radeon_hpd_id } radeon_hpd_id ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;






 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct radeon_device*,int) ;

void FUNC_4(struct radeon_device *VAR_11,
      enum radeon_hpd_id VAR_12)
{
 u32 VAR_13;
 bool VAR_14 = FUNC_3(VAR_11, VAR_12);

 if (FUNC_0(VAR_11)) {
  switch (VAR_12) {
  case 133:
   VAR_13 = FUNC_1(VAR_4);
   if (VAR_14)
    VAR_13 &= ~VAR_10;
   else
    VAR_13 |= VAR_10;
   FUNC_2(VAR_4, VAR_13);
   break;
  case 132:
   VAR_13 = FUNC_1(VAR_5);
   if (VAR_14)
    VAR_13 &= ~VAR_10;
   else
    VAR_13 |= VAR_10;
   FUNC_2(VAR_5, VAR_13);
   break;
  case 131:
   VAR_13 = FUNC_1(VAR_6);
   if (VAR_14)
    VAR_13 &= ~VAR_10;
   else
    VAR_13 |= VAR_10;
   FUNC_2(VAR_6, VAR_13);
   break;
  case 130:
   VAR_13 = FUNC_1(VAR_7);
   if (VAR_14)
    VAR_13 &= ~VAR_10;
   else
    VAR_13 |= VAR_10;
   FUNC_2(VAR_7, VAR_13);
   break;
  case 129:
   VAR_13 = FUNC_1(VAR_8);
   if (VAR_14)
    VAR_13 &= ~VAR_10;
   else
    VAR_13 |= VAR_10;
   FUNC_2(VAR_8, VAR_13);
   break;

  case 128:
   VAR_13 = FUNC_1(VAR_9);
   if (VAR_14)
    VAR_13 &= ~VAR_10;
   else
    VAR_13 |= VAR_10;
   FUNC_2(VAR_9, VAR_13);
   break;
  default:
   break;
  }
 } else {
  switch (VAR_12) {
  case 133:
   VAR_13 = FUNC_1(VAR_0);
   if (VAR_14)
    VAR_13 &= ~VAR_3;
   else
    VAR_13 |= VAR_3;
   FUNC_2(VAR_0, VAR_13);
   break;
  case 132:
   VAR_13 = FUNC_1(VAR_1);
   if (VAR_14)
    VAR_13 &= ~VAR_3;
   else
    VAR_13 |= VAR_3;
   FUNC_2(VAR_1, VAR_13);
   break;
  case 131:
   VAR_13 = FUNC_1(VAR_2);
   if (VAR_14)
    VAR_13 &= ~VAR_3;
   else
    VAR_13 |= VAR_3;
   FUNC_2(VAR_2, VAR_13);
   break;
  default:
   break;
  }
 }
}
