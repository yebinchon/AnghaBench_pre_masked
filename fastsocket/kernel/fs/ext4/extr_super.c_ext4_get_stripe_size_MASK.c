
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ext4_sb_info {unsigned long s_stripe; unsigned long s_blocks_per_group; TYPE_1__* s_es; } ;
struct TYPE_2__ {int s_raid_stripe_width; int s_raid_stride; } ;


 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static unsigned long FUNC_2(struct ext4_sb_info *VAR_0)
{
 unsigned long VAR_1 = FUNC_0(VAR_0->s_es->s_raid_stride);
 unsigned long VAR_2 =
   FUNC_1(VAR_0->s_es->s_raid_stripe_width);

 if (VAR_0->s_stripe && VAR_0->s_stripe <= VAR_0->s_blocks_per_group)
  return VAR_0->s_stripe;

 if (VAR_2 <= VAR_0->s_blocks_per_group)
  return VAR_2;

 if (VAR_1 <= VAR_0->s_blocks_per_group)
  return VAR_1;

 return 0;
}
