
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mc_fb_start; int mc_fb_top; } ;
union mc_fb_location_u {scalar_t__ val; TYPE_1__ f; } ;
struct TYPE_5__ {int mc_ext_mem_start; int mc_ext_mem_top; } ;
union mc_ext_mem_location_u {scalar_t__ val; TYPE_2__ f; } ;
typedef int u32 ;
struct w100fb_par {TYPE_3__* mach; int extmem_active; } ;
struct w100_mem_info {int size; int ext_cntl; int sdram_mode_reg; int ext_timing_cntl; int io_cntl; } ;
struct w100_bm_mem_info {int ext_mem_bw; int offset; int ext_timing_ctl; int ext_cntl; int mode_reg; int io_cntl; int config; } ;
struct TYPE_6__ {struct w100_mem_info* mem; struct w100_bm_mem_info* bm_mem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct w100fb_par *VAR_20)
{
 union mc_ext_mem_location_u VAR_21;
 union mc_fb_location_u VAR_22;
 struct w100_mem_info *VAR_23 = VAR_20->mach->mem;
 struct w100_bm_mem_info *VAR_24 = VAR_20->mach->bm_mem;

 if (!VAR_20->extmem_active) {
  FUNC_1(VAR_4);


  VAR_22.f.mc_fb_start = VAR_3 >> 8;
  VAR_22.f.mc_fb_top = (VAR_3+VAR_2) >> 8;
  FUNC_2((u32) (VAR_22.val), VAR_19 + VAR_14);



  VAR_21.f.mc_ext_mem_start = VAR_0 >> 8;
  VAR_21.f.mc_ext_mem_top = (VAR_0-1) >> 8;
  FUNC_2((u32) (VAR_21.val), VAR_19 + VAR_13);
 } else {

  VAR_22.f.mc_fb_start = VAR_1 >> 8;
  VAR_22.f.mc_fb_top = (VAR_1+VAR_2) >> 8;
  FUNC_2((u32) (VAR_22.val), VAR_19 + VAR_14);


  VAR_21.f.mc_ext_mem_start = VAR_3 >> 8;
  VAR_21.f.mc_ext_mem_top = (VAR_3+VAR_20->mach->mem->size) >> 8;
  FUNC_2((u32) (VAR_21.val), VAR_19 + VAR_13);

  FUNC_2(0x00007800, VAR_19 + VAR_12);
  FUNC_2(VAR_23->ext_cntl, VAR_19 + VAR_15);
  FUNC_2(0x00200021, VAR_19 + VAR_18);
  FUNC_0(100);
  FUNC_2(0x80200021, VAR_19 + VAR_18);
  FUNC_0(100);
  FUNC_2(VAR_23->sdram_mode_reg, VAR_19 + VAR_18);
  FUNC_0(100);
  FUNC_2(VAR_23->ext_timing_cntl, VAR_19 + VAR_16);
  FUNC_2(VAR_23->io_cntl, VAR_19 + VAR_17);
  if (VAR_24) {
   FUNC_2(VAR_24->ext_mem_bw, VAR_19 + VAR_6);
   FUNC_2(VAR_24->offset, VAR_19 + VAR_11);
   FUNC_2(VAR_24->ext_timing_ctl, VAR_19 + VAR_8);
   FUNC_2(VAR_24->ext_cntl, VAR_19 + VAR_7);
   FUNC_2(VAR_24->mode_reg, VAR_19 + VAR_10);
   FUNC_2(VAR_24->io_cntl, VAR_19 + VAR_9);
   FUNC_2(VAR_24->config, VAR_19 + VAR_5);
  }
 }
}
