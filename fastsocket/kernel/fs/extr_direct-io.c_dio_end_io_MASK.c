
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio {scalar_t__ is_async; } ;
struct bio {struct dio* bi_private; } ;


 int FUNC_0 (struct bio*,int) ;
 int FUNC_1 (struct bio*,int) ;

void FUNC_2(struct bio *VAR_0, int VAR_1)
{
 struct dio *VAR_2 = VAR_0->bi_private;

 if (VAR_2->is_async)
  FUNC_0(VAR_0, VAR_1);
 else
  FUNC_1(VAR_0, VAR_1);
}
