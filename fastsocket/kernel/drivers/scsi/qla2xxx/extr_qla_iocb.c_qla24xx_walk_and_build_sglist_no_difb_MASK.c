
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct scsi_cmnd {TYPE_1__* device; } ;
struct scatterlist {int dummy; } ;
struct qla_hw_data {int dl_dma_pool; } ;
struct qla2_sgx {scalar_t__ dma_len; scalar_t__ dma_addr; TYPE_4__* sp; int cur_sg; int tot_bytes; } ;
struct dsd_dma {scalar_t__ dsd_list_dma; int list; void* dsd_addr; } ;
struct crc_context {int dsd_list; } ;
struct TYPE_8__ {scalar_t__ ctx; } ;
struct TYPE_9__ {TYPE_2__ scmd; } ;
struct TYPE_10__ {int flags; TYPE_3__ u; } ;
typedef TYPE_4__ srb_t ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_7__ {scalar_t__ sector_size; } ;


 struct scsi_cmnd* FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_3 (scalar_t__) ;
 void* FUNC_4 (int ,int ,scalar_t__*) ;
 int FUNC_5 (struct dsd_dma*) ;
 struct dsd_dma* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct qla2_sgx*,int ,int) ;
 scalar_t__ FUNC_9 (scalar_t__,struct qla2_sgx*,scalar_t__*) ;
 int FUNC_10 (struct scsi_cmnd*) ;
 struct scatterlist* FUNC_11 (struct scsi_cmnd*) ;
 int FUNC_12 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_13 (struct scatterlist*) ;
 scalar_t__ FUNC_14 (struct scatterlist*) ;
 struct scatterlist* FUNC_15 (struct scatterlist*) ;

__attribute__((used)) static int
FUNC_16(struct qla_hw_data *VAR_3, srb_t *VAR_4,
 uint32_t *VAR_5, uint16_t VAR_6)
{
 void *VAR_7;
 uint8_t VAR_8 = 0;
 uint32_t VAR_9;
 struct dsd_dma *VAR_10;
 struct scatterlist *VAR_11;
 uint32_t *VAR_12 = VAR_5;
 uint16_t VAR_13 = VAR_6;

 uint32_t VAR_14;
 uint32_t VAR_15;
 struct qla2_sgx VAR_16;
 dma_addr_t VAR_17;
 uint32_t VAR_18, VAR_19 = 0;
 struct scsi_cmnd *VAR_20 = FUNC_0(VAR_4);

 VAR_14 = VAR_20->device->sector_size;

 FUNC_8(&VAR_16, 0, sizeof(struct qla2_sgx));
 VAR_16.tot_bytes = FUNC_10(VAR_20);
 VAR_16.cur_sg = FUNC_12(VAR_20);
 VAR_16.sp = VAR_4;

 VAR_11 = FUNC_11(VAR_20);

 while (FUNC_9(VAR_14, &VAR_16, &VAR_15)) {

  VAR_17 = VAR_16.dma_addr;
  VAR_18 = VAR_16.dma_len;
alloc_and_fill:

  if (VAR_8 == 0) {
   VAR_8 = (VAR_13 > VAR_1) ?
     VAR_1 : VAR_13;
   VAR_9 = (VAR_8 + 1) * 12;
   VAR_13 -= VAR_8;


   VAR_10 = FUNC_6(sizeof(struct dsd_dma), VAR_0);
   if (!VAR_10)
    return 1;


   VAR_10->dsd_addr = VAR_7 =
       FUNC_4(VAR_3->dl_dma_pool, VAR_0,
    &VAR_10->dsd_list_dma);

   if (!VAR_7) {




    FUNC_5(VAR_10);
    return 1;
   }

   FUNC_7(&VAR_10->list,
       &((struct crc_context *)VAR_4->u.scmd.ctx)->dsd_list);

   VAR_4->flags |= VAR_2;


   *VAR_12++ = FUNC_3(FUNC_1(VAR_10->dsd_list_dma));
   *VAR_12++ = FUNC_3(FUNC_2(VAR_10->dsd_list_dma));
   *VAR_12++ = VAR_9;
   VAR_12 = (uint32_t *)VAR_7;
  }
  *VAR_12++ = FUNC_3(FUNC_1(VAR_17));
  *VAR_12++ = FUNC_3(FUNC_2(VAR_17));
  *VAR_12++ = FUNC_3(VAR_18);
  VAR_8--;

  if (VAR_15 == 0) {

   VAR_17 = FUNC_13(VAR_11) + VAR_19;
   VAR_18 = 8;

   VAR_19 += VAR_18;
   if (VAR_19 == FUNC_14(VAR_11)) {
    VAR_19 = 0;
    VAR_11 = FUNC_15(VAR_11);
   }

   VAR_15 = 1;
   goto alloc_and_fill;
  }
 }

 *VAR_12++ = 0;
 *VAR_12++ = 0;
 *VAR_12++ = 0;
 return 0;
}
