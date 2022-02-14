
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int verifier_state_t ;
typedef int uint32_t ;
struct drm_device {scalar_t__ dev_private; } ;
typedef int drm_via_private_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int FUNC_1 (int *,int const**,int const*) ;
 int FUNC_2 (int *,int const**,int const*,int*) ;
 int FUNC_3 (int *,int const**,int const*) ;
 int FUNC_4 (int *,int const**,int const*) ;

int
FUNC_5(struct drm_device *VAR_7, const uint32_t *VAR_8,
    unsigned int VAR_9)
{

 drm_via_private_t *VAR_10 = (drm_via_private_t *) VAR_7->dev_private;
 uint32_t VAR_11;
 const uint32_t *VAR_12 = VAR_8 + (VAR_9 >> 2);
 verifier_state_t VAR_13 = 133;
 int VAR_14 = 0;

 while (VAR_8 < VAR_12) {

  switch (VAR_13) {
  case 130:
   VAR_13 =
       FUNC_2(VAR_10, &VAR_8, VAR_12,
           &VAR_14);
   break;
  case 131:
   VAR_13 = FUNC_1(VAR_10, &VAR_8, VAR_12);
   break;
  case 129:
   VAR_13 = FUNC_3(VAR_10, &VAR_8, VAR_12);
   break;
  case 128:
   VAR_13 = FUNC_4(VAR_10, &VAR_8, VAR_12);
   break;
  case 133:
   if (VAR_3 == (VAR_11 = *VAR_8))
    VAR_13 = 130;
   else if ((VAR_11 & VAR_2) == VAR_1)
    VAR_13 = 131;
   else if ((VAR_11 & VAR_4) == VAR_5)
    VAR_13 = 129;
   else if ((VAR_11 & VAR_4) == VAR_6)
    VAR_13 = 128;
   else {
    FUNC_0
        ("Invalid / Unimplemented DMA HEADER command. 0x%x\n",
         VAR_11);
    VAR_13 = 132;
   }
   break;
  case 132:
  default:
   return -VAR_0;
  }
 }
 if (VAR_13 == 132)
  return -VAR_0;
 return 0;
}
