
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {unsigned long buf_size; } ;
typedef TYPE_1__ pfm_default_smpl_arg_t ;



__attribute__((used)) static int
FUNC_0(struct task_struct *VAR_0, unsigned int VAR_1, int VAR_2, void *VAR_3, unsigned long *VAR_4)
{
 pfm_default_smpl_arg_t *VAR_5 = (pfm_default_smpl_arg_t *)VAR_3;




 *VAR_4 = VAR_5->buf_size;

 return 0;
}
