
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct gfs2_sbd {struct task_struct* sd_logd_process; struct task_struct* sd_quotad_process; int sd_log_flush_time; } ;


 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct gfs2_sbd*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct task_struct* FUNC_2 (int ,struct gfs2_sbd*,char*) ;
 int FUNC_3 (struct task_struct*) ;

__attribute__((used)) static int FUNC_4(struct gfs2_sbd *VAR_3, int VAR_4)
{
 struct task_struct *VAR_5;
 int VAR_6 = 0;

 if (VAR_4)
  goto fail_quotad;

 VAR_3->sd_log_flush_time = VAR_2;

 VAR_5 = FUNC_2(VAR_0, VAR_3, "gfs2_logd");
 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6) {
  FUNC_1(VAR_3, "can't start logd thread: %d\n", VAR_6);
  return VAR_6;
 }
 VAR_3->sd_logd_process = VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_3, "gfs2_quotad");
 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6) {
  FUNC_1(VAR_3, "can't start quotad thread: %d\n", VAR_6);
  goto fail;
 }
 VAR_3->sd_quotad_process = VAR_5;

 return 0;


fail_quotad:
 FUNC_3(VAR_3->sd_quotad_process);
fail:
 FUNC_3(VAR_3->sd_logd_process);
 return VAR_6;
}
