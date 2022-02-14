
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int audio_enabled; } ;


 int FUNC_0 (struct radeon_device*,int) ;

void FUNC_1(struct radeon_device *VAR_0)
{
 if (!VAR_0->audio_enabled)
  return;

 FUNC_0(VAR_0, 0);
}
