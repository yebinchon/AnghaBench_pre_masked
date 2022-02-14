
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint32_t ;
struct mdp_regs {unsigned long src0; int src_cfg; unsigned long src1; unsigned long dst0; int dst_cfg; unsigned long dst1; int dst_bpp; int src_bpp; } ;
struct mdp_blit_req {int dst_rect; int dst; int src_rect; int src; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int ,unsigned long*,unsigned long*) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_1, unsigned long VAR_2,
    unsigned long VAR_3, unsigned long VAR_4,
    struct mdp_blit_req *VAR_5, struct mdp_regs *VAR_6)
{
 unsigned long VAR_7 = VAR_1;
 unsigned long VAR_8 = VAR_1 + VAR_2;
 unsigned long VAR_9 = VAR_3;
 unsigned long VAR_10 = VAR_3 + VAR_4;
 uint32_t VAR_11, VAR_12, VAR_13, VAR_14;
 FUNC_1(&VAR_5->src, &VAR_5->src_rect, VAR_6->src_bpp, &VAR_11,
   &VAR_12);
 FUNC_1(&VAR_5->dst, &VAR_5->dst_rect, VAR_6->dst_bpp, &VAR_13,
   &VAR_14);

 if (VAR_6->src0 < VAR_7 || VAR_6->src0 > VAR_8 ||
     VAR_6->src0 + VAR_11 > VAR_8) {
  FUNC_0("invalid_src %x %x %lx %lx\n", VAR_6->src0,
        VAR_11, VAR_7, VAR_8);
  return 0;
 }
 if (VAR_6->src_cfg & VAR_0) {
  if (VAR_6->src1 < VAR_7 || VAR_6->src1 > VAR_8 ||
      VAR_6->src1 + VAR_12 > VAR_8) {
   FUNC_0("invalid_src1");
   return 0;
  }
 }
 if (VAR_6->dst0 < VAR_9 || VAR_6->dst0 > VAR_10 ||
     VAR_6->dst0 + VAR_13 > VAR_10) {
  FUNC_0("invalid_dst");
  return 0;
 }
 if (VAR_6->dst_cfg & VAR_0) {
  if (VAR_6->dst1 < VAR_9 || VAR_6->dst1 > VAR_10 ||
      VAR_6->dst1 + VAR_14 > VAR_10) {
   FUNC_0("invalid_dst1");
   return 0;
  }
 }
 return 1;
}
