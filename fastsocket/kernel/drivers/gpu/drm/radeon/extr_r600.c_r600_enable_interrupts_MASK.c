
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int enabled; } ;
struct radeon_device {TYPE_1__ ih; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_1);
 u32 VAR_6 = FUNC_0(VAR_2);

 VAR_5 |= VAR_0;
 VAR_6 |= VAR_3;
 FUNC_1(VAR_1, VAR_5);
 FUNC_1(VAR_2, VAR_6);
 VAR_4->ih.enabled = 1;
}
