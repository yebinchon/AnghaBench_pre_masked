
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct hw_data {int BeaconPeriod; int ProbeDelay; scalar_t__ SurpriseRemove; } ;


 int FUNC_0 (struct hw_data*,int,int) ;

__attribute__((used)) static void FUNC_1(struct hw_data *VAR_0, u16 VAR_1)
{
 u32 VAR_2;

 if (VAR_0->SurpriseRemove)
  return;

 VAR_0->BeaconPeriod = VAR_1;
 VAR_2 = VAR_0->BeaconPeriod << 16;
 VAR_2 |= VAR_0->ProbeDelay;
 FUNC_0(VAR_0, 0x0848, VAR_2);
}
