
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u64 ;
typedef size_t u32 ;
struct sg_mapping_iter {void* addr; size_t consumed; scalar_t__ length; } ;
struct TYPE_2__ {size_t block_size; } ;
struct se_device {TYPE_1__ dev_attrib; } ;
struct se_cmd {size_t t_data_nents; int data_direction; size_t t_task_lba; size_t data_length; struct se_device* se_dev; struct scatterlist* t_data_sg; } ;
struct scatterlist {int dummy; } ;
struct rd_dev_sg_table {size_t page_start_offset; size_t page_end_offset; struct scatterlist* sg_table; } ;
struct rd_dev {int rd_dev_id; } ;
typedef int sense_reason_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct rd_dev* FUNC_0 (struct se_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t FUNC_1 (size_t,size_t) ;
 int FUNC_2 (void*,void*,size_t) ;
 size_t FUNC_3 (size_t,size_t) ;
 int FUNC_4 (char*,int ,...) ;
 struct rd_dev_sg_table* FUNC_5 (struct rd_dev*,size_t) ;
 int FUNC_6 (struct sg_mapping_iter*) ;
 int FUNC_7 (struct sg_mapping_iter*,struct scatterlist*,size_t,int ) ;
 int FUNC_8 (struct sg_mapping_iter*) ;
 void* FUNC_9 (struct scatterlist*) ;
 int FUNC_10 (struct se_cmd*,int ) ;

__attribute__((used)) static sense_reason_t
FUNC_11(struct se_cmd *VAR_7)
{
 struct scatterlist *VAR_8 = VAR_7->t_data_sg;
 u32 VAR_9 = VAR_7->t_data_nents;
 enum dma_data_direction VAR_10 = VAR_7->data_direction;
 struct se_device *VAR_11 = VAR_7->se_dev;
 struct rd_dev *VAR_12 = FUNC_0(VAR_11);
 struct rd_dev_sg_table *VAR_13;
 struct scatterlist *VAR_14;
 struct sg_mapping_iter VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 u64 VAR_20;

 VAR_20 = VAR_7->t_task_lba * VAR_11->dev_attrib.block_size;
 VAR_16 = FUNC_1(VAR_20, VAR_1);
 VAR_18 = VAR_20;
 VAR_17 = VAR_7->data_length;

 VAR_13 = FUNC_5(VAR_12, VAR_18);
 if (!VAR_13)
  return VAR_6;

 VAR_14 = &VAR_13->sg_table[VAR_18 - VAR_13->page_start_offset];

 FUNC_4("RD[%u]: %s LBA: %llu, Size: %u Page: %u, Offset: %u\n",
   VAR_12->rd_dev_id,
   VAR_10 == VAR_0 ? "Read" : "Write",
   VAR_7->t_task_lba, VAR_17, VAR_18, VAR_16);

 VAR_19 = VAR_1 - VAR_16;
 FUNC_7(&VAR_15, VAR_8, VAR_9,
   VAR_10 == VAR_0 ?
    VAR_4 : VAR_3);
 while (VAR_17) {
  u32 VAR_21;
  void *VAR_22;

  FUNC_6(&VAR_15);
  if (!(u32)VAR_15.length) {
   FUNC_4("RD[%u]: invalid sgl %p len %zu\n",
     VAR_12->rd_dev_id, VAR_15.addr, VAR_15.length);
   FUNC_8(&VAR_15);
   return VAR_5;
  }
  VAR_21 = FUNC_3((u32)VAR_15.length, VAR_19);
  if (VAR_21 > VAR_17) {
   FUNC_4("RD[%u]: size underrun page %d offset %d "
     "size %d\n", VAR_12->rd_dev_id,
     VAR_18, VAR_16, VAR_17);
   VAR_21 = VAR_17;
  }
  VAR_15.consumed = VAR_21;

  VAR_22 = FUNC_9(VAR_14) + VAR_16;

  if (VAR_10 == VAR_0)
   FUNC_2(VAR_15.addr, VAR_22, VAR_21);
  else
   FUNC_2(VAR_22, VAR_15.addr, VAR_21);

  VAR_17 -= VAR_21;
  if (!VAR_17)
   continue;

  VAR_19 -= VAR_21;
  if (VAR_19) {
   VAR_16 += VAR_21;
   continue;
  }


  VAR_18++;
  VAR_16 = 0;
  VAR_19 = VAR_1;
  if (VAR_18 <= VAR_13->page_end_offset) {
   VAR_14++;
   continue;
  }

  VAR_13 = FUNC_5(VAR_12, VAR_18);
  if (!VAR_13) {
   FUNC_8(&VAR_15);
   return VAR_6;
  }


  VAR_14 = VAR_13->sg_table;
 }
 FUNC_8(&VAR_15);

 FUNC_10(VAR_7, VAR_2);
 return 0;
}
