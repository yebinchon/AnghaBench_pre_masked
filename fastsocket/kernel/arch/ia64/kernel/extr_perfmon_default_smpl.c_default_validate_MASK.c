
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {scalar_t__ buf_size; } ;
typedef TYPE_1__ pfm_default_smpl_arg_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct task_struct*) ;

__attribute__((used)) static int
FUNC_2(struct task_struct *VAR_2, unsigned int VAR_3, int VAR_4, void *VAR_5)
{
 pfm_default_smpl_arg_t *VAR_6 = (pfm_default_smpl_arg_t*)VAR_5;
 int VAR_7 = 0;

 if (VAR_5 == ((void*)0)) {
  FUNC_0(("[%d] no argument passed\n", FUNC_1(VAR_2)));
  return -VAR_0;
 }

 FUNC_0(("[%d] validate flags=0x%x CPU%d\n", FUNC_1(VAR_2), VAR_3, VAR_4));




 if (VAR_6->buf_size < VAR_1) return -VAR_0;

 FUNC_0(("buf_size=%lu\n", VAR_6->buf_size));

 return VAR_7;
}
