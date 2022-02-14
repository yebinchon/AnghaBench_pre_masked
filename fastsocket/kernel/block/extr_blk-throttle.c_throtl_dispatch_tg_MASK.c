
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_grp {int * bio_lists; } ;
struct throtl_data {int dummy; } ;
struct bio_list {int dummy; } ;
struct bio {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct bio*) ;
 struct bio* FUNC_1 (int *) ;
 int FUNC_2 (struct throtl_data*,struct throtl_grp*,int ,struct bio_list*) ;
 scalar_t__ FUNC_3 (struct throtl_data*,struct throtl_grp*,struct bio*,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct throtl_data *VAR_3, struct throtl_grp *VAR_4,
    struct bio_list *VAR_5)
{
 unsigned int VAR_6 = 0, VAR_7 = 0;
 unsigned int VAR_8 = VAR_2*3/4;
 unsigned int VAR_9 = VAR_2 - VAR_6;
 struct bio *VAR_10;



 while ((VAR_10 = FUNC_1(&VAR_4->bio_lists[VAR_0]))
  && FUNC_3(VAR_3, VAR_4, VAR_10, ((void*)0))) {

  FUNC_2(VAR_3, VAR_4, FUNC_0(VAR_10), VAR_5);
  VAR_6++;

  if (VAR_6 >= VAR_8)
   break;
 }

 while ((VAR_10 = FUNC_1(&VAR_4->bio_lists[VAR_1]))
  && FUNC_3(VAR_3, VAR_4, VAR_10, ((void*)0))) {

  FUNC_2(VAR_3, VAR_4, FUNC_0(VAR_10), VAR_5);
  VAR_7++;

  if (VAR_7 >= VAR_9)
   break;
 }

 return VAR_6 + VAR_7;
}
