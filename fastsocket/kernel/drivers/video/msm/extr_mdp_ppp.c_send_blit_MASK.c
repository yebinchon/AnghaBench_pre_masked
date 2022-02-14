
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdp_regs {int src_rect; int src0; int src1; int src_ystride; int src_cfg; int src_pack; int op; int phasex_init; int phasey_init; int phasex_step; int phasey_step; int dst_cfg; int dst_pack; int dst_rect; int dst0; int dst1; int dst_ystride; int edge; } ;
struct mdp_info {int dummy; } ;
struct TYPE_2__ {size_t format; } ;
struct mdp_blit_req {int alpha; int transp_mask; TYPE_1__ dst; } ;
struct file {int dummy; } ;


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
 int VAR_15 ;
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
 int FUNC_0 (struct mdp_blit_req*,struct mdp_regs*,struct file*,struct file*) ;
 int FUNC_1 (struct mdp_info const*,int,int) ;
 int* VAR_26 ;
 int* VAR_27 ;

__attribute__((used)) static int FUNC_2(const struct mdp_info *VAR_28, struct mdp_blit_req *VAR_29,
       struct mdp_regs *VAR_30, struct file *VAR_31,
       struct file *VAR_32)
{
 FUNC_1(VAR_28, 1, 0x060);
 FUNC_1(VAR_28, VAR_30->src_rect, VAR_23);
 FUNC_1(VAR_28, VAR_30->src0, VAR_19);
 FUNC_1(VAR_28, VAR_30->src1, VAR_20);
 FUNC_1(VAR_28, VAR_30->src_ystride, VAR_24);
 FUNC_1(VAR_28, VAR_30->src_cfg, VAR_21);
 FUNC_1(VAR_28, VAR_30->src_pack, VAR_22);

 FUNC_1(VAR_28, VAR_30->op, VAR_14);
 FUNC_1(VAR_28, VAR_30->phasex_init, VAR_15);
 FUNC_1(VAR_28, VAR_30->phasey_init, VAR_17);
 FUNC_1(VAR_28, VAR_30->phasex_step, VAR_16);
 FUNC_1(VAR_28, VAR_30->phasey_step, VAR_18);

 FUNC_1(VAR_28, (VAR_29->alpha << 24) | (VAR_29->transp_mask & 0xffffff),
        VAR_1);

 FUNC_1(VAR_28, VAR_30->dst_cfg, VAR_9);
 FUNC_1(VAR_28, VAR_30->dst_pack, VAR_10);
 FUNC_1(VAR_28, VAR_30->dst_rect, VAR_11);
 FUNC_1(VAR_28, VAR_30->dst0, VAR_7);
 FUNC_1(VAR_28, VAR_30->dst1, VAR_8);
 FUNC_1(VAR_28, VAR_30->dst_ystride, VAR_12);

 FUNC_1(VAR_28, VAR_30->edge, VAR_13);
 if (VAR_30->op & VAR_25) {
  FUNC_1(VAR_28, VAR_30->dst0, VAR_2);
  FUNC_1(VAR_28, VAR_30->dst1, VAR_3);
  FUNC_1(VAR_28, VAR_30->dst_ystride, VAR_6);
  FUNC_1(VAR_28, VAR_27[VAR_29->dst.format], VAR_4);
  FUNC_1(VAR_28, VAR_26[VAR_29->dst.format],
      VAR_5);
 }
 FUNC_0(VAR_29, VAR_30, VAR_31, VAR_32);
 FUNC_1(VAR_28, 0x1000, VAR_0);
 return 0;
}
