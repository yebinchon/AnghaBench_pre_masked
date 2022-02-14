
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int se_dev; } ;
struct iblock_dev {int ibd_bio_set; } ;
struct bio {struct se_cmd* bi_private; } ;


 struct iblock_dev* FUNC_0 (int ) ;
 int FUNC_1 (struct bio*,int ) ;

__attribute__((used)) static void FUNC_2(struct bio *VAR_0)
{
 struct se_cmd *VAR_1 = VAR_0->bi_private;
 struct iblock_dev *VAR_2 = FUNC_0(VAR_1->se_dev);

 FUNC_1(VAR_0, VAR_2->ibd_bio_set);
}
