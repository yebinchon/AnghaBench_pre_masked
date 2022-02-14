
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct se_cmd {int se_dev; } ;
struct iblock_dev {int ibd_bd; int ibd_bio_set; } ;
struct bio {int bi_sector; int * bi_end_io; int bi_destructor; struct se_cmd* bi_private; int bi_bdev; } ;
typedef int sector_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct iblock_dev* FUNC_0 (int ) ;
 struct bio* FUNC_1 (int ,scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static struct bio *
FUNC_3(struct se_cmd *VAR_4, sector_t VAR_5, u32 VAR_6)
{
 struct iblock_dev *VAR_7 = FUNC_0(VAR_4->se_dev);
 struct bio *VAR_8;





 if (VAR_6 > VAR_0)
  VAR_6 = VAR_0;

 VAR_8 = FUNC_1(VAR_1, VAR_6, VAR_7->ibd_bio_set);
 if (!VAR_8) {
  FUNC_2("Unable to allocate memory for bio\n");
  return ((void*)0);
 }

 VAR_8->bi_bdev = VAR_7->ibd_bd;
 VAR_8->bi_private = VAR_4;
 VAR_8->bi_destructor = VAR_2;
 VAR_8->bi_end_io = &VAR_3;
 VAR_8->bi_sector = VAR_5;

 return VAR_8;
}
