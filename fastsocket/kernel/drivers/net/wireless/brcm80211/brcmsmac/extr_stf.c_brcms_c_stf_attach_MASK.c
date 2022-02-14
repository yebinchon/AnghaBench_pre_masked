
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct brcms_c_info {TYPE_1__* stf; TYPE_2__** bandstate; TYPE_3__* band; } ;
struct TYPE_6__ {int pi; } ;
struct TYPE_5__ {void* band_stf_stbc_tx; void* band_stf_ss_mode; } ;
struct TYPE_4__ {int ss_algosel_auto; scalar_t__ ss_algo_channel; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (struct brcms_c_info*) ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_2 (struct brcms_c_info*,TYPE_2__*) ;
 int FUNC_3 (struct brcms_c_info*,int ) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(struct brcms_c_info *VAR_7)
{
 VAR_7->bandstate[VAR_0]->band_stf_ss_mode = VAR_6;
 VAR_7->bandstate[VAR_1]->band_stf_ss_mode = VAR_5;

 if (FUNC_0(VAR_7->band) &&
     (FUNC_4(VAR_7->band->pi) != VAR_4))
  VAR_7->bandstate[VAR_0]->band_stf_ss_mode =
      VAR_5;
 FUNC_2(VAR_7, VAR_7->bandstate[VAR_0]);
 FUNC_2(VAR_7, VAR_7->bandstate[VAR_1]);

 FUNC_3(VAR_7, VAR_2);
 VAR_7->bandstate[VAR_0]->band_stf_stbc_tx = VAR_3;
 VAR_7->bandstate[VAR_1]->band_stf_stbc_tx = VAR_3;

 if (FUNC_1(VAR_7)) {
  VAR_7->stf->ss_algosel_auto = 1;

  VAR_7->stf->ss_algo_channel = (u16) -1;
 }
 return 0;
}
