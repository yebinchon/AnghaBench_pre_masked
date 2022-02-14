
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {unsigned long (* get_unmapped_area ) (struct mtd_info*,unsigned long,unsigned long,unsigned long) ;unsigned long size; } ;
struct mtd_file_info {struct mtd_info* mtd; } ;
struct file {struct mtd_file_info* private_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (struct mtd_info*,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_1(struct file *VAR_3,
        unsigned long VAR_4,
        unsigned long VAR_5,
        unsigned long VAR_6,
        unsigned long VAR_7)
{
 struct mtd_file_info *VAR_8 = VAR_3->private_data;
 struct mtd_info *VAR_9 = VAR_8->mtd;

 if (VAR_9->get_unmapped_area) {
  unsigned long VAR_10;

  if (VAR_4 != 0)
   return (unsigned long) -VAR_0;

  if (VAR_5 > VAR_9->size || VAR_6 >= (VAR_9->size >> VAR_2))
   return (unsigned long) -VAR_0;

  VAR_10 = VAR_6 << VAR_2;
  if (VAR_10 > VAR_9->size - VAR_5)
   return (unsigned long) -VAR_0;

  return VAR_9->get_unmapped_area(VAR_9, VAR_5, VAR_10, VAR_7);
 }


 return (unsigned long) -VAR_1;
}
