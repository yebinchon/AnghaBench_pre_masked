
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iscsi_endpoint {int dummy; } ;
struct TYPE_6__ {int cxns_per_ctrl; } ;
struct beiscsi_hba {int avlbl_cids; TYPE_3__ params; TYPE_2__* phwi_ctrlr; int * cid_array; int * ep_array; void* conn_table; } ;
struct beiscsi_conn {int dummy; } ;
struct TYPE_5__ {TYPE_1__* wrb_context; } ;
struct TYPE_4__ {int cid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int ,char*) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct beiscsi_hba *VAR_4)
{
 int VAR_5;

 VAR_4->cid_array = FUNC_2(sizeof(void *) * VAR_4->params.cxns_per_ctrl,
      VAR_2);
 if (!VAR_4->cid_array) {
  FUNC_0(VAR_4, VAR_3, VAR_0,
       "BM_%d : Failed to allocate memory in "
       "hba_setup_cid_tbls\n");
  return -VAR_1;
 }
 VAR_4->ep_array = FUNC_2(sizeof(struct iscsi_endpoint *) *
     VAR_4->params.cxns_per_ctrl, VAR_2);
 if (!VAR_4->ep_array) {
  FUNC_0(VAR_4, VAR_3, VAR_0,
       "BM_%d : Failed to allocate memory in "
       "hba_setup_cid_tbls\n");
  FUNC_1(VAR_4->cid_array);
  VAR_4->cid_array = ((void*)0);
  return -VAR_1;
 }

 VAR_4->conn_table = FUNC_2(sizeof(struct beiscsi_conn *) *
       VAR_4->params.cxns_per_ctrl, VAR_2);
 if (!VAR_4->conn_table) {
  FUNC_0(VAR_4, VAR_3, VAR_0,
       "BM_%d : Failed to allocate memory in"
       "hba_setup_cid_tbls\n");

  FUNC_1(VAR_4->cid_array);
  FUNC_1(VAR_4->ep_array);
  VAR_4->cid_array = ((void*)0);
  VAR_4->ep_array = ((void*)0);
  return -VAR_1;
 }

 for (VAR_5 = 0; VAR_5 < VAR_4->params.cxns_per_ctrl; VAR_5++)
  VAR_4->cid_array[VAR_5] = VAR_4->phwi_ctrlr->wrb_context[VAR_5].cid;

 VAR_4->avlbl_cids = VAR_4->params.cxns_per_ctrl;
 return 0;
}
