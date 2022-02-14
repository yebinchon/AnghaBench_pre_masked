
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mirror_set {int rh; } ;
struct mirror {int error_count; } ;
struct bio_list {int dummy; } ;
struct bio {int bi_sector; } ;
typedef int region_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct bio*,int ) ;
 struct bio* FUNC_2 (struct bio_list*) ;
 struct mirror* FUNC_3 (struct mirror_set*,int ) ;
 int FUNC_4 (int ,struct bio*) ;
 struct mirror* FUNC_5 (struct mirror_set*) ;
 scalar_t__ FUNC_6 (struct mirror*) ;
 int FUNC_7 (struct mirror*,struct bio*) ;
 struct mirror* FUNC_8 (struct mirror_set*,int ,int) ;

__attribute__((used)) static void FUNC_9(struct mirror_set *VAR_1, struct bio_list *VAR_2)
{
 region_t VAR_3;
 struct bio *VAR_4;
 struct mirror *VAR_5;

 while ((VAR_4 = FUNC_2(VAR_2))) {
  VAR_3 = FUNC_4(VAR_1->rh, VAR_4);
  VAR_5 = FUNC_5(VAR_1);




  if (FUNC_6(FUNC_8(VAR_1, VAR_3, 1)))
   VAR_5 = FUNC_3(VAR_1, VAR_4->bi_sector);
  else if (VAR_5 && FUNC_0(&VAR_5->error_count))
   VAR_5 = ((void*)0);

  if (FUNC_6(VAR_5))
   FUNC_7(VAR_5, VAR_4);
  else
   FUNC_1(VAR_4, -VAR_0);
 }
}
