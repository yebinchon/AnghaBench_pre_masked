
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct se_cmd {int t_task_lba; int t_data_nents; struct iblock_req* priv; TYPE_2__* se_dev; struct scatterlist* t_data_sg; } ;
struct scatterlist {int length; int offset; } ;
struct iblock_req {int pending; } ;
struct bio_list {int dummy; } ;
struct bio {int dummy; } ;
typedef int sense_reason_t ;
typedef int sector_t ;
struct TYPE_3__ {int block_size; } ;
struct TYPE_4__ {TYPE_1__ dev_attrib; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct bio*,int ,int,int ) ;
 int FUNC_3 (struct bio_list*,struct bio*) ;
 int FUNC_4 (struct bio_list*) ;
 struct bio* FUNC_5 (struct bio_list*) ;
 int FUNC_6 (struct bio*) ;
 struct bio* FUNC_7 (struct se_cmd*,int,int) ;
 int FUNC_8 (struct bio_list*,int ) ;
 int FUNC_9 (struct iblock_req*) ;
 struct iblock_req* FUNC_10 (int,int ) ;
 int FUNC_11 (char*,int,int,int) ;
 int FUNC_12 (struct se_cmd*) ;
 int FUNC_13 (struct scatterlist*) ;

__attribute__((used)) static sense_reason_t
FUNC_14(struct se_cmd *VAR_5)
{
 struct iblock_req *VAR_6;
 struct scatterlist *VAR_7;
 struct bio *VAR_8;
 struct bio_list VAR_9;
 sector_t VAR_10 = VAR_5->t_task_lba;
 sector_t VAR_11 = FUNC_12(VAR_5);

 VAR_7 = &VAR_5->t_data_sg[0];

 if (VAR_5->t_data_nents > 1 ||
     VAR_7->length != VAR_5->se_dev->dev_attrib.block_size) {
  FUNC_11("WRITE_SAME: Illegal SGL t_data_nents: %u length: %u"
   " block_size: %u\n", VAR_5->t_data_nents, VAR_7->length,
   VAR_5->se_dev->dev_attrib.block_size);
  return VAR_2;
 }

 VAR_6 = FUNC_10(sizeof(struct iblock_req), VAR_0);
 if (!VAR_6)
  goto fail;
 VAR_5->priv = VAR_6;

 VAR_8 = FUNC_7(VAR_5, VAR_10, 1);
 if (!VAR_8)
  goto fail_free_ibr;

 FUNC_4(&VAR_9);
 FUNC_3(&VAR_9, VAR_8);

 FUNC_1(&VAR_6->pending, 1);

 while (VAR_11) {
  while (FUNC_2(VAR_8, FUNC_13(VAR_7), VAR_7->length, VAR_7->offset)
    != VAR_7->length) {

   VAR_8 = FUNC_7(VAR_5, VAR_10, 1);
   if (!VAR_8)
    goto fail_put_bios;

   FUNC_0(&VAR_6->pending);
   FUNC_3(&VAR_9, VAR_8);
  }


  VAR_10 += VAR_7->length >> VAR_1;
  VAR_11 -= 1;
 }

 FUNC_8(&VAR_9, VAR_4);
 return 0;

fail_put_bios:
 while ((VAR_8 = FUNC_5(&VAR_9)))
  FUNC_6(VAR_8);
fail_free_ibr:
 FUNC_9(VAR_6);
fail:
 return VAR_3;
}
