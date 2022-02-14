
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqueue_workloop_params {int kqwlp_version; int kqwlp_id; } ;
struct kqueue_workloop_ctl_args {int sz; int options; int cmd; int addr; } ;
typedef int proc_t ;
typedef int params ;


 int VAR_0 ;
 size_t FUNC_0 (int,int) ;
 int FUNC_1 (int ,struct kqueue_workloop_params*,size_t) ;
 int FUNC_2 (int ,int ,int ,struct kqueue_workloop_params*,int*) ;

int
FUNC_3(proc_t VAR_1, struct kqueue_workloop_ctl_args *VAR_2, int *VAR_3)
{
 struct kqueue_workloop_params VAR_4 = {
  .kqwlp_id = 0,
 };
 if (VAR_2->sz < sizeof(VAR_4.kqwlp_version)) {
  return VAR_0;
 }

 size_t VAR_5 = FUNC_0(sizeof(VAR_4), VAR_2->sz);
 int VAR_6 = FUNC_1(VAR_2->addr, &VAR_4, VAR_5);
 if (VAR_6) {
  return VAR_6;
 }

 if (VAR_4.kqwlp_version != (int)VAR_2->sz) {
  return VAR_0;
 }

 return FUNC_2(VAR_1, VAR_2->cmd, VAR_2->options, &VAR_4,
   VAR_3);
}
