
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {scalar_t__ size; } ;
struct mtd_file_info {struct mtd_info* mtd; } ;
struct file {scalar_t__ f_pos; struct mtd_file_info* private_data; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;




__attribute__((used)) static loff_t FUNC_0 (struct file *VAR_1, loff_t VAR_2, int VAR_3)
{
 struct mtd_file_info *VAR_4 = VAR_1->private_data;
 struct mtd_info *VAR_5 = VAR_4->mtd;

 switch (VAR_3) {
 case 128:
  break;
 case 130:
  VAR_2 += VAR_1->f_pos;
  break;
 case 129:
  VAR_2 += VAR_5->size;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_2 >= 0 && VAR_2 <= VAR_5->size)
  return VAR_1->f_pos = VAR_2;

 return -VAR_0;
}
