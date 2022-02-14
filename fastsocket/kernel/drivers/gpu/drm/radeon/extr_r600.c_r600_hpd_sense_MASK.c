
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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

bool FUNC_2(struct radeon_device *VAR_11, enum radeon_hpd_id VAR_12)
{
 bool VAR_13 = 0;

 if (FUNC_0(VAR_11)) {
  switch (VAR_12) {
  case 133:
   if (FUNC_1(VAR_4) & VAR_10)
    VAR_13 = 1;
   break;
  case 132:
   if (FUNC_1(VAR_5) & VAR_10)
    VAR_13 = 1;
   break;
  case 131:
   if (FUNC_1(VAR_6) & VAR_10)
    VAR_13 = 1;
   break;
  case 130:
   if (FUNC_1(VAR_7) & VAR_10)
    VAR_13 = 1;
   break;

  case 129:
   if (FUNC_1(VAR_8) & VAR_10)
    VAR_13 = 1;
   break;
  case 128:
   if (FUNC_1(VAR_9) & VAR_10)
    VAR_13 = 1;
   break;
  default:
   break;
  }
 } else {
  switch (VAR_12) {
  case 133:
   if (FUNC_1(VAR_0) & VAR_3)
    VAR_13 = 1;
   break;
  case 132:
   if (FUNC_1(VAR_1) & VAR_3)
    VAR_13 = 1;
   break;
  case 131:
   if (FUNC_1(VAR_2) & VAR_3)
    VAR_13 = 1;
   break;
  default:
   break;
  }
 }
 return VAR_13;
}
