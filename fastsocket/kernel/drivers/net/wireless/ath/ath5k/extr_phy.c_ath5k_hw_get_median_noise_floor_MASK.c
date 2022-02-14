
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nfval; } ;
struct ath5k_hw {TYPE_1__ ah_nfcal_hist; } ;
typedef int sort ;
typedef scalar_t__ s16 ;


 int FUNC_0 (struct ath5k_hw*,int ,char*,int,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__*,int ,int) ;

__attribute__((used)) static s16
FUNC_2(struct ath5k_hw *VAR_2)
{
 s16 VAR_3[VAR_1];
 s16 VAR_4;
 int VAR_5, VAR_6;

 FUNC_1(VAR_3, VAR_2->ah_nfcal_hist.nfval, sizeof(VAR_3));
 for (VAR_5 = 0; VAR_5 < VAR_1 - 1; VAR_5++) {
  for (VAR_6 = 1; VAR_6 < VAR_1 - VAR_5; VAR_6++) {
   if (VAR_3[VAR_6] > VAR_3[VAR_6 - 1]) {
    VAR_4 = VAR_3[VAR_6];
    VAR_3[VAR_6] = VAR_3[VAR_6 - 1];
    VAR_3[VAR_6 - 1] = VAR_4;
   }
  }
 }
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  FUNC_0(VAR_2, VAR_0,
   "cal %d:%d\n", VAR_5, VAR_3[VAR_5]);
 }
 return VAR_3[(VAR_1 - 1) / 2];
}
