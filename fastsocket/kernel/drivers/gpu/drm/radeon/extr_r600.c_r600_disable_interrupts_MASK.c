
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int enabled; scalar_t__ rptr; } ;
struct radeon_device {TYPE_1__ ih; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct radeon_device *VAR_6)
{
 u32 VAR_7 = FUNC_0(VAR_2);
 u32 VAR_8 = FUNC_0(VAR_1);

 VAR_7 &= ~VAR_3;
 VAR_8 &= ~VAR_0;
 FUNC_1(VAR_2, VAR_7);
 FUNC_1(VAR_1, VAR_8);

 FUNC_1(VAR_4, 0);
 FUNC_1(VAR_5, 0);
 VAR_6->ih.enabled = 0;
 VAR_6->ih.rptr = 0;
}
