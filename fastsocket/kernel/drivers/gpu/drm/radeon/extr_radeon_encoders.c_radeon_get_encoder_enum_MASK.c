
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct radeon_device {int family; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int FUNC_0 (struct radeon_device*) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

uint32_t
FUNC_1(struct drm_device *VAR_17, uint32_t VAR_18, uint8_t VAR_19)
{
 struct radeon_device *VAR_20 = VAR_17->dev_private;
 uint32_t VAR_21 = 0;

 switch (VAR_18) {
 case 137:
 case 129:
 case 128:
 case 136:
 case 135:
  switch (VAR_19) {
  case 1:
   if ((VAR_20->family == VAR_0) ||
       (VAR_20->family == VAR_1) ||
       (VAR_20->family == VAR_2))
    VAR_21 = VAR_7;
   else if (FUNC_0(VAR_20))
    VAR_21 = VAR_10;
   else
    VAR_21 = VAR_6;
   break;
  case 2:
   if (FUNC_0(VAR_20))
    VAR_21 = VAR_11;
   else {



    VAR_21 = VAR_7;
   }
   break;
  case 3:
   if (FUNC_0(VAR_20))
    VAR_21 = VAR_12;
   else
    VAR_21 = VAR_9;
   break;
  }
  break;
 case 131:
  if (FUNC_0(VAR_20))
   VAR_21 = VAR_15;
  else
   VAR_21 = VAR_14;
  break;
 case 134:
  if ((VAR_20->family == VAR_0) ||
      (VAR_20->family == VAR_1) ||
      (VAR_20->family == VAR_2))
   VAR_21 = VAR_9;
  else if (FUNC_0(VAR_20))
   VAR_21 = VAR_13;
  else
   VAR_21 = VAR_16;
  break;
 case 130:
 case 133:
  if ((VAR_20->family == VAR_3) ||
      (VAR_20->family == VAR_4) ||
      (VAR_20->family == VAR_5))
   VAR_21 = VAR_8;
  else if (FUNC_0(VAR_20))
   VAR_21 = VAR_12;
  else
   VAR_21 = VAR_9;
  break;
 case 132:
  VAR_21 = VAR_15;
  break;
 }

 return VAR_21;
}
