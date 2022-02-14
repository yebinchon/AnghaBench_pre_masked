
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct iwl_scale_tbl_info {int* expected_tpt; int lq_type; TYPE_1__* win; } ;
struct iwl_priv {int dummy; } ;
struct iwl_lq_sta {size_t active_tbl; int last_tpt; struct iwl_scale_tbl_info* lq_info; } ;
typedef size_t s8 ;
typedef int s32 ;
struct TYPE_2__ {int success_ratio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iwl_priv*,size_t,int,int ) ;

__attribute__((used)) static s32 FUNC_1(struct iwl_priv *VAR_4,
       struct iwl_lq_sta *VAR_5,
       struct iwl_scale_tbl_info *VAR_6,
       u16 VAR_7, s8 VAR_8)
{

 struct iwl_scale_tbl_info *VAR_9 =
     &(VAR_5->lq_info[VAR_5->active_tbl]);
 s32 VAR_10 = VAR_9->win[VAR_8].success_ratio;
 s32 VAR_11 = VAR_9->expected_tpt[VAR_8];


 s32 *VAR_12 = VAR_6->expected_tpt;

 s32 VAR_13, VAR_14, VAR_15, VAR_16;
 u16 VAR_17;
 s8 VAR_18 = VAR_8;

 VAR_13 = VAR_14 = VAR_15 = VAR_16 = VAR_2;

 for (; ;) {
  VAR_17 = FUNC_0(VAR_4, VAR_18, VAR_7,
      VAR_6->lq_type);

  VAR_15 = VAR_17 & 0xff;
  VAR_14 = (VAR_17 >> 8) & 0xff;
  if ((((100 * VAR_12[VAR_18]) > VAR_5->last_tpt) &&
       ((VAR_10 > VAR_0) &&
        (VAR_10 <= VAR_1) &&
        (VAR_12[VAR_18] <= VAR_11))) ||
      ((VAR_10 >= VAR_3) &&
       (VAR_12[VAR_18] > VAR_11))) {




   if (VAR_16 != VAR_2) {
    VAR_13 = VAR_16;
    break;
   }

   VAR_13 = VAR_18;


   if (VAR_15 != VAR_2)
    VAR_18 = VAR_15;


   else
    break;


  } else {



   if (VAR_13 != VAR_2)
    break;


   else if (VAR_14 != VAR_2) {
    VAR_16 = VAR_14;
    VAR_18 = VAR_14;


   } else {
    VAR_13 = VAR_18;
    break;
   }
  }
 }

 return VAR_13;
}
