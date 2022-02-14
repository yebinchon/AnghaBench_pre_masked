
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mspro_block_data {scalar_t__ read_only; int usage_count; scalar_t__ card; } ;
struct gendisk {struct mspro_block_data* private_data; } ;
struct block_device {struct gendisk* bd_disk; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct block_device *VAR_4, fmode_t VAR_5)
{
 struct gendisk *VAR_6 = VAR_4->bd_disk;
 struct mspro_block_data *VAR_7 = VAR_6->private_data;
 int VAR_8 = -VAR_0;

 FUNC_0(&VAR_3);

 if (VAR_7 && VAR_7->card) {
  VAR_7->usage_count++;
  if ((VAR_5 & VAR_2) && VAR_7->read_only)
   VAR_8 = -VAR_1;
  else
   VAR_8 = 0;
 }

 FUNC_1(&VAR_3);

 return VAR_8;
}
