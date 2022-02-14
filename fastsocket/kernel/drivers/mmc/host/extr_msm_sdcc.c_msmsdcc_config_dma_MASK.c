
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct scatterlist {int dummy; } ;
struct msmsdcc_nc_dmadata {int cmdptr; TYPE_4__* cmd; } ;
struct TYPE_6__ {int cmdptr; int complete_func; } ;
struct TYPE_7__ {unsigned int num_ents; int cmd_busaddr; TYPE_2__ hdr; int cmdptr_busaddr; struct scatterlist* sg; int dir; struct msmsdcc_nc_dmadata* nc; } ;
struct TYPE_5__ {scalar_t__ user_pages; } ;
struct msmsdcc_host {int pdev_id; TYPE_3__ dma; int mmc; TYPE_1__ curr; } ;
struct mmc_data {unsigned int sg_len; int flags; struct scatterlist* sg; } ;
struct TYPE_8__ {int src_dst_len; int row_offset; int num_rows; int cmd; void* dst_row_addr; void* src_row_addr; } ;
typedef TYPE_4__ dmov_box ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int FUNC_4 (int ,struct scatterlist*,unsigned int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_14 ;
 void* FUNC_7 (struct msmsdcc_host*) ;
 int FUNC_8 (char*,int ) ;
 void* FUNC_9 (struct scatterlist*) ;
 int FUNC_10 (struct scatterlist*) ;
 int FUNC_11 (struct msmsdcc_host*,struct mmc_data*) ;

__attribute__((used)) static int FUNC_12(struct msmsdcc_host *VAR_15, struct mmc_data *VAR_16)
{
 struct msmsdcc_nc_dmadata *VAR_17;
 dmov_box *VAR_18;
 uint32_t VAR_19;
 uint32_t VAR_20;
 unsigned int VAR_21;
 int VAR_22, VAR_23;
 struct scatterlist *VAR_24 = VAR_16->sg;

 VAR_23 = FUNC_11(VAR_15, VAR_16);
 if (VAR_23)
  return VAR_23;

 VAR_15->dma.sg = VAR_16->sg;
 VAR_15->dma.num_ents = VAR_16->sg_len;

 VAR_17 = VAR_15->dma.nc;

 switch (VAR_15->pdev_id) {
 case 1:
  VAR_20 = VAR_10;
  break;
 case 2:
  VAR_20 = VAR_11;
  break;
 case 3:
  VAR_20 = VAR_12;
  break;
 case 4:
  VAR_20 = VAR_13;
  break;
 default:
  VAR_15->dma.sg = ((void*)0);
  VAR_15->dma.num_ents = 0;
  return -VAR_6;
 }

 if (VAR_16->flags & VAR_9)
  VAR_15->dma.dir = VAR_3;
 else
  VAR_15->dma.dir = VAR_4;

 VAR_15->curr.user_pages = 0;

 VAR_21 = FUNC_4(FUNC_5(VAR_15->mmc), VAR_15->dma.sg,
         VAR_15->dma.num_ents, VAR_15->dma.dir);

 if (VAR_21 != VAR_15->dma.num_ents) {
  FUNC_8("%s: Unable to map in all sg elements\n",
         FUNC_6(VAR_15->mmc));
  VAR_15->dma.sg = ((void*)0);
  VAR_15->dma.num_ents = 0;
  return -VAR_7;
 }

 VAR_18 = &VAR_17->cmd[0];
 for (VAR_22 = 0; VAR_22 < VAR_15->dma.num_ents; VAR_22++) {
  VAR_18->cmd = VAR_1;

  if (VAR_22 == (VAR_15->dma.num_ents - 1))
   VAR_18->cmd |= VAR_0;
  VAR_19 = (FUNC_10(VAR_24) % VAR_8) ?
   (FUNC_10(VAR_24) / VAR_8) + 1 :
   (FUNC_10(VAR_24) / VAR_8) ;

  if (VAR_16->flags & VAR_9) {
   VAR_18->src_row_addr = FUNC_7(VAR_15);
   VAR_18->dst_row_addr = FUNC_9(VAR_24);

   VAR_18->src_dst_len = (VAR_8 << 16) |
        (VAR_8);
   VAR_18->row_offset = VAR_8;

   VAR_18->num_rows = VAR_19 * ((1 << 16) + 1);
   VAR_18->cmd |= FUNC_2(VAR_20);
  } else {
   VAR_18->src_row_addr = FUNC_9(VAR_24);
   VAR_18->dst_row_addr = FUNC_7(VAR_15);

   VAR_18->src_dst_len = (VAR_8 << 16) |
        (VAR_8);
   VAR_18->row_offset = (VAR_8 << 16);

   VAR_18->num_rows = VAR_19 * ((1 << 16) + 1);
   VAR_18->cmd |= FUNC_1(VAR_20);
  }
  VAR_18++;
  VAR_24++;
 }


 FUNC_0(VAR_15->dma.cmd_busaddr & 0x07);

 VAR_17->cmdptr = (VAR_15->dma.cmd_busaddr >> 3) | VAR_2;
 VAR_15->dma.hdr.cmdptr = VAR_5 |
          FUNC_3(VAR_15->dma.cmdptr_busaddr);
 VAR_15->dma.hdr.complete_func = VAR_14;

 return 0;
}
