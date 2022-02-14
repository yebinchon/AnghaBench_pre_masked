
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int* FUNC_1 (struct drm_device*,int) ;

int
FUNC_2(struct drm_device *VAR_2, void *VAR_3,
   int (*VAR_4)(struct drm_device *, void *, int VAR_5, u8 *VAR_6))
{
 int VAR_7, VAR_8 = -1;
 u8 *VAR_9 = ((void*)0);
 while ((VAR_9 = FUNC_1(VAR_2, ++VAR_8))) {
  if (FUNC_0(VAR_9[0]) == 0x00000000)
   break;
  if (FUNC_0(VAR_9[0]) == 0xffffffff)
   break;

  if ((VAR_9[0] & 0x0f) == VAR_1)
   continue;
  if ((VAR_9[0] & 0x0f) == VAR_0)
   break;

  VAR_7 = VAR_4(VAR_2, VAR_3, VAR_8, VAR_9);
  if (VAR_7)
   return VAR_7;
 }

 return 0;
}
