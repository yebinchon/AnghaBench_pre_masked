
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ gid_pn_data; scalar_t__ status_read_data; scalar_t__ status_read_req; scalar_t__ qtcb_pool; scalar_t__ scsi_abort; scalar_t__ scsi_req; scalar_t__ erp_req; } ;
struct zfcp_adapter {TYPE_1__ pool; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct zfcp_adapter *VAR_0)
{

 if (VAR_0->pool.erp_req)
  FUNC_0(VAR_0->pool.erp_req);
 if (VAR_0->pool.scsi_req)
  FUNC_0(VAR_0->pool.scsi_req);
 if (VAR_0->pool.scsi_abort)
  FUNC_0(VAR_0->pool.scsi_abort);
 if (VAR_0->pool.qtcb_pool)
  FUNC_0(VAR_0->pool.qtcb_pool);
 if (VAR_0->pool.status_read_req)
  FUNC_0(VAR_0->pool.status_read_req);
 if (VAR_0->pool.status_read_data)
  FUNC_0(VAR_0->pool.status_read_data);
 if (VAR_0->pool.gid_pn_data)
  FUNC_0(VAR_0->pool.gid_pn_data);
}
