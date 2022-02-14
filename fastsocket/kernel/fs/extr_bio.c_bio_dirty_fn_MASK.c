
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct bio {struct bio* bi_private; } ;


 struct bio* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct work_struct *VAR_2)
{
 unsigned long VAR_3;
 struct bio *VAR_4;

 FUNC_3(&VAR_1, VAR_3);
 VAR_4 = VAR_0;
 VAR_0 = ((void*)0);
 FUNC_4(&VAR_1, VAR_3);

 while (VAR_4) {
  struct bio *VAR_5 = VAR_4->bi_private;

  FUNC_2(VAR_4);
  FUNC_1(VAR_4);
  FUNC_0(VAR_4);
  VAR_4 = VAR_5;
 }
}
