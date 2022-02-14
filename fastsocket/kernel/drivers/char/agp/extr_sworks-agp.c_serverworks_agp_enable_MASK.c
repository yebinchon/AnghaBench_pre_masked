
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct agp_bridge_data {scalar_t__ capndx; } ;
struct TYPE_2__ {int svrwrks_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct agp_bridge_data*,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,scalar_t__,int*) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_4(struct agp_bridge_data *VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 FUNC_2(VAR_2.svrwrks_dev,
         VAR_3->capndx + VAR_1,
         &VAR_5);

 VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_5);

 VAR_5 &= ~0x10;
 VAR_5 &= ~0x08;

 VAR_5 |= 0x100;

 FUNC_3(VAR_2.svrwrks_dev,
          VAR_3->capndx + VAR_0,
          VAR_5);

 FUNC_1(VAR_5, 0);
}
