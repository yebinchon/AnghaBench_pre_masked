
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_data {int blocks; int blksz; int flags; int * sg; int error; } ;
struct atmel_mci {int need_reset; scalar_t__ pio_offset; int * sg; int * data_chan; struct mmc_data* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mmc_data*) ;
 scalar_t__ FUNC_1 (struct atmel_mci*,struct mmc_data*) ;

__attribute__((used)) static u32 FUNC_2(struct atmel_mci *VAR_5, struct mmc_data *VAR_6)
{
 u32 VAR_7;

 VAR_6->error = -VAR_1;

 FUNC_0(VAR_5->data);
 VAR_5->sg = ((void*)0);
 VAR_5->data = VAR_6;

 VAR_7 = VAR_0;
 if (FUNC_1(VAR_5, VAR_6)) {
  VAR_5->data_chan = ((void*)0);
  if (VAR_6->blocks * VAR_6->blksz < 12
    || (VAR_6->blocks * VAR_6->blksz) & 3)
   VAR_5->need_reset = 1;

  VAR_5->sg = VAR_6->sg;
  VAR_5->pio_offset = 0;
  if (VAR_6->flags & VAR_4)
   VAR_7 |= VAR_2;
  else
   VAR_7 |= VAR_3;
 }

 return VAR_7;
}
