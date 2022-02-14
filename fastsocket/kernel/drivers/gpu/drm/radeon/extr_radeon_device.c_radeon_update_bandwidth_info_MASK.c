
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {void* full; } ;
struct TYPE_6__ {void* full; } ;
struct TYPE_7__ {int current_sclk; int current_mclk; TYPE_4__ sclk; TYPE_1__ core_bandwidth; TYPE_4__ mclk; } ;
struct radeon_device {int flags; TYPE_2__ pm; } ;
struct TYPE_8__ {void* full; } ;
typedef TYPE_3__ fixed20_12 ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (TYPE_4__,TYPE_3__) ;

void FUNC_2(struct radeon_device *VAR_1)
{
 fixed20_12 VAR_2;
 u32 VAR_3 = VAR_1->pm.current_sclk;
 u32 VAR_4 = VAR_1->pm.current_mclk;


 VAR_2.full = FUNC_0(100);
 VAR_1->pm.sclk.full = FUNC_0(VAR_3);
 VAR_1->pm.sclk.full = FUNC_1(VAR_1->pm.sclk, VAR_2);
 VAR_1->pm.mclk.full = FUNC_0(VAR_4);
 VAR_1->pm.mclk.full = FUNC_1(VAR_1->pm.mclk, VAR_2);

 if (VAR_1->flags & VAR_0) {
  VAR_2.full = FUNC_0(16);

  VAR_1->pm.core_bandwidth.full = FUNC_1(VAR_1->pm.sclk, VAR_2);
 }
}
