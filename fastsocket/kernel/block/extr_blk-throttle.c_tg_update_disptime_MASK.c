
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_grp {unsigned long disptime; int * bio_lists; } ;
struct throtl_data {int dummy; } ;
struct bio {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct bio* FUNC_0 (int *) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (struct throtl_data*,struct throtl_grp*,struct bio*,unsigned long*) ;
 int FUNC_3 (struct throtl_data*,struct throtl_grp*) ;
 int FUNC_4 (struct throtl_data*,struct throtl_grp*) ;

__attribute__((used)) static void FUNC_5(struct throtl_data *VAR_3, struct throtl_grp *VAR_4)
{
 unsigned long VAR_5 = -1, VAR_6 = -1, VAR_7 = -1, VAR_8;
 struct bio *VAR_9;

 if ((VAR_9 = FUNC_0(&VAR_4->bio_lists[VAR_0])))
  FUNC_2(VAR_3, VAR_4, VAR_9, &VAR_5);

 if ((VAR_9 = FUNC_0(&VAR_4->bio_lists[VAR_1])))
  FUNC_2(VAR_3, VAR_4, VAR_9, &VAR_6);

 VAR_7 = FUNC_1(VAR_5, VAR_6);
 VAR_8 = VAR_2 + VAR_7;


 FUNC_3(VAR_3, VAR_4);
 VAR_4->disptime = VAR_8;
 FUNC_4(VAR_3, VAR_4);
}
