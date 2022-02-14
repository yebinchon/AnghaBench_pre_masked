
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct qla_hw_data {int srb_mempool; } ;
struct TYPE_9__ {int iocbs; int * fcport; } ;
typedef TYPE_1__ srb_t ;
struct TYPE_10__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
typedef int gfp_t ;
typedef int fc_port_t ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_1__* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static inline srb_t *
FUNC_5(scsi_qla_host_t *VAR_0, fc_port_t *VAR_1, gfp_t VAR_2)
{
 srb_t *VAR_3 = ((void*)0);
 struct qla_hw_data *VAR_4 = VAR_0->hw;
 uint8_t VAR_5;

 FUNC_0(VAR_0, VAR_5);
 if (FUNC_4(VAR_5))
  return ((void*)0);

 VAR_3 = FUNC_2(VAR_4->srb_mempool, VAR_2);
 if (!VAR_3)
  goto done;

 FUNC_3(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->fcport = VAR_1;
 VAR_3->iocbs = 1;
done:
 if (!VAR_3)
  FUNC_1(VAR_0);
 return VAR_3;
}
