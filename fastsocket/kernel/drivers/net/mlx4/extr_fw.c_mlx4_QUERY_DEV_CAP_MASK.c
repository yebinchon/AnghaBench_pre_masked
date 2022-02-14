
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct mlx4_dev_cap {int reserved_qps; int max_qps; int reserved_srqs; int max_srqs; int max_cq_sz; int reserved_cqs; int max_cqs; int max_mpts; int reserved_eqs; int max_eqs; int reserved_mtts; int max_mrw_sz; int reserved_mrws; int max_mtt_seg; int max_requester_per_qp; int max_responder_per_qp; int max_gso_sz; int max_rss_tbl_sz; int max_rdma_global; int local_ca_ack_delay; int num_ports; int max_msg_sz; int fs_log_max_ucast_qp_range_size; int fs_max_num_qp_per_entry; int stat_rate_support; int flags; int reserved_uars; int uar_size; int min_page_sz; int bf_reg_size; int bf_regs_per_page; int max_sq_sg; int max_sq_desc_sz; int max_qp_per_mcg; int reserved_mgms; int max_mcgs; int reserved_pds; int max_pds; int reserved_xrcds; int max_xrcds; int rdmarc_entry_sz; int qpc_entry_sz; int aux_entry_sz; int altc_entry_sz; int eqc_entry_sz; int cqc_entry_sz; int srq_entry_sz; int cmpt_entry_sz; int mtt_entry_sz; int dmpt_entry_sz; int max_srq_sz; int max_qp_sz; int resize_srq; int max_rq_sg; int max_rq_desc_sz; int bmme_flags; int reserved_lkey; int max_icm_sz; int max_counters; int* max_vl; int* ib_mtu; int* max_port_width; int* max_gids; int* max_pkeys; int* supported_port_types; int* suggested_type; int* default_sense; int* log_max_macs; int* log_max_vlans; int* eth_mtu; int* def_mac; int flags2; } ;
struct mlx4_dev {int flags; } ;
struct mlx4_cmd_mailbox {int* buf; int dma; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int,int*,int ) ;
 int VAR_15 ;
 int FUNC_2 (struct mlx4_cmd_mailbox*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 int VAR_89 ;
 int VAR_90 ;
 int FUNC_3 (struct mlx4_dev*,int) ;
 int FUNC_4 (struct mlx4_dev*,int ) ;
 int FUNC_5 (int,int) ;
 struct mlx4_cmd_mailbox* FUNC_6 (struct mlx4_dev*) ;
 int FUNC_7 (struct mlx4_dev*,int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_8 (struct mlx4_dev*,char*,...) ;
 int FUNC_9 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

int FUNC_10(struct mlx4_dev *VAR_91, struct mlx4_dev_cap *VAR_92)
{
 struct mlx4_cmd_mailbox *VAR_93;
 u32 *VAR_94;
 u8 VAR_95;
 u32 VAR_96, VAR_97, VAR_98;
 u16 VAR_99;
 u16 VAR_100;
 int VAR_101;
 int VAR_102;
 VAR_92->flags2 = 0;
 VAR_93 = FUNC_6(VAR_91);
 if (FUNC_0(VAR_93))
  return FUNC_2(VAR_93);
 VAR_94 = VAR_93->buf;

 VAR_101 = FUNC_7(VAR_91, 0, VAR_93->dma, 0, 0, VAR_1,
      VAR_3, VAR_0);
 if (VAR_101)
  goto out;

 FUNC_1(VAR_95, VAR_94, 0x12);
 VAR_92->reserved_qps = 1 << (VAR_95 & 0xf);
 FUNC_1(VAR_95, VAR_94, 0x13);
 VAR_92->max_qps = 1 << (VAR_95 & 0x1f);
 FUNC_1(VAR_95, VAR_94, 0x14);
 VAR_92->reserved_srqs = 1 << (VAR_95 >> 4);
 FUNC_1(VAR_95, VAR_94, 0x15);
 VAR_92->max_srqs = 1 << (VAR_95 & 0x1f);
 FUNC_1(VAR_95, VAR_94, 0x19);
 VAR_92->max_cq_sz = 1 << VAR_95;
 FUNC_1(VAR_95, VAR_94, 0x1a);
 VAR_92->reserved_cqs = 1 << (VAR_95 & 0xf);
 FUNC_1(VAR_95, VAR_94, 0x1b);
 VAR_92->max_cqs = 1 << (VAR_95 & 0x1f);
 FUNC_1(VAR_95, VAR_94, 0x1d);
 VAR_92->max_mpts = 1 << (VAR_95 & 0x3f);
 FUNC_1(VAR_95, VAR_94, 0x1e);
 VAR_92->reserved_eqs = VAR_95 & 0xf;
 FUNC_1(VAR_95, VAR_94, 0x1f);
 VAR_92->max_eqs = 1 << (VAR_95 & 0xf);
 FUNC_1(VAR_95, VAR_94, 0x20);
 VAR_92->reserved_mtts = 1 << (VAR_95 >> 4);
 FUNC_1(VAR_95, VAR_94, 0x21);
 VAR_92->max_mrw_sz = 1 << VAR_95;
 FUNC_1(VAR_95, VAR_94, 0x22);
 VAR_92->reserved_mrws = 1 << (VAR_95 & 0xf);
 FUNC_1(VAR_95, VAR_94, 0x23);
 VAR_92->max_mtt_seg = 1 << (VAR_95 & 0x3f);
 FUNC_1(VAR_95, VAR_94, 0x29);
 VAR_92->max_requester_per_qp = 1 << (VAR_95 & 0x3f);
 FUNC_1(VAR_95, VAR_94, 0x2b);
 VAR_92->max_responder_per_qp = 1 << (VAR_95 & 0x3f);
 FUNC_1(VAR_95, VAR_94, 0x2d);
 VAR_95 &= 0x1f;
 if (!VAR_95)
  VAR_92->max_gso_sz = 0;
 else
  VAR_92->max_gso_sz = 1 << VAR_95;

 FUNC_1(VAR_95, VAR_94, 0x2e);
 if (VAR_95 & 0x20)
  VAR_92->flags2 |= VAR_8;
 if (VAR_95 & 0x10)
  VAR_92->flags2 |= VAR_7;
 VAR_95 &= 0xf;
 if (VAR_95) {
  VAR_92->flags2 |= VAR_6;
  VAR_92->max_rss_tbl_sz = 1 << VAR_95;
 } else
  VAR_92->max_rss_tbl_sz = 0;
 FUNC_1(VAR_95, VAR_94, 0x2f);
 VAR_92->max_rdma_global = 1 << (VAR_95 & 0x3f);
 FUNC_1(VAR_95, VAR_94, 0x35);
 VAR_92->local_ca_ack_delay = VAR_95 & 0x1f;
 FUNC_1(VAR_95, VAR_94, 0x37);
 VAR_92->num_ports = VAR_95 & 0xf;
 FUNC_1(VAR_95, VAR_94, 0x38);
 VAR_92->max_msg_sz = 1 << (VAR_95 & 0x1f);
 FUNC_1(VAR_95, VAR_94, 0x76);
 if (VAR_95 & 0x80)
  VAR_92->flags2 |= VAR_5;
 VAR_92->fs_log_max_ucast_qp_range_size = VAR_95 & 0x1f;
 FUNC_1(VAR_95, VAR_94, 0x77);
 VAR_92->fs_max_num_qp_per_entry = VAR_95;
 FUNC_1(VAR_100, VAR_94, 0x3c);
 VAR_92->stat_rate_support = VAR_100;
 FUNC_1(VAR_95, VAR_94, 0x3e);
 if (VAR_95 & 0x80)
  VAR_92->flags2 |= VAR_9;
 FUNC_1(VAR_98, VAR_94, 0x40);
 FUNC_1(VAR_97, VAR_94, 0x44);
 VAR_92->flags = VAR_97 | (u64)VAR_98 << 32;
 FUNC_1(VAR_95, VAR_94, 0x48);
 VAR_92->reserved_uars = VAR_95 >> 4;
 FUNC_1(VAR_95, VAR_94, 0x49);
 VAR_92->uar_size = 1 << ((VAR_95 & 0x3f) + 20);
 FUNC_1(VAR_95, VAR_94, 0x4b);
 VAR_92->min_page_sz = 1 << VAR_95;

 FUNC_1(VAR_95, VAR_94, 0x4c);
 if (VAR_95 & 0x80) {
  FUNC_1(VAR_95, VAR_94, 0x4d);
  VAR_92->bf_reg_size = 1 << (VAR_95 & 0x1f);
  FUNC_1(VAR_95, VAR_94, 0x4e);
  if ((1 << (VAR_95 & 0x3f)) > (VAR_15 / VAR_92->bf_reg_size))
   VAR_95 = 3;
  VAR_92->bf_regs_per_page = 1 << (VAR_95 & 0x3f);
  FUNC_8(VAR_91, "BlueFlame available (reg size %d, regs/page %d)\n",
    VAR_92->bf_reg_size, VAR_92->bf_regs_per_page);
 } else {
  VAR_92->bf_reg_size = 0;
  FUNC_8(VAR_91, "BlueFlame not available\n");
 }

 FUNC_1(VAR_95, VAR_94, 0x51);
 VAR_92->max_sq_sg = VAR_95;
 FUNC_1(VAR_99, VAR_94, 0x52);
 VAR_92->max_sq_desc_sz = VAR_99;

 FUNC_1(VAR_95, VAR_94, 0x61);
 VAR_92->max_qp_per_mcg = 1 << VAR_95;
 FUNC_1(VAR_95, VAR_94, 0x62);
 VAR_92->reserved_mgms = VAR_95 & 0xf;
 FUNC_1(VAR_95, VAR_94, 0x63);
 VAR_92->max_mcgs = 1 << VAR_95;
 FUNC_1(VAR_95, VAR_94, 0x64);
 VAR_92->reserved_pds = VAR_95 >> 4;
 FUNC_1(VAR_95, VAR_94, 0x65);
 VAR_92->max_pds = 1 << (VAR_95 & 0x3f);
 FUNC_1(VAR_95, VAR_94, 0x66);
 VAR_92->reserved_xrcds = VAR_95 >> 4;
 FUNC_1(VAR_95, VAR_94, 0x67);
 VAR_92->max_xrcds = 1 << (VAR_95 & 0x1f);

 FUNC_1(VAR_99, VAR_94, 0x80);
 VAR_92->rdmarc_entry_sz = VAR_99;
 FUNC_1(VAR_99, VAR_94, 0x82);
 VAR_92->qpc_entry_sz = VAR_99;
 FUNC_1(VAR_99, VAR_94, 0x84);
 VAR_92->aux_entry_sz = VAR_99;
 FUNC_1(VAR_99, VAR_94, 0x86);
 VAR_92->altc_entry_sz = VAR_99;
 FUNC_1(VAR_99, VAR_94, 0x88);
 VAR_92->eqc_entry_sz = VAR_99;
 FUNC_1(VAR_99, VAR_94, 0x8a);
 VAR_92->cqc_entry_sz = VAR_99;
 FUNC_1(VAR_99, VAR_94, 0x8c);
 VAR_92->srq_entry_sz = VAR_99;
 FUNC_1(VAR_99, VAR_94, 0x8e);
 VAR_92->cmpt_entry_sz = VAR_99;
 FUNC_1(VAR_99, VAR_94, 0x90);
 VAR_92->mtt_entry_sz = VAR_99;
 FUNC_1(VAR_99, VAR_94, 0x92);
 VAR_92->dmpt_entry_sz = VAR_99;

 FUNC_1(VAR_95, VAR_94, 0x10);
 VAR_92->max_srq_sz = 1 << VAR_95;
 FUNC_1(VAR_95, VAR_94, 0x11);
 VAR_92->max_qp_sz = 1 << VAR_95;
 FUNC_1(VAR_95, VAR_94, 0x33);
 VAR_92->resize_srq = VAR_95 & 1;
 FUNC_1(VAR_95, VAR_94, 0x55);
 VAR_92->max_rq_sg = VAR_95;
 FUNC_1(VAR_99, VAR_94, 0x56);
 VAR_92->max_rq_desc_sz = VAR_99;

 FUNC_1(VAR_92->bmme_flags, VAR_94,
   0x94);
 FUNC_1(VAR_92->reserved_lkey, VAR_94,
   0x98);
 FUNC_1(VAR_95, VAR_94, 0x9d);
 if (VAR_95 & 1<<6)
  VAR_92->flags2 |= VAR_12;
 FUNC_1(VAR_92->max_icm_sz, VAR_94,
   0xa0);
 if (VAR_92->flags & VAR_13)
  FUNC_1(VAR_92->max_counters, VAR_94,
    0x68);

 FUNC_1(VAR_96, VAR_94, 0x70);
 if (VAR_96 & (1 << 16))
  VAR_92->flags2 |= VAR_10;
 if (VAR_96 & (1 << 26))
  VAR_92->flags2 |= VAR_11;

 if (VAR_91->flags & VAR_14) {
  for (VAR_102 = 1; VAR_102 <= VAR_92->num_ports; ++VAR_102) {
   FUNC_1(VAR_95, VAR_94, 0x37);
   VAR_92->max_vl[VAR_102] = VAR_95 >> 4;
   FUNC_1(VAR_95, VAR_94, 0x36);
   VAR_92->ib_mtu[VAR_102] = VAR_95 >> 4;
   VAR_92->max_port_width[VAR_102] = VAR_95 & 0xf;
   FUNC_1(VAR_95, VAR_94, 0x3b);
   VAR_92->max_gids[VAR_102] = 1 << (VAR_95 & 0xf);
   FUNC_1(VAR_95, VAR_94, 0x3f);
   VAR_92->max_pkeys[VAR_102] = 1 << (VAR_95 & 0xf);
  }
 } else {
  for (VAR_102 = 1; VAR_102 <= VAR_92->num_ports; ++VAR_102) {
   VAR_101 = FUNC_7(VAR_91, 0, VAR_93->dma, VAR_102, 0, VAR_2,
        VAR_4, VAR_0);
   if (VAR_101)
    goto out;

   FUNC_1(VAR_95, VAR_94, 0x00);
   VAR_92->supported_port_types[VAR_102] = VAR_95 & 3;
   VAR_92->suggested_type[VAR_102] = (VAR_95 >> 3) & 1;
   VAR_92->default_sense[VAR_102] = (VAR_95 >> 4) & 1;
   FUNC_1(VAR_95, VAR_94, 0x01);
   VAR_92->ib_mtu[VAR_102] = VAR_95 & 0xf;
   FUNC_1(VAR_95, VAR_94, 0x06);
   VAR_92->max_port_width[VAR_102] = VAR_95 & 0xf;
   FUNC_1(VAR_95, VAR_94, 0x07);
   VAR_92->max_gids[VAR_102] = 1 << (VAR_95 >> 4);
   VAR_92->max_pkeys[VAR_102] = 1 << (VAR_95 & 0xf);
   FUNC_1(VAR_95, VAR_94, 0x0b);
   VAR_92->max_vl[VAR_102] = VAR_95 & 0xf;
   FUNC_1(VAR_95, VAR_94, 0x0a);
   VAR_92->log_max_macs[VAR_102] = VAR_95 & 0xf;
   VAR_92->log_max_vlans[VAR_102] = VAR_95 >> 4;
   FUNC_1(VAR_92->eth_mtu[VAR_102], VAR_94, 0x02);
   FUNC_1(VAR_92->def_mac[VAR_102], VAR_94, 0x10);
  }
 }

 FUNC_8(VAR_91, "Base MM extensions: flags %08x, rsvd L_Key %08x\n",
   VAR_92->bmme_flags, VAR_92->reserved_lkey);






 VAR_92->reserved_eqs = FUNC_5(VAR_92->reserved_uars * 4,
        VAR_92->reserved_eqs);

 FUNC_8(VAR_91, "Max ICM size %lld MB\n",
   (unsigned long long) VAR_92->max_icm_sz >> 20);
 FUNC_8(VAR_91, "Max QPs: %d, reserved QPs: %d, entry size: %d\n",
   VAR_92->max_qps, VAR_92->reserved_qps, VAR_92->qpc_entry_sz);
 FUNC_8(VAR_91, "Max SRQs: %d, reserved SRQs: %d, entry size: %d\n",
   VAR_92->max_srqs, VAR_92->reserved_srqs, VAR_92->srq_entry_sz);
 FUNC_8(VAR_91, "Max CQs: %d, reserved CQs: %d, entry size: %d\n",
   VAR_92->max_cqs, VAR_92->reserved_cqs, VAR_92->cqc_entry_sz);
 FUNC_8(VAR_91, "Max EQs: %d, reserved EQs: %d, entry size: %d\n",
   VAR_92->max_eqs, VAR_92->reserved_eqs, VAR_92->eqc_entry_sz);
 FUNC_8(VAR_91, "reserved MPTs: %d, reserved MTTs: %d\n",
   VAR_92->reserved_mrws, VAR_92->reserved_mtts);
 FUNC_8(VAR_91, "Max PDs: %d, reserved PDs: %d, reserved UARs: %d\n",
   VAR_92->max_pds, VAR_92->reserved_pds, VAR_92->reserved_uars);
 FUNC_8(VAR_91, "Max QP/MCG: %d, reserved MGMs: %d\n",
   VAR_92->max_pds, VAR_92->reserved_mgms);
 FUNC_8(VAR_91, "Max CQEs: %d, max WQEs: %d, max SRQ WQEs: %d\n",
   VAR_92->max_cq_sz, VAR_92->max_qp_sz, VAR_92->max_srq_sz);
 FUNC_8(VAR_91, "Local CA ACK delay: %d, max MTU: %d, port width cap: %d\n",
   VAR_92->local_ca_ack_delay, 128 << VAR_92->ib_mtu[1],
   VAR_92->max_port_width[1]);
 FUNC_8(VAR_91, "Max SQ desc size: %d, max SQ S/G: %d\n",
   VAR_92->max_sq_desc_sz, VAR_92->max_sq_sg);
 FUNC_8(VAR_91, "Max RQ desc size: %d, max RQ S/G: %d\n",
   VAR_92->max_rq_desc_sz, VAR_92->max_rq_sg);
 FUNC_8(VAR_91, "Max GSO size: %d\n", VAR_92->max_gso_sz);
 FUNC_8(VAR_91, "Max counters: %d\n", VAR_92->max_counters);
 FUNC_8(VAR_91, "Max RSS Table size: %d\n", VAR_92->max_rss_tbl_sz);

 FUNC_3(VAR_91, VAR_92->flags);
 FUNC_4(VAR_91, VAR_92->flags2);

out:
 FUNC_9(VAR_91, VAR_93);
 return VAR_101;
}
