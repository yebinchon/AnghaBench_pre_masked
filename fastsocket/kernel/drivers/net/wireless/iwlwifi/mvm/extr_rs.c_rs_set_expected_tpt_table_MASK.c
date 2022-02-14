
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_scale_tbl_info {int * expected_tpt; scalar_t__ is_SGI; int is_ht40; int lq_type; } ;
struct iwl_lq_sta {scalar_t__ is_agg; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 void* VAR_1 ;
 int ** VAR_2 ;
 int ** VAR_3 ;
 int ** VAR_4 ;
 int ** VAR_5 ;
 int ** VAR_6 ;
 int ** VAR_7 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct iwl_lq_sta *VAR_8,
          struct iwl_scale_tbl_info *VAR_9)
{

 s32 (*VAR_10)[VAR_0];


 if (FUNC_0(!FUNC_2(VAR_9->lq_type) && !FUNC_1(VAR_9->lq_type))) {
  VAR_9->expected_tpt = VAR_1;
  return;
 }


 if (FUNC_2(VAR_9->lq_type)) {
  VAR_9->expected_tpt = VAR_1;
  return;
 }




 if (FUNC_5(VAR_9->lq_type) && !VAR_9->is_ht40)
  VAR_10 = VAR_6;
 else if (FUNC_5(VAR_9->lq_type))
  VAR_10 = VAR_7;
 else if (FUNC_3(VAR_9->lq_type) && !VAR_9->is_ht40)
  VAR_10 = VAR_2;
 else if (FUNC_3(VAR_9->lq_type))
  VAR_10 = VAR_3;
 else if (FUNC_4(VAR_9->lq_type) && !VAR_9->is_ht40)
  VAR_10 = VAR_4;
 else
  VAR_10 = VAR_5;

 if (!VAR_9->is_SGI && !VAR_8->is_agg)
  VAR_9->expected_tpt = VAR_10[0];
 else if (VAR_9->is_SGI && !VAR_8->is_agg)
  VAR_9->expected_tpt = VAR_10[1];
 else if (!VAR_9->is_SGI && VAR_8->is_agg)
  VAR_9->expected_tpt = VAR_10[2];
 else
  VAR_9->expected_tpt = VAR_10[3];
}
