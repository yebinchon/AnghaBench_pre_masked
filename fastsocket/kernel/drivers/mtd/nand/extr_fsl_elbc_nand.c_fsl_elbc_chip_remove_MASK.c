
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct fsl_elbc_mtd* name; } ;
struct fsl_elbc_mtd {size_t bank; scalar_t__ vbase; TYPE_1__ mtd; struct fsl_elbc_ctrl* ctrl; } ;
struct fsl_elbc_ctrl {int ** chips; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct fsl_elbc_mtd*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct fsl_elbc_mtd *VAR_0)
{
 struct fsl_elbc_ctrl *VAR_1 = VAR_0->ctrl;

 FUNC_2(&VAR_0->mtd);

 FUNC_1(VAR_0->mtd.name);

 if (VAR_0->vbase)
  FUNC_0(VAR_0->vbase);

 VAR_1->chips[VAR_0->bank] = ((void*)0);
 FUNC_1(VAR_0);

 return 0;
}
