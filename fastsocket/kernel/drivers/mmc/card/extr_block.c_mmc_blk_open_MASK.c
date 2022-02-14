
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_blk_data {int usage; scalar_t__ read_only; } ;
struct block_device {int bd_disk; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct block_device*) ;
 struct mmc_blk_data* FUNC_1 (int ) ;
 int FUNC_2 (struct mmc_blk_data*) ;

__attribute__((used)) static int FUNC_3(struct block_device *VAR_3, fmode_t VAR_4)
{
 struct mmc_blk_data *VAR_5 = FUNC_1(VAR_3->bd_disk);
 int VAR_6 = -VAR_0;

 if (VAR_5) {
  if (VAR_5->usage == 2)
   FUNC_0(VAR_3);
  VAR_6 = 0;

  if ((VAR_4 & VAR_2) && VAR_5->read_only) {
   FUNC_2(VAR_5);
   VAR_6 = -VAR_1;
  }
 }

 return VAR_6;
}
