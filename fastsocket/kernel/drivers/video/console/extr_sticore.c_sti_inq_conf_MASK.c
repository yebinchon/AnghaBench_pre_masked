
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ext_ptr; } ;
struct sti_struct {int lock; int glob_cfg; TYPE_1__ outptr; int inq_conf; int outptr_ext; } ;
struct sti_conf_inptr {int member_0; } ;
typedef int s32 ;


 int FUNC_0 (int ,int *,struct sti_conf_inptr*,TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct sti_struct *VAR_1)
{
 struct sti_conf_inptr VAR_2 = { 0, };
 unsigned long VAR_3;
 s32 VAR_4;

 VAR_1->outptr.ext_ptr = FUNC_1(&VAR_1->outptr_ext);

 do {
  FUNC_2(&VAR_1->lock, VAR_3);
  VAR_4 = FUNC_0(VAR_1->inq_conf, &VAR_0,
   &VAR_2, &VAR_1->outptr, VAR_1->glob_cfg);
  FUNC_3(&VAR_1->lock, VAR_3);
 } while (VAR_4 == 1);
}
