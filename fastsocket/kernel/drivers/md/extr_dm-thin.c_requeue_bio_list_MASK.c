
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {int lock; } ;
struct bio_list {int dummy; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*,int ) ;
 int FUNC_1 (struct bio_list*) ;
 int FUNC_2 (struct bio_list*,struct bio_list*) ;
 struct bio* FUNC_3 (struct bio_list*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct thin_c *VAR_1, struct bio_list *VAR_2)
{
 struct bio *VAR_3;
 struct bio_list VAR_4;
 unsigned long VAR_5;

 FUNC_1(&VAR_4);

 FUNC_4(&VAR_1->lock, VAR_5);
 FUNC_2(&VAR_4, VAR_2);
 FUNC_1(VAR_2);
 FUNC_5(&VAR_1->lock, VAR_5);

 while ((VAR_3 = FUNC_3(&VAR_4)))
  FUNC_0(VAR_3, VAR_0);
}
