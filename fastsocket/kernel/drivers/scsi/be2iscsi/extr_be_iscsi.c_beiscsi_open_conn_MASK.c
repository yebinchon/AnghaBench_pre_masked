
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_connect_and_offload_out {int connection_handle; } ;
struct tcp_connect_and_offload_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct iscsi_endpoint {struct beiscsi_endpoint* dd_data; } ;
struct TYPE_2__ {int pdev; } ;
struct beiscsi_hba {TYPE_1__ ctrl; struct iscsi_endpoint** ep_array; } ;
struct beiscsi_endpoint {int ep_cid; int cid_vld; int fw_handle; struct beiscsi_hba* phba; } ;
struct be_dma_mem {int size; int dma; int * va; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct beiscsi_endpoint*) ;
 int FUNC_2 (struct beiscsi_hba*) ;
 int FUNC_3 (struct beiscsi_hba*,int ,int,char*,...) ;
 int FUNC_4 (struct beiscsi_hba*,unsigned int,int *,int *) ;
 int FUNC_5 (int *,int ,int) ;
 unsigned int FUNC_6 (struct beiscsi_hba*,struct sockaddr*,struct beiscsi_endpoint*,struct be_dma_mem*) ;
 int * FUNC_7 (int ,int,int *) ;
 int FUNC_8 (int ,int,int *,int ) ;

__attribute__((used)) static int FUNC_9(struct iscsi_endpoint *VAR_7,
        struct sockaddr *VAR_8,
        struct sockaddr *VAR_9, int VAR_10)
{
 struct beiscsi_endpoint *VAR_11 = VAR_7->dd_data;
 struct beiscsi_hba *VAR_12 = VAR_11->phba;
 struct tcp_connect_and_offload_out *VAR_13;
 struct be_dma_mem VAR_14;
 unsigned int VAR_15;
 int VAR_16 = -VAR_4;

 FUNC_3(VAR_12, VAR_6, VAR_0,
      "BS_%d : In beiscsi_open_conn\n");

 VAR_11->ep_cid = FUNC_2(VAR_12);
 if (VAR_11->ep_cid == 0xFFFF) {
  FUNC_3(VAR_12, VAR_5, VAR_0,
       "BS_%d : No free cid available\n");
  return VAR_16;
 }

 FUNC_3(VAR_12, VAR_6, VAR_0,
      "BS_%d : In beiscsi_open_conn, ep_cid=%d\n",
      VAR_11->ep_cid);

 VAR_12->ep_array[FUNC_0
         (VAR_11->ep_cid)] = VAR_7;

 VAR_11->cid_vld = 0;
 VAR_14.va = FUNC_7(VAR_12->ctrl.pdev,
    sizeof(struct tcp_connect_and_offload_in),
    &VAR_14.dma);
 if (VAR_14.va == ((void*)0)) {

  FUNC_3(VAR_12, VAR_5, VAR_0,
       "BS_%d : Failed to allocate memory for"
       " mgmt_open_connection\n");

  FUNC_1(VAR_11);
  return -VAR_4;
 }
 VAR_14.size = sizeof(struct tcp_connect_and_offload_in);
 FUNC_5(VAR_14.va, 0, VAR_14.size);
 VAR_15 = FUNC_6(VAR_12, VAR_9, VAR_11, &VAR_14);
 if (VAR_15 <= 0) {
  FUNC_3(VAR_12, VAR_5, VAR_0,
       "BS_%d : mgmt_open_connection Failed for cid=%d\n",
       VAR_11->ep_cid);

  FUNC_8(VAR_12->ctrl.pdev, VAR_14.size,
        VAR_14.va, VAR_14.dma);
  FUNC_1(VAR_11);
  return -VAR_2;
 }

 VAR_16 = FUNC_4(VAR_12, VAR_15, ((void*)0), VAR_14.va);
 if (VAR_16) {
  FUNC_3(VAR_12, VAR_5,
       VAR_0 | VAR_1,
       "BS_%d : mgmt_open_connection Failed");

  FUNC_8(VAR_12->ctrl.pdev, VAR_14.size,
       VAR_14.va, VAR_14.dma);
  FUNC_1(VAR_11);
  return -VAR_3;
 }

 VAR_13 = (struct tcp_connect_and_offload_out *)VAR_14.va;
 VAR_11 = VAR_7->dd_data;
 VAR_11->fw_handle = VAR_13->connection_handle;
 VAR_11->cid_vld = 1;
 FUNC_3(VAR_12, VAR_6, VAR_0,
      "BS_%d : mgmt_open_connection Success\n");

 FUNC_8(VAR_12->ctrl.pdev, VAR_14.size,
       VAR_14.va, VAR_14.dma);
 return 0;
}
