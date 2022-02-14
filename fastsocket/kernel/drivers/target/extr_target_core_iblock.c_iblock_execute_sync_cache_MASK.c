
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int* t_task_cdb; int se_dev; } ;
struct iblock_dev {int ibd_bd; } ;
struct bio {struct se_cmd* bi_private; int bi_bdev; int bi_end_io; } ;
typedef int sense_reason_t ;


 int VAR_0 ;
 struct iblock_dev* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct bio* FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,struct bio*) ;
 int FUNC_3 (struct se_cmd*,int ) ;

__attribute__((used)) static sense_reason_t
FUNC_4(struct se_cmd *VAR_4)
{
 struct iblock_dev *VAR_5 = FUNC_0(VAR_4->se_dev);
 int VAR_6 = (VAR_4->t_task_cdb[1] & 0x2);
 struct bio *VAR_7;





 if (VAR_6)
  FUNC_3(VAR_4, VAR_1);

 VAR_7 = FUNC_1(VAR_0, 0);
 VAR_7->bi_end_io = VAR_3;
 VAR_7->bi_bdev = VAR_5->ibd_bd;
 if (!VAR_6)
  VAR_7->bi_private = VAR_4;
 FUNC_2(VAR_2, VAR_7);
 return 0;
}
