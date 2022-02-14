
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
struct qla_hw_data {TYPE_3__* pdev; int chip_revision; } ;
struct TYPE_9__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;
struct TYPE_10__ {int revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;
 int FUNC_5 (TYPE_3__*,int) ;

int
FUNC_6(scsi_qla_host_t *VAR_6)
{
 uint16_t VAR_7;
 struct qla_hw_data *VAR_8 = VAR_6->hw;

 FUNC_2(VAR_8->pdev);
 FUNC_3(VAR_8->pdev);

 FUNC_1(VAR_8->pdev, VAR_1, &VAR_7);
 VAR_7 |= (VAR_3 | VAR_4);
 VAR_7 &= ~VAR_2;
 FUNC_4(VAR_8->pdev, VAR_1, VAR_7);


 if (FUNC_0(VAR_8->pdev, VAR_0))
  FUNC_5(VAR_8->pdev, 2048);

 VAR_8->chip_revision = VAR_8->pdev->revision;

 return VAR_5;
}
