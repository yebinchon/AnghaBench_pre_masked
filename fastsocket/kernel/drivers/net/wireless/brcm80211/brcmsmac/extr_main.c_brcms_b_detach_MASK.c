
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
struct brcms_hw_band {int * pi; } ;
struct brcms_hardware {scalar_t__ _nbands; int * sih; int physhim; int phy_sh; struct brcms_hw_band** bandstate; struct brcms_hw_band* band; } ;
struct brcms_c_info {struct brcms_hardware* hw; } ;


 size_t FUNC_0 (struct brcms_c_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct brcms_hardware*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct brcms_c_info *VAR_0)
{
 uint VAR_1;
 struct brcms_hw_band *VAR_2;
 struct brcms_hardware *VAR_3 = VAR_0->hw;
 int VAR_4;

 VAR_4 = 0;

 FUNC_2(VAR_3);

 VAR_2 = VAR_3->band;
 for (VAR_1 = 0; VAR_1 < VAR_3->_nbands; VAR_1++) {
  if (VAR_2->pi) {

   FUNC_4(VAR_2->pi);
   VAR_2->pi = ((void*)0);
  }
  VAR_2 = VAR_3->bandstate[FUNC_0(VAR_0)];
 }


 FUNC_3(VAR_3->phy_sh);

 FUNC_5(VAR_3->physhim);

 if (VAR_3->sih) {
  FUNC_1(VAR_3->sih);
  VAR_3->sih = ((void*)0);
 }

 return VAR_4;

}
