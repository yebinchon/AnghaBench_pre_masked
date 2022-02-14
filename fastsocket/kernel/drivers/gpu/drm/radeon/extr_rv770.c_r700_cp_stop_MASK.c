
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int visible_vram_size; } ;
struct radeon_device {TYPE_2__* ring; TYPE_1__ mc; } ;
struct TYPE_4__ {int ready; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct radeon_device*,int ) ;

void FUNC_2(struct radeon_device *VAR_5)
{
 FUNC_1(VAR_5, VAR_5->mc.visible_vram_size);
 FUNC_0(VAR_0, (VAR_1 | VAR_2));
 FUNC_0(VAR_4, 0);
 VAR_5->ring[VAR_3].ready = 0;
}
