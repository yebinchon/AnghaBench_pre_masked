
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int channels; int rate; int bits_per_sample; scalar_t__ category_code; scalar_t__ status_bits; } ;
struct radeon_device {TYPE_1__ audio_status; } ;


 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,int) ;
 int VAR_0 ;

int FUNC_2(struct radeon_device *VAR_1)
{
 if (!VAR_0 || !FUNC_0(VAR_1))
  return 0;

 FUNC_1(VAR_1, 1);

 VAR_1->audio_status.channels = -1;
 VAR_1->audio_status.rate = -1;
 VAR_1->audio_status.bits_per_sample = -1;
 VAR_1->audio_status.status_bits = 0;
 VAR_1->audio_status.category_code = 0;

 return 0;
}
