
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_fsf_req {int dummy; } ;
struct TYPE_3__ {void* gid_pn_data; void* status_read_data; void* qtcb_pool; void* status_read_req; void* scsi_abort; void* scsi_req; void* gid_pn_req; void* erp_req; } ;
struct zfcp_adapter {TYPE_1__ pool; } ;
struct TYPE_4__ {int gid_pn_cache; int sr_buffer_cache; int qtcb_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int) ;
 void* FUNC_1 (int,int ) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static int FUNC_2(struct zfcp_adapter *VAR_3)
{

 VAR_3->pool.erp_req =
  FUNC_0(1, sizeof(struct zfcp_fsf_req));
 if (!VAR_3->pool.erp_req)
  return -VAR_0;

 VAR_3->pool.gid_pn_req =
  FUNC_0(1, sizeof(struct zfcp_fsf_req));
 if (!VAR_3->pool.gid_pn_req)
  return -VAR_0;

 VAR_3->pool.scsi_req =
  FUNC_0(1, sizeof(struct zfcp_fsf_req));
 if (!VAR_3->pool.scsi_req)
  return -VAR_0;

 VAR_3->pool.scsi_abort =
  FUNC_0(1, sizeof(struct zfcp_fsf_req));
 if (!VAR_3->pool.scsi_abort)
  return -VAR_0;

 VAR_3->pool.status_read_req =
  FUNC_0(VAR_1,
         sizeof(struct zfcp_fsf_req));
 if (!VAR_3->pool.status_read_req)
  return -VAR_0;

 VAR_3->pool.qtcb_pool =
  FUNC_1(4, VAR_2.qtcb_cache);
 if (!VAR_3->pool.qtcb_pool)
  return -VAR_0;

 VAR_3->pool.status_read_data =
  FUNC_1(VAR_1,
      VAR_2.sr_buffer_cache);
 if (!VAR_3->pool.status_read_data)
  return -VAR_0;

 VAR_3->pool.gid_pn_data =
  FUNC_1(1, VAR_2.gid_pn_cache);
 if (!VAR_3->pool.gid_pn_data)
  return -VAR_0;

 return 0;
}
