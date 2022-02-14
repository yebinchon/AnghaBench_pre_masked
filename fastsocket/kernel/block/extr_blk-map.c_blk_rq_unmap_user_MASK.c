
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {struct bio* bi_next; struct bio* bi_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*,int ) ;
 int FUNC_2 (struct bio*) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(struct bio *VAR_1)
{
 struct bio *VAR_2;
 int VAR_3 = 0, VAR_4;

 while (VAR_1) {
  VAR_2 = VAR_1;
  if (FUNC_3(FUNC_1(VAR_1, VAR_0)))
   VAR_2 = VAR_1->bi_private;

  VAR_4 = FUNC_0(VAR_2);
  if (VAR_4 && !VAR_3)
   VAR_3 = VAR_4;

  VAR_2 = VAR_1;
  VAR_1 = VAR_1->bi_next;
  FUNC_2(VAR_2);
 }

 return VAR_3;
}
