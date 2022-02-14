
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct iwl_scale_tbl_info {int ant_type; scalar_t__ is_SGI; int lq_type; scalar_t__ is_ht40; } ;
struct iwl_mvm {int dummy; } ;
struct TYPE_2__ {int plcp; int plcp_siso; int plcp_mimo2; int plcp_mimo3; } ;


 int FUNC_0 (struct iwl_mvm*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_1__* VAR_10 ;

__attribute__((used)) static u32 FUNC_5(struct iwl_mvm *VAR_11,
     struct iwl_scale_tbl_info *VAR_12,
     int VAR_13, u8 VAR_14)
{
 u32 VAR_15 = 0;

 if (FUNC_2(VAR_12->lq_type)) {
  VAR_15 = VAR_10[VAR_13].plcp;
  if (VAR_13 >= VAR_0 && VAR_13 <= VAR_1)
   VAR_15 |= VAR_6;
 } else if (FUNC_1(VAR_12->lq_type)) {
  if (VAR_13 > VAR_2) {
   FUNC_0(VAR_11, "Invalid HT rate index %d\n", VAR_13);
   VAR_13 = VAR_2;
  }
  VAR_15 = VAR_8;

  if (FUNC_4(VAR_12->lq_type))
   VAR_15 |= VAR_10[VAR_13].plcp_siso;
  else if (FUNC_3(VAR_12->lq_type))
   VAR_15 |= VAR_10[VAR_13].plcp_mimo2;
  else
   VAR_15 |= VAR_10[VAR_13].plcp_mimo3;
 } else {
  FUNC_0(VAR_11, "Invalid tbl->lq_type %d\n", VAR_12->lq_type);
 }

 VAR_15 |= ((VAR_12->ant_type << VAR_5) &
           VAR_4);

 if (FUNC_1(VAR_12->lq_type)) {
  if (VAR_12->is_ht40)
   VAR_15 |= VAR_7;
  if (VAR_12->is_SGI)
   VAR_15 |= VAR_9;

  if (VAR_14) {
   VAR_15 |= VAR_3;
   if (FUNC_4(VAR_12->lq_type) && VAR_12->is_SGI) {
    VAR_15 &= ~VAR_9;
    FUNC_0(VAR_11, "GF was set with SGI:SISO\n");
   }
  }
 }
 return VAR_15;
}
