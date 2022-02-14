
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm_lockops {int (* lm_unmount ) (struct gfs2_sbd*) ;} ;
struct TYPE_2__ {struct lm_lockops* ls_ops; } ;
struct gfs2_sbd {int sd_flags; TYPE_1__ sd_lockstruct; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct gfs2_sbd*) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct gfs2_sbd *VAR_1)
{
 const struct lm_lockops *VAR_2 = VAR_1->sd_lockstruct.ls_ops;
 if (FUNC_0(!FUNC_2(VAR_0, &VAR_1->sd_flags)) &&
     VAR_2->lm_unmount)
  VAR_2->lm_unmount(VAR_1);
}
