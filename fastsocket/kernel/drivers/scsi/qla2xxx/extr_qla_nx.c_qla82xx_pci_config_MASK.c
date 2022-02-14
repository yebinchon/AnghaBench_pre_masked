
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct qla_hw_data {int chip_revision; TYPE_4__* pdev; } ;
struct TYPE_6__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;
struct TYPE_7__ {int revision; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,TYPE_1__*,int,char*,int ) ;
 int VAR_0 ;

int
FUNC_3(scsi_qla_host_t *VAR_1)
{
 struct qla_hw_data *VAR_2 = VAR_1->hw;
 int VAR_3;

 FUNC_0(VAR_2->pdev);
 VAR_3 = FUNC_1(VAR_2->pdev);
 VAR_2->chip_revision = VAR_2->pdev->revision;
 FUNC_2(VAR_0, VAR_1, 0x0043,
     "Chip revision:%d.\n",
     VAR_2->chip_revision);
 return 0;
}
