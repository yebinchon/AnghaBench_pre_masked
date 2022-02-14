
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

void FUNC_2(struct drm_device *VAR_7)
{
 struct radeon_device *VAR_8 = VAR_7->dev_private;
 uint32_t VAR_9, VAR_10, VAR_11;

 VAR_9 = FUNC_0(VAR_1);
 VAR_10 = FUNC_0(VAR_2);
 VAR_11 = FUNC_0(VAR_3);


 VAR_9 &= ~VAR_5;


 VAR_10 |= (VAR_4 |
      VAR_0);


 VAR_11 |= VAR_6;

 FUNC_1(VAR_1, VAR_9);
 FUNC_1(VAR_2, VAR_10);
 FUNC_1(VAR_3, VAR_11);
}
