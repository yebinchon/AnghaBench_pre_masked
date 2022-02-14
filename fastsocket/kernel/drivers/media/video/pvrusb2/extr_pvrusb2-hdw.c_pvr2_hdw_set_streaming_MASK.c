
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int state_pipeline_req; int master_state; int big_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct pvr2_hdw*) ;
 int FUNC_3 (struct pvr2_hdw*) ;
 int FUNC_4 (struct pvr2_hdw*,int) ;
 int FUNC_5 (int ,char*,char*) ;

int FUNC_6(struct pvr2_hdw *VAR_4,int VAR_5)
{
 int VAR_6,VAR_7;
 FUNC_1(VAR_4->big_lock); do {
  FUNC_3(VAR_4);
  if ((!VAR_5) != !(VAR_4->state_pipeline_req)) {
   VAR_4->state_pipeline_req = VAR_5 != 0;
   FUNC_5(VAR_3,
       "/*--TRACE_STREAM--*/ %s",
       VAR_5 ? "enable" : "disable");
  }
  FUNC_2(VAR_4);
 } while (0); FUNC_0(VAR_4->big_lock);
 if ((VAR_6 = FUNC_4(VAR_4,0)) < 0) return VAR_6;
 if (VAR_5) {
  while ((VAR_7 = VAR_4->master_state) != VAR_2) {
   if (VAR_7 != VAR_1) return -VAR_0;
   if ((VAR_6 = FUNC_4(VAR_4,VAR_7)) < 0) return VAR_6;
  }
 }
 return 0;
}
