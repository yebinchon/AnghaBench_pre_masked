
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint ;
struct modulecb {int dummy; } ;
struct macstat {int dummy; } ;
struct brcms_stf {int dummy; } ;
struct brcms_pub {int dummy; } ;
struct brcms_protection {int dummy; } ;
struct brcms_hw_band {int dummy; } ;
struct brcms_hardware {int dummy; } ;
struct brcms_core {int dummy; } ;
struct brcms_c_info {TYPE_3__* corestate; struct brcms_band** bandstate; int * stf; int * protection; int * bsscfg; int * default_bss; int * modulecb; TYPE_2__* hw; TYPE_1__* pub; } ;
struct brcms_bss_info {int dummy; } ;
struct brcms_band {int dummy; } ;
struct TYPE_6__ {int * macstat_snapshot; } ;
struct TYPE_5__ {struct brcms_hw_band** bandstate; struct brcms_c_info* wlc; } ;
struct TYPE_4__ {struct brcms_c_info* wlc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (struct brcms_c_info*) ;
 void* FUNC_2 (int,int ) ;

__attribute__((used)) static struct brcms_c_info *
FUNC_3(uint VAR_3, uint *VAR_4, uint VAR_5)
{
 struct brcms_c_info *VAR_6;

 VAR_6 = FUNC_2(sizeof(struct brcms_c_info), VAR_1);
 if (VAR_6 == ((void*)0)) {
  *VAR_4 = 1002;
  goto fail;
 }


 VAR_6->pub = FUNC_2(sizeof(struct brcms_pub), VAR_1);
 if (VAR_6->pub == ((void*)0)) {
  *VAR_4 = 1003;
  goto fail;
 }
 VAR_6->pub->wlc = VAR_6;



 VAR_6->hw = FUNC_2(sizeof(struct brcms_hardware), VAR_1);
 if (VAR_6->hw == ((void*)0)) {
  *VAR_4 = 1005;
  goto fail;
 }
 VAR_6->hw->wlc = VAR_6;

 VAR_6->hw->bandstate[0] =
  FUNC_2(sizeof(struct brcms_hw_band) * VAR_2, VAR_1);
 if (VAR_6->hw->bandstate[0] == ((void*)0)) {
  *VAR_4 = 1006;
  goto fail;
 } else {
  int VAR_7;

  for (VAR_7 = 1; VAR_7 < VAR_2; VAR_7++)
   VAR_6->hw->bandstate[VAR_7] = (struct brcms_hw_band *)
       ((unsigned long)VAR_6->hw->bandstate[0] +
        (sizeof(struct brcms_hw_band) * VAR_7));
 }

 VAR_6->modulecb =
  FUNC_2(sizeof(struct modulecb) * VAR_0, VAR_1);
 if (VAR_6->modulecb == ((void*)0)) {
  *VAR_4 = 1009;
  goto fail;
 }

 VAR_6->default_bss = FUNC_2(sizeof(struct brcms_bss_info), VAR_1);
 if (VAR_6->default_bss == ((void*)0)) {
  *VAR_4 = 1010;
  goto fail;
 }

 VAR_6->bsscfg = FUNC_0(VAR_3);
 if (VAR_6->bsscfg == ((void*)0)) {
  *VAR_4 = 1011;
  goto fail;
 }

 VAR_6->protection = FUNC_2(sizeof(struct brcms_protection),
      VAR_1);
 if (VAR_6->protection == ((void*)0)) {
  *VAR_4 = 1016;
  goto fail;
 }

 VAR_6->stf = FUNC_2(sizeof(struct brcms_stf), VAR_1);
 if (VAR_6->stf == ((void*)0)) {
  *VAR_4 = 1017;
  goto fail;
 }

 VAR_6->bandstate[0] =
  FUNC_2(sizeof(struct brcms_band)*VAR_2, VAR_1);
 if (VAR_6->bandstate[0] == ((void*)0)) {
  *VAR_4 = 1025;
  goto fail;
 } else {
  int VAR_8;

  for (VAR_8 = 1; VAR_8 < VAR_2; VAR_8++)
   VAR_6->bandstate[VAR_8] = (struct brcms_band *)
    ((unsigned long)VAR_6->bandstate[0]
    + (sizeof(struct brcms_band)*VAR_8));
 }

 VAR_6->corestate = FUNC_2(sizeof(struct brcms_core), VAR_1);
 if (VAR_6->corestate == ((void*)0)) {
  *VAR_4 = 1026;
  goto fail;
 }

 VAR_6->corestate->macstat_snapshot =
  FUNC_2(sizeof(struct macstat), VAR_1);
 if (VAR_6->corestate->macstat_snapshot == ((void*)0)) {
  *VAR_4 = 1027;
  goto fail;
 }

 return VAR_6;

 fail:
 FUNC_1(VAR_6);
 return ((void*)0);
}
