
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {unsigned long size; unsigned long (* get_unmapped_area ) (struct mtd_info*,unsigned long,unsigned long,unsigned long) ;} ;
struct mtd_concat {int num_subdev; struct mtd_info** subdev; } ;


 struct mtd_concat* FUNC_0 (struct mtd_info*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_1 (struct mtd_info*,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_2(struct mtd_info *VAR_2,
           unsigned long VAR_3,
           unsigned long VAR_4,
           unsigned long VAR_5)
{
 struct mtd_concat *VAR_6 = FUNC_0(VAR_2);
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_6->num_subdev; VAR_7++) {
  struct mtd_info *VAR_8 = VAR_6->subdev[VAR_7];

  if (VAR_4 >= VAR_8->size) {
   VAR_4 -= VAR_8->size;
   continue;
  }


  if (VAR_4 + VAR_3 > VAR_8->size)
   return (unsigned long) -VAR_0;

  if (VAR_8->get_unmapped_area)
   return VAR_8->get_unmapped_area(VAR_8, VAR_3, VAR_4,
        VAR_5);

  break;
 }

 return (unsigned long) -VAR_1;
}
