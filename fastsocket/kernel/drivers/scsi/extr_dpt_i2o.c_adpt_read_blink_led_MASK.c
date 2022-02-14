
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ FwDebugBLEDvalue_P; scalar_t__ FwDebugBLEDflag_P; } ;
typedef TYPE_1__ adpt_hba ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u8 FUNC_1(adpt_hba* VAR_0)
{
 if (VAR_0->FwDebugBLEDflag_P) {
  if( FUNC_0(VAR_0->FwDebugBLEDflag_P) == 0xbc ){
   return FUNC_0(VAR_0->FwDebugBLEDvalue_P);
  }
 }
 return 0;
}
