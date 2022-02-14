
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ fce_enabled; } ;
struct qla_hw_data {int fce_mutex; TYPE_1__ flags; int fce_rd; int fce_wr; } ;
struct inode {TYPE_2__* i_private; } ;
struct file {int dummy; } ;
struct TYPE_7__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_2__*,int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_2__*,int *,int *) ;
 int FUNC_4 (struct file*,int ,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_5(struct inode *VAR_2, struct file *VAR_3)
{
 scsi_qla_host_t *VAR_4 = VAR_2->i_private;
 struct qla_hw_data *VAR_5 = VAR_4->hw;
 int VAR_6;

 if (!VAR_5->flags.fce_enabled)
  goto out;

 FUNC_0(&VAR_5->fce_mutex);


 VAR_6 = FUNC_3(VAR_4, &VAR_5->fce_wr, &VAR_5->fce_rd);
 if (VAR_6)
  FUNC_2(VAR_0, VAR_4, 0x705c,
      "DebugFS: Unable to disable FCE (%d).\n", VAR_6);

 VAR_5->flags.fce_enabled = 0;

 FUNC_1(&VAR_5->fce_mutex);
out:
 return FUNC_4(VAR_3, VAR_1, VAR_4);
}
