
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fce_enabled; } ;
struct qla_hw_data {int fce_mutex; TYPE_1__ flags; int fce_bufs; int fce_mb; int fce_dma; int fce; } ;
struct inode {TYPE_2__* i_private; } ;
struct file {int dummy; } ;
struct TYPE_6__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_2__*,int,char*,int) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_2__*,int ,int ,int ,int *) ;
 int FUNC_6 (struct inode*,struct file*) ;

__attribute__((used)) static int
FUNC_7(struct inode *VAR_1, struct file *VAR_2)
{
 scsi_qla_host_t *VAR_3 = VAR_1->i_private;
 struct qla_hw_data *VAR_4 = VAR_3->hw;
 int VAR_5;

 if (VAR_4->flags.fce_enabled)
  goto out;

 FUNC_2(&VAR_4->fce_mutex);


 VAR_4->flags.fce_enabled = 1;
 FUNC_1(VAR_4->fce, 0, FUNC_0(VAR_4->fce_bufs));
 VAR_5 = FUNC_5(VAR_3, VAR_4->fce_dma, VAR_4->fce_bufs,
     VAR_4->fce_mb, &VAR_4->fce_bufs);
 if (VAR_5) {
  FUNC_4(VAR_0, VAR_3, 0x700d,
      "DebugFS: Unable to reinitialize FCE (%d).\n", VAR_5);
  VAR_4->flags.fce_enabled = 0;
 }

 FUNC_3(&VAR_4->fce_mutex);
out:
 return FUNC_6(VAR_1, VAR_2);
}
