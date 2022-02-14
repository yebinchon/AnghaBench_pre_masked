
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int srb_t ;
struct TYPE_6__ {TYPE_1__* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_5__ {int srb_mempool; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static inline void
FUNC_2(scsi_qla_host_t *VAR_0, srb_t *VAR_1)
{
 FUNC_1(VAR_1, VAR_0->hw->srb_mempool);
 FUNC_0(VAR_0);
}
