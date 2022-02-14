
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ring_size; int ring_offset; } ;
union ce_ring_size {scalar_t__ w; TYPE_1__ bf; } ;
union ce_ring_contol {scalar_t__ w; } ;
struct TYPE_8__ {int bo_sgpd_en; int bo_sa_en; int bo_pd_en; int dynamic_sa_en; int reset_sg; int reset_pdr; int reset_pe; int pe_mode; scalar_t__ bo_td_en; scalar_t__ bo_data_en; } ;
union ce_pe_dma_cfg {scalar_t__ w; TYPE_4__ bf; } ;
struct TYPE_6__ {int gdr_size; int sdr_size; } ;
union ce_part_ring_size {scalar_t__ w; TYPE_2__ bf; } ;
struct TYPE_7__ {int input_threshold; int output_threshold; } ;
union ce_io_threshold {scalar_t__ w; TYPE_3__ bf; } ;
typedef scalar_t__ u32 ;
struct crypto4xx_device {scalar_t__ ce_base; scalar_t__ sdr_pa; scalar_t__ gdr_pa; scalar_t__ pdr_pa; } ;
typedef int rand_num ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 scalar_t__ VAR_35 ;
 int VAR_36 ;
 scalar_t__ VAR_37 ;
 int VAR_38 ;
 scalar_t__ VAR_39 ;
 int FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct crypto4xx_device *VAR_40)
{
 union ce_ring_size VAR_41;
 union ce_ring_contol VAR_42;
 union ce_part_ring_size VAR_43;
 union ce_io_threshold VAR_44;
 u32 VAR_45;
 union ce_pe_dma_cfg VAR_46;

 FUNC_1(VAR_26, VAR_40->ce_base + VAR_0);

 VAR_46.w = 0;
 VAR_46.bf.bo_sgpd_en = 1;
 VAR_46.bf.bo_data_en = 0;
 VAR_46.bf.bo_sa_en = 1;
 VAR_46.bf.bo_pd_en = 1;
 VAR_46.bf.dynamic_sa_en = 1;
 VAR_46.bf.reset_sg = 1;
 VAR_46.bf.reset_pdr = 1;
 VAR_46.bf.reset_pe = 1;
 FUNC_1(VAR_46.w, VAR_40->ce_base + VAR_13);

 VAR_46.bf.pe_mode = 0;
 VAR_46.bf.reset_sg = 0;
 VAR_46.bf.reset_pdr = 0;
 VAR_46.bf.reset_pe = 0;
 VAR_46.bf.bo_td_en = 0;
 FUNC_1(VAR_46.w, VAR_40->ce_base + VAR_13);
 FUNC_1(VAR_40->pdr_pa, VAR_40->ce_base + VAR_11);
 FUNC_1(VAR_40->pdr_pa, VAR_40->ce_base + VAR_19);
 FUNC_1(VAR_37, VAR_40->ce_base + VAR_16);
 FUNC_0(&VAR_45, sizeof(VAR_45));
 FUNC_1(VAR_45, VAR_40->ce_base + VAR_18);
 FUNC_0(&VAR_45, sizeof(VAR_45));
 FUNC_1(VAR_45, VAR_40->ce_base + VAR_17);
 VAR_41.w = 0;
 VAR_41.bf.ring_offset = VAR_36;
 VAR_41.bf.ring_size = VAR_33;
 FUNC_1(VAR_41.w, VAR_40->ce_base + VAR_22);
 VAR_42.w = 0;
 FUNC_1(VAR_42.w, VAR_40->ce_base + VAR_21);
 FUNC_1(VAR_27, VAR_40->ce_base + VAR_1);
 FUNC_1(VAR_40->gdr_pa, VAR_40->ce_base + VAR_2);
 FUNC_1(VAR_40->sdr_pa, VAR_40->ce_base + VAR_24);
 VAR_43.w = 0;
 VAR_43.bf.sdr_size = VAR_38;
 VAR_43.bf.gdr_size = VAR_28;
 FUNC_1(VAR_43.w, VAR_40->ce_base + VAR_10);
 FUNC_1(VAR_39, VAR_40->ce_base + VAR_9);
 VAR_44.w = 0;
 VAR_44.bf.output_threshold = VAR_34;
 VAR_44.bf.input_threshold = VAR_29;
 FUNC_1(VAR_44.w, VAR_40->ce_base + VAR_8);
 FUNC_1(0, VAR_40->ce_base + VAR_12);
 FUNC_1(0, VAR_40->ce_base + VAR_20);
 FUNC_1(0, VAR_40->ce_base + VAR_15);
 FUNC_1(0, VAR_40->ce_base + VAR_14);
 FUNC_1(0, VAR_40->ce_base + VAR_23);
 FUNC_1(0, VAR_40->ce_base + VAR_3);
 FUNC_1(0, VAR_40->ce_base + VAR_25);

 VAR_46.bf.pe_mode = 1;
 VAR_46.bf.reset_sg = 0;
 VAR_46.bf.reset_pdr = 0;
 VAR_46.bf.reset_pe = 0;
 VAR_46.bf.bo_td_en = 0;
 FUNC_1(VAR_46.w, VAR_40->ce_base + VAR_13);

 FUNC_1(VAR_30, VAR_40->ce_base + VAR_5);
 FUNC_1(VAR_32, VAR_40->ce_base + VAR_6);
 FUNC_1(VAR_32, VAR_40->ce_base + VAR_6);
 FUNC_1(VAR_31, VAR_40->ce_base + VAR_4);
 FUNC_1(VAR_35, VAR_40->ce_base + VAR_7);
}
