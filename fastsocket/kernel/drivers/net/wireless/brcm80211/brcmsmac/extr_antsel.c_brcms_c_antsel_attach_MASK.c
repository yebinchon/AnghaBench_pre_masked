
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ssb_sprom {int antswitch; int ant_available_bg; int ant_available_a; } ;
struct brcms_c_info {TYPE_4__* hw; TYPE_2__* pub; } ;
struct antsel_info {int antsel_avail; int antsel_antswitch; int antcfg_cur; int antcfg_11n; void* antsel_type; TYPE_2__* pub; struct brcms_c_info* wlc; } ;
struct TYPE_8__ {TYPE_3__* d11core; } ;
struct TYPE_7__ {TYPE_1__* bus; } ;
struct TYPE_6__ {int sromrev; int boardflags2; } ;
struct TYPE_5__ {struct ssb_sprom sprom; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,void*) ;
 int FUNC_1 (struct antsel_info*,int *,int) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 struct antsel_info* FUNC_3 (int,int ) ;

struct antsel_info *FUNC_4(struct brcms_c_info *VAR_5)
{
 struct antsel_info *VAR_6;
 struct ssb_sprom *VAR_7 = &VAR_5->hw->d11core->bus->sprom;

 VAR_6 = FUNC_3(sizeof(struct antsel_info), VAR_4);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->wlc = VAR_5;
 VAR_6->pub = VAR_5->pub;
 VAR_6->antsel_type = VAR_2;
 VAR_6->antsel_avail = 0;
 VAR_6->antsel_antswitch = VAR_7->antswitch;

 if ((VAR_6->pub->sromrev >= 4) && (VAR_6->antsel_antswitch != 0)) {
  switch (VAR_6->antsel_antswitch) {
  case 130:
  case 129:
  case 128:

   VAR_6->antsel_type = VAR_0;

   if ((VAR_7->ant_available_bg == 7) ||
       (VAR_7->ant_available_a == 7)) {
    VAR_6->antsel_avail = 1;
   } else if (
    VAR_7->ant_available_bg == 3 ||
    VAR_7->ant_available_a == 3) {
    VAR_6->antsel_avail = 0;
   } else {
    VAR_6->antsel_avail = 0;
    FUNC_2(VAR_5->hw->d11core,
       "antsel_attach: 2o3 "
       "board cfg invalid\n");
   }

   break;
  default:
   break;
  }
 } else if ((VAR_6->pub->sromrev == 4) &&
     (VAR_7->ant_available_bg == 7) &&
     (VAR_7->ant_available_a == 0)) {

  VAR_6->antsel_type = VAR_0;
  VAR_6->antsel_avail = 1;
 } else if (VAR_6->pub->boardflags2 & VAR_3) {
  VAR_6->antsel_type = VAR_1;
  VAR_6->antsel_avail = 1;
 }


 FUNC_0(VAR_5->hw, VAR_6->antsel_type);


 FUNC_1(VAR_6, &VAR_6->antcfg_11n, 1);
 FUNC_1(VAR_6, &VAR_6->antcfg_cur, 1);

 return VAR_6;
}
