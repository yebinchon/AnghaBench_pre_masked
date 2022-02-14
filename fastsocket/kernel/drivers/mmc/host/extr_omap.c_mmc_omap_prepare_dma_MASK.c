
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct scatterlist {int dummy; } ;
struct mmc_omap_host {int dma_ch; size_t sg_idx; unsigned long phys_base; int dma_len; } ;
struct mmc_data {int blksz; int blocks; int flags; struct scatterlist* sg; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
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
 unsigned long VAR_11 ;
 int FUNC_1 (struct mmc_omap_host*,int ,int) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int,int ,unsigned long,int ,int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int,int,int ,unsigned long,int ,int ) ;
 int FUNC_11 (int,int ,int,int,int ,int,int ) ;
 unsigned long FUNC_12 (struct scatterlist*) ;
 int FUNC_13 (struct scatterlist*) ;

__attribute__((used)) static void
FUNC_14(struct mmc_omap_host *VAR_12, struct mmc_data *VAR_13)
{
 int VAR_14 = VAR_12->dma_ch;
 unsigned long VAR_15;
 u16 VAR_16, VAR_17;
 u32 VAR_18;
 struct scatterlist *VAR_19 = &VAR_13->sg[VAR_12->sg_idx];
 int VAR_20 = 0;
 int VAR_21 = 0;
 int VAR_22 = 0;

 VAR_15 = VAR_12->phys_base + VAR_11;
 VAR_17 = VAR_13->blksz;
 VAR_18 = FUNC_13(VAR_19);

 if ((VAR_13->blocks == 1) && (VAR_18 > VAR_13->blksz))
  VAR_18 = VAR_17;

 VAR_12->dma_len = VAR_18;





 if (FUNC_3() && VAR_17 > 32)
  VAR_17 = 32;
 else if (VAR_17 > 64)
  VAR_17 = 64;
 VAR_18 /= VAR_17;
 VAR_17 >>= 1;

 if (!(VAR_13->flags & VAR_1)) {
  VAR_16 = 0x800f | ((VAR_17 - 1) << 8);

  if (FUNC_2()) {
   VAR_20 = VAR_9;
   VAR_21 = VAR_8;
  }
  if (FUNC_4())
   VAR_22 = VAR_2;

  FUNC_10(VAR_14, VAR_20,
     VAR_4,
     VAR_15, 0, 0);
  FUNC_7(VAR_14, VAR_21,
      VAR_5,
      FUNC_12(VAR_19), 0, 0);
  FUNC_6(VAR_14, 1);
  FUNC_5(VAR_14, VAR_6);
 } else {
  VAR_16 = 0x0f80 | ((VAR_17 - 1) << 0);

  if (FUNC_2()) {
   VAR_20 = VAR_8;
   VAR_21 = VAR_9;
  }
  if (FUNC_4())
   VAR_22 = VAR_3;

  FUNC_7(VAR_14, VAR_21,
      VAR_4,
      VAR_15, 0, 0);
  FUNC_10(VAR_14, VAR_20,
     VAR_5,
     FUNC_12(VAR_19), 0, 0);
  FUNC_9(VAR_14, 1);
  FUNC_8(VAR_14, VAR_6);
 }


 FUNC_0(VAR_18 > 0xffff);

 FUNC_1(VAR_12, VAR_0, VAR_16);
 FUNC_11(VAR_14, VAR_7,
         VAR_17, VAR_18, VAR_10,
         VAR_22, 0);
}
