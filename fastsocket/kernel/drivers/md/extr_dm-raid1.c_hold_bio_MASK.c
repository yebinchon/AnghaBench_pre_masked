
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mirror_set {int lock; int holds; int ti; int suspend; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct bio*,int ) ;
 int FUNC_2 (int *,struct bio*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct mirror_set *VAR_2, struct bio *VAR_3)
{




 FUNC_4(&VAR_2->lock);

 if (FUNC_0(&VAR_2->suspend)) {
  FUNC_5(&VAR_2->lock);




  if (FUNC_3(VAR_2->ti))
   FUNC_1(VAR_3, VAR_0);
  else
   FUNC_1(VAR_3, -VAR_1);
  return;
 }




 FUNC_2(&VAR_2->holds, VAR_3);
 FUNC_5(&VAR_2->lock);
}
