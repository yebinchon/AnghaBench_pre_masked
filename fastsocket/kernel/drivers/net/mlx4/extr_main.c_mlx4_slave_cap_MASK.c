
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u32 ;
struct mlx4_init_hca_param {int global_caps; int log_rd_per_qp; int uar_page_sz; int pf_context_behaviour; int num_ports; int dev_cap_enabled; int qp1_proxy_qpn; int qp1_tunnel_qpn; int qp0_proxy_qpn; int qp0_tunnel_qpn; int mtt_quota; int mpt_quota; int reserved_eq; int max_eq; int cq_quota; int srq_quota; int qp_quota; int hca_core_clock; int log_mc_entry_sz; } ;
struct mlx4_func_cap {int global_caps; int log_rd_per_qp; int uar_page_sz; int pf_context_behaviour; int num_ports; int dev_cap_enabled; int qp1_proxy_qpn; int qp1_tunnel_qpn; int qp0_proxy_qpn; int qp0_tunnel_qpn; int mtt_quota; int mpt_quota; int reserved_eq; int max_eq; int cq_quota; int srq_quota; int qp_quota; int hca_core_clock; int log_mc_entry_sz; } ;
struct mlx4_dev_cap {int global_caps; int log_rd_per_qp; int uar_page_sz; int pf_context_behaviour; int num_ports; int dev_cap_enabled; int qp1_proxy_qpn; int qp1_tunnel_qpn; int qp0_proxy_qpn; int qp0_tunnel_qpn; int mtt_quota; int mpt_quota; int reserved_eq; int max_eq; int cq_quota; int srq_quota; int qp_quota; int hca_core_clock; int log_mc_entry_sz; } ;
struct TYPE_2__ {int max_qp_dest_rdma; int page_size_cap; int uar_page_size; int num_ports; int num_uars; int reserved_uars; int eqe_size; int eqe_factor; int cqe_size; int * qp1_proxy; int * qp1_tunnel; int * qp0_proxy; int * qp0_tunnel; int flags2; int userspace_caps; int * pkey_table_len; int * gid_table_len; int * port_type; int * port_mask; scalar_t__ num_amgms; scalar_t__ num_mgms; int num_pds; int num_mtts; int num_mpts; int reserved_eqs; int num_eqs; int num_cqs; int num_srqs; int num_qps; int hca_core_clock; } ;
struct mlx4_dev {TYPE_1__ caps; int pdev; } ;
typedef int hca_param ;
typedef int func_cap ;
typedef int dev_cap ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long long VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned long long VAR_11 ;
 int VAR_12 ;
 void* FUNC_0 (int,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx4_init_hca_param*,int ,int) ;
 int FUNC_3 (struct mlx4_dev*,unsigned long long,struct mlx4_init_hca_param*) ;
 int FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*,struct mlx4_init_hca_param*) ;
 int FUNC_6 (struct mlx4_dev*,struct mlx4_init_hca_param*) ;
 int FUNC_7 (struct mlx4_dev*,char*,...) ;
 scalar_t__ FUNC_8 (struct mlx4_dev*,int,int *,int *) ;
 int VAR_13 ;
 int FUNC_9 (struct mlx4_dev*,char*,...) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (struct mlx4_dev*,struct mlx4_init_hca_param*,struct mlx4_init_hca_param*) ;

__attribute__((used)) static int FUNC_12(struct mlx4_dev *VAR_14)
{
 int VAR_15;
 u32 VAR_16;
 struct mlx4_dev_cap VAR_17;
 struct mlx4_func_cap VAR_18;
 struct mlx4_init_hca_param VAR_19;
 int VAR_20;

 FUNC_2(&VAR_19, 0, sizeof(VAR_19));
 VAR_15 = FUNC_5(VAR_14, &VAR_19);
 if (VAR_15) {
  FUNC_7(VAR_14, "QUERY_HCA command failed, aborting.\n");
  return VAR_15;
 }


 if ((VAR_19.global_caps | VAR_4) !=
     VAR_4) {
  FUNC_7(VAR_14, "Unknown hca global capabilities\n");
  return -VAR_2;
 }

 VAR_13 = VAR_19.log_mc_entry_sz;

 VAR_14->caps.hca_core_clock = VAR_19.hca_core_clock;

 FUNC_2(&VAR_17, 0, sizeof(VAR_17));
 VAR_14->caps.max_qp_dest_rdma = 1 << VAR_19.log_rd_per_qp;
 VAR_15 = FUNC_6(VAR_14, &VAR_17);
 if (VAR_15) {
  FUNC_7(VAR_14, "QUERY_DEV_CAP command failed, aborting.\n");
  return VAR_15;
 }

 VAR_15 = FUNC_4(VAR_14);
 if (VAR_15)
  FUNC_7(VAR_14, "QUERY_FW command failed: could not get FW version.\n");

 VAR_16 = ~VAR_14->caps.page_size_cap + 1;
 FUNC_9(VAR_14, "HCA minimum page size:%d\n", VAR_16);
 if (VAR_16 > VAR_11) {
  FUNC_7(VAR_14, "HCA minimum page size of %d bigger than "
    "kernel PAGE_SIZE of %ld, aborting.\n",
    VAR_16, VAR_11);
  return -VAR_0;
 }


 VAR_14->caps.uar_page_size = 1 << (VAR_19.uar_page_sz + 12);


 if (VAR_14->caps.uar_page_size != VAR_11) {
  FUNC_7(VAR_14, "UAR size:%d != kernel PAGE_SIZE of %ld\n",
    VAR_14->caps.uar_page_size, VAR_11);
  return -VAR_0;
 }

 FUNC_2(&VAR_18, 0, sizeof(VAR_18));
 VAR_15 = FUNC_3(VAR_14, 0, &VAR_18);
 if (VAR_15) {
  FUNC_7(VAR_14, "QUERY_FUNC_CAP general command failed, aborting (%d).\n",
     VAR_15);
  return VAR_15;
 }

 if ((VAR_18.pf_context_behaviour | VAR_12) !=
     VAR_12) {
  FUNC_7(VAR_14, "Unknown pf context behaviour\n");
  return -VAR_2;
 }

 VAR_14->caps.num_ports = VAR_18.num_ports;
 VAR_14->caps.num_qps = VAR_18.qp_quota;
 VAR_14->caps.num_srqs = VAR_18.srq_quota;
 VAR_14->caps.num_cqs = VAR_18.cq_quota;
 VAR_14->caps.num_eqs = VAR_18.max_eq;
 VAR_14->caps.reserved_eqs = VAR_18.reserved_eq;
 VAR_14->caps.num_mpts = VAR_18.mpt_quota;
 VAR_14->caps.num_mtts = VAR_18.mtt_quota;
 VAR_14->caps.num_pds = VAR_9;
 VAR_14->caps.num_mgms = 0;
 VAR_14->caps.num_amgms = 0;

 if (VAR_14->caps.num_ports > VAR_8) {
  FUNC_7(VAR_14, "HCA has %d ports, but we only support %d, "
    "aborting.\n", VAR_14->caps.num_ports, VAR_8);
  return -VAR_0;
 }

 VAR_14->caps.qp0_tunnel = FUNC_0(VAR_14->caps.num_ports, sizeof (u32), VAR_3);
 VAR_14->caps.qp0_proxy = FUNC_0(VAR_14->caps.num_ports, sizeof (u32), VAR_3);
 VAR_14->caps.qp1_tunnel = FUNC_0(VAR_14->caps.num_ports, sizeof (u32), VAR_3);
 VAR_14->caps.qp1_proxy = FUNC_0(VAR_14->caps.num_ports, sizeof (u32), VAR_3);

 if (!VAR_14->caps.qp0_tunnel || !VAR_14->caps.qp0_proxy ||
     !VAR_14->caps.qp1_tunnel || !VAR_14->caps.qp1_proxy) {
  VAR_15 = -VAR_1;
  goto err_mem;
 }

 for (VAR_20 = 1; VAR_20 <= VAR_14->caps.num_ports; ++VAR_20) {
  VAR_15 = FUNC_3(VAR_14, (u32) VAR_20, &VAR_18);
  if (VAR_15) {
   FUNC_7(VAR_14, "QUERY_FUNC_CAP port command failed for"
     " port %d, aborting (%d).\n", VAR_20, VAR_15);
   goto err_mem;
  }
  VAR_14->caps.qp0_tunnel[VAR_20 - 1] = VAR_18.qp0_tunnel_qpn;
  VAR_14->caps.qp0_proxy[VAR_20 - 1] = VAR_18.qp0_proxy_qpn;
  VAR_14->caps.qp1_tunnel[VAR_20 - 1] = VAR_18.qp1_tunnel_qpn;
  VAR_14->caps.qp1_proxy[VAR_20 - 1] = VAR_18.qp1_proxy_qpn;
  VAR_14->caps.port_mask[VAR_20] = VAR_14->caps.port_type[VAR_20];
  if (FUNC_8(VAR_14, VAR_20,
          &VAR_14->caps.gid_table_len[VAR_20],
          &VAR_14->caps.pkey_table_len[VAR_20]))
   goto err_mem;
 }

 if (VAR_14->caps.uar_page_size * (VAR_14->caps.num_uars -
           VAR_14->caps.reserved_uars) >
           FUNC_10(VAR_14->pdev, 2)) {
  FUNC_7(VAR_14, "HCA reported UAR region size of 0x%x bigger than "
    "PCI resource 2 size of 0x%llx, aborting.\n",
    VAR_14->caps.uar_page_size * VAR_14->caps.num_uars,
    (unsigned long long) FUNC_10(VAR_14->pdev, 2));
  goto err_mem;
 }

 if (VAR_19.dev_cap_enabled & VAR_6) {
  VAR_14->caps.eqe_size = 64;
  VAR_14->caps.eqe_factor = 1;
 } else {
  VAR_14->caps.eqe_size = 32;
  VAR_14->caps.eqe_factor = 0;
 }

 if (VAR_19.dev_cap_enabled & VAR_5) {
  VAR_14->caps.cqe_size = 64;
  VAR_14->caps.userspace_caps |= VAR_10;
 } else {
  VAR_14->caps.cqe_size = 32;
 }

 VAR_14->caps.flags2 &= ~VAR_7;
 FUNC_9(VAR_14, "Timestamping is not supported in slave mode.\n");

 FUNC_11(VAR_14, &VAR_17, &VAR_19);

 return 0;

err_mem:
 FUNC_1(VAR_14->caps.qp0_tunnel);
 FUNC_1(VAR_14->caps.qp0_proxy);
 FUNC_1(VAR_14->caps.qp1_tunnel);
 FUNC_1(VAR_14->caps.qp1_proxy);
 VAR_14->caps.qp0_tunnel = VAR_14->caps.qp0_proxy =
  VAR_14->caps.qp1_tunnel = VAR_14->caps.qp1_proxy = ((void*)0);

 return VAR_15;
}
