
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ emulate_fua_write; int block_size; } ;
struct se_device {TYPE_1__ dev_attrib; } ;
struct se_cmd {int data_direction; int se_cmd_flags; int t_task_lba; int data_length; struct se_device* se_dev; int t_data_nents; struct scatterlist* t_data_sg; } ;
struct scatterlist {int dummy; } ;
struct fd_dev {TYPE_3__* fd_file; } ;
typedef int sense_reason_t ;
typedef int loff_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_5__ {int dentry; } ;
struct TYPE_6__ {TYPE_2__ f_path; } ;


 int VAR_0 ;
 struct fd_dev* FUNC_0 (struct se_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct se_cmd*,struct scatterlist*,int ,int) ;
 int FUNC_2 (struct se_cmd*,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int,int,int) ;

__attribute__((used)) static sense_reason_t
FUNC_4(struct se_cmd *VAR_4)
{
 struct scatterlist *VAR_5 = VAR_4->t_data_sg;
 u32 VAR_6 = VAR_4->t_data_nents;
 enum dma_data_direction VAR_7 = VAR_4->data_direction;
 struct se_device *VAR_8 = VAR_4->se_dev;
 int VAR_9 = 0;





 if (VAR_7 == VAR_0) {
  VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_6, 0);
 } else {
  VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_6, 1);





  if (VAR_9 > 0 &&
      VAR_8->dev_attrib.emulate_fua_write > 0 &&
      (VAR_4->se_cmd_flags & VAR_2)) {
   struct fd_dev *VAR_10 = FUNC_0(VAR_8);
   loff_t VAR_11 = VAR_4->t_task_lba *
    VAR_8->dev_attrib.block_size;
   loff_t VAR_12 = VAR_11 + VAR_4->data_length;

   FUNC_3(VAR_10->fd_file,
     VAR_10->fd_file->f_path.dentry,
     VAR_11, VAR_12, 1);
  }
 }

 if (VAR_9 < 0)
  return VAR_3;

 if (VAR_9)
  FUNC_2(VAR_4, VAR_1);
 return 0;
}
