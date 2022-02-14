
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int t_task_lba; int se_dev; } ;
struct iblock_dev {int ibd_bd; } ;
typedef int sense_reason_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct iblock_dev* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct se_cmd*) ;
 int FUNC_4 (struct se_cmd*,int ) ;

__attribute__((used)) static sense_reason_t
FUNC_5(struct se_cmd *VAR_3)
{
 struct iblock_dev *VAR_4 = FUNC_0(VAR_3->se_dev);
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4->ibd_bd, VAR_3->t_task_lba,
   FUNC_3(VAR_3), VAR_0, 0);
 if (VAR_5 < 0) {
  FUNC_2("blkdev_issue_discard() failed: %d\n", VAR_5);
  return VAR_2;
 }

 FUNC_4(VAR_3, VAR_1);
 return 0;
}
