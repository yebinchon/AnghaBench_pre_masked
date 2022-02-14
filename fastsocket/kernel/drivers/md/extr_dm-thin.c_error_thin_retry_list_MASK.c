
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_list {int dummy; } ;
struct thin_c {int lock; struct bio_list retry_on_resume_list; } ;
struct bio {int dummy; } ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio_list*) ;
 int FUNC_2 (struct bio_list*,struct bio_list*) ;
 struct bio* FUNC_3 (struct bio_list*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct thin_c *VAR_0)
{
 struct bio *VAR_1;
 unsigned long VAR_2;
 struct bio_list VAR_3;

 FUNC_1(&VAR_3);

 FUNC_4(&VAR_0->lock, VAR_2);
 FUNC_2(&VAR_3, &VAR_0->retry_on_resume_list);
 FUNC_1(&VAR_0->retry_on_resume_list);
 FUNC_5(&VAR_0->lock, VAR_2);

 while ((VAR_1 = FUNC_3(&VAR_3)))
  FUNC_0(VAR_1);
}
