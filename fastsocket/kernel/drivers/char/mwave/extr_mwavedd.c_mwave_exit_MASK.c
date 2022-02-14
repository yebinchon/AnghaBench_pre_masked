
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pMWAVE_DEVICE_DATA ;
struct TYPE_3__ {size_t nr_registered_attrs; scalar_t__ sLine; int rBDData; scalar_t__ bBDInitialized; scalar_t__ bResourcesClaimed; scalar_t__ bDSPEnabled; scalar_t__ bMwaveDevRegistered; scalar_t__ device_registered; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 size_t VAR_2 ;
 int FUNC_3 (int *) ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(void)
{
 pMWAVE_DEVICE_DATA VAR_7 = &VAR_6;

 FUNC_0(VAR_1, "mwavedd::mwave_exit entry\n");
 if ( VAR_7->sLine >= 0 ) {
  FUNC_4(VAR_7->sLine);
 }
 if (VAR_7->bMwaveDevRegistered) {
  FUNC_3(&VAR_5);
 }
 if (VAR_7->bDSPEnabled) {
  FUNC_6(&VAR_7->rBDData);
 }
 if (VAR_7->bResourcesClaimed) {
  FUNC_7(&VAR_7->rBDData);
 }
 if (VAR_7->bBDInitialized) {
  FUNC_5(&VAR_7->rBDData);
 }

 FUNC_0(VAR_1, "mwavedd::mwave_exit exit\n");
}
