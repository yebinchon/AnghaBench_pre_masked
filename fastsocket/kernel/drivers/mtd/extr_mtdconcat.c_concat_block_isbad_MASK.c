
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int (* block_isbad ) (struct mtd_info*,scalar_t__) ;scalar_t__ size; } ;
struct mtd_concat {int num_subdev; struct mtd_info** subdev; } ;
typedef scalar_t__ loff_t ;


 struct mtd_concat* FUNC_0 (struct mtd_info*) ;
 int VAR_0 ;
 int FUNC_1 (struct mtd_info*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_1, loff_t VAR_2)
{
 struct mtd_concat *VAR_3 = FUNC_0(VAR_1);
 int VAR_4, VAR_5 = 0;

 if (!VAR_3->subdev[0]->block_isbad)
  return VAR_5;

 if (VAR_2 > VAR_1->size)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_subdev; VAR_4++) {
  struct mtd_info *VAR_6 = VAR_3->subdev[VAR_4];

  if (VAR_2 >= VAR_6->size) {
   VAR_2 -= VAR_6->size;
   continue;
  }

  VAR_5 = VAR_6->block_isbad(VAR_6, VAR_2);
  break;
 }

 return VAR_5;
}
