
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int visible_vram_size; } ;
struct radeon_device {TYPE_1__* ring; TYPE_2__ mc; } ;
struct TYPE_3__ {int ready; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct radeon_device*,int ) ;

void FUNC_3(struct radeon_device *VAR_6)
{
 u32 VAR_7;

 FUNC_2(VAR_6, VAR_6->mc.visible_vram_size);


 VAR_7 = FUNC_0(VAR_3 + VAR_1);
 VAR_7 &= ~VAR_4;
 FUNC_1(VAR_3 + VAR_1, VAR_7);


 VAR_7 = FUNC_0(VAR_3 + VAR_2);
 VAR_7 &= ~VAR_4;
 FUNC_1(VAR_3 + VAR_2, VAR_7);

 VAR_6->ring[VAR_5].ready = 0;
 VAR_6->ring[VAR_0].ready = 0;
}
