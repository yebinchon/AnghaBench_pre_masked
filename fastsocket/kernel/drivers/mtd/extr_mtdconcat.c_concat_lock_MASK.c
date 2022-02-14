
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct mtd_info {scalar_t__ size; int (* lock ) (struct mtd_info*,scalar_t__,scalar_t__) ;} ;
struct mtd_concat {int num_subdev; struct mtd_info** subdev; } ;
typedef scalar_t__ loff_t ;


 struct mtd_concat* FUNC_0 (struct mtd_info*) ;
 int VAR_0 ;
 int FUNC_1 (struct mtd_info*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_1, loff_t VAR_2, uint64_t VAR_3)
{
 struct mtd_concat *VAR_4 = FUNC_0(VAR_1);
 int VAR_5, VAR_6 = -VAR_0;

 if ((VAR_3 + VAR_2) > VAR_1->size)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_4->num_subdev; VAR_5++) {
  struct mtd_info *VAR_7 = VAR_4->subdev[VAR_5];
  uint64_t VAR_8;

  if (VAR_2 >= VAR_7->size) {
   VAR_8 = 0;
   VAR_2 -= VAR_7->size;
   continue;
  }
  if (VAR_2 + VAR_3 > VAR_7->size)
   VAR_8 = VAR_7->size - VAR_2;
  else
   VAR_8 = VAR_3;

  VAR_6 = VAR_7->lock(VAR_7, VAR_2, VAR_8);

  if (VAR_6)
   break;

  VAR_3 -= VAR_8;
  if (VAR_3 == 0)
   break;

  VAR_6 = -VAR_0;
  VAR_2 = 0;
 }

 return VAR_6;
}
