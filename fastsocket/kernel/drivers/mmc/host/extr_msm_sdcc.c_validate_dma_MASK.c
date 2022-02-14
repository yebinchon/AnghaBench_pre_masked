
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int channel; } ;
struct msmsdcc_host {TYPE_1__ dma; } ;
struct mmc_data {int blksz; int blocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct msmsdcc_host *VAR_3, struct mmc_data *VAR_4)
{
 if (VAR_3->dma.channel == -1)
  return -VAR_1;

 if ((VAR_4->blksz * VAR_4->blocks) < VAR_2)
  return -VAR_0;
 if ((VAR_4->blksz * VAR_4->blocks) % VAR_2)
  return -VAR_0;
 return 0;
}
