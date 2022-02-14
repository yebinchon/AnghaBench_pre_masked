
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ssb_sprom {char* alpha2; } ;
struct brcms_pub {int srom_ccode; } ;
struct brcms_cm_info {TYPE_5__* world_regd; struct brcms_c_info* wlc; struct brcms_pub* pub; } ;
struct brcms_c_info {int autocountry_default; int country_default; struct brcms_pub* pub; struct brcms_cm_info* cmi; TYPE_3__* hw; } ;
struct TYPE_12__ {TYPE_4__* regdomain; } ;
struct TYPE_11__ {char* alpha2; } ;
struct TYPE_10__ {TYPE_2__* d11core; } ;
struct TYPE_9__ {TYPE_1__* bus; } ;
struct TYPE_8__ {struct ssb_sprom sprom; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (struct brcms_cm_info*,TYPE_5__*) ;
 TYPE_5__* FUNC_2 () ;
 TYPE_5__* FUNC_3 (char const*,int) ;
 struct brcms_cm_info* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,char const*,int) ;

struct brcms_cm_info *FUNC_6(struct brcms_c_info *VAR_2)
{
 struct brcms_cm_info *VAR_3;
 struct brcms_pub *VAR_4 = VAR_2->pub;
 struct ssb_sprom *VAR_5 = &VAR_2->hw->d11core->bus->sprom;
 const char *VAR_6 = VAR_5->alpha2;
 int VAR_7 = sizeof(VAR_5->alpha2);

 VAR_3 = FUNC_4(sizeof(struct brcms_cm_info), VAR_1);
 if (VAR_3 == ((void*)0))
  return ((void*)0);
 VAR_3->pub = VAR_4;
 VAR_3->wlc = VAR_2;
 VAR_2->cmi = VAR_3;


 VAR_3->world_regd = FUNC_3(VAR_6, VAR_7);
 if (FUNC_0(VAR_6))
  FUNC_5(VAR_2->pub->srom_ccode, VAR_6, VAR_7);





 if (!VAR_3->world_regd) {
  VAR_3->world_regd = FUNC_2();
  VAR_6 = VAR_3->world_regd->regdomain->alpha2;
  VAR_7 = VAR_0 - 1;
 }


 FUNC_5(VAR_2->country_default, VAR_6, VAR_7);


 FUNC_5(VAR_2->autocountry_default, VAR_6, VAR_7);

 FUNC_1(VAR_3, VAR_3->world_regd);

 return VAR_3;
}
