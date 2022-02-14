
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
struct hipz_query_port {int pkey_entries; int pkey_tbl_len; int sm_lid; int sm_sl; int lmc; int lid; } ;
struct ehca_sma_attr {int pkeys; int pkey_tbl_len; int sm_lid; int sm_sl; int lmc; int lid; } ;
struct ehca_shca {int ib_device; int ipz_hca_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct hipz_query_port* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct hipz_query_port*) ;
 scalar_t__ FUNC_3 (int ,int ,struct hipz_query_port*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct ehca_sma_attr*,int ,int) ;

int FUNC_6(struct ehca_shca *VAR_4,
   u8 VAR_5, struct ehca_sma_attr *VAR_6)
{
 int VAR_7 = 0;
 u64 VAR_8;
 struct hipz_query_port *VAR_9;

 VAR_9 = FUNC_0(VAR_2);
 if (!VAR_9) {
  FUNC_1(&VAR_4->ib_device, "Can't allocate rblock memory.");
  return -VAR_1;
 }

 VAR_8 = FUNC_3(VAR_4->ipz_hca_handle, VAR_5, VAR_9);
 if (VAR_8 != VAR_3) {
  FUNC_1(&VAR_4->ib_device, "Can't query port properties");
  VAR_7 = -VAR_0;
  goto query_sma_attr1;
 }

 FUNC_5(VAR_6, 0, sizeof(struct ehca_sma_attr));

 VAR_6->lid = VAR_9->lid;
 VAR_6->lmc = VAR_9->lmc;
 VAR_6->sm_sl = VAR_9->sm_sl;
 VAR_6->sm_lid = VAR_9->sm_lid;

 VAR_6->pkey_tbl_len = VAR_9->pkey_tbl_len;
 FUNC_4(VAR_6->pkeys, VAR_9->pkey_entries, sizeof(VAR_6->pkeys));

query_sma_attr1:
 FUNC_2(VAR_9);

 return VAR_7;
}
