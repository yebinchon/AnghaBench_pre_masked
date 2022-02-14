
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int state_pathway_ok; scalar_t__ input_val; int state_pipeline_idle; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pvr2_hdw*,int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(struct pvr2_hdw *VAR_1)
{
 if (VAR_1->state_pathway_ok) {

  return 0;
 }
 if (!VAR_1->state_pipeline_idle) {

  return 0;
 }
 FUNC_0(VAR_1,VAR_1->input_val == VAR_0);
 VAR_1->state_pathway_ok = !0;
 FUNC_1("state_pathway_ok",VAR_1->state_pathway_ok);
 return !0;
}
