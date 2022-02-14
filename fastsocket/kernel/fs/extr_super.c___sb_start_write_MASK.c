
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int frozen; int * counter; int wait_unfrozen; } ;
struct super_block {TYPE_1__ s_writers; } ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*,int) ;
 int FUNC_1 (struct super_block*,int,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,int) ;

int FUNC_7(struct super_block *VAR_1, int VAR_2, bool VAR_3)
{

 if (FUNC_5(!FUNC_3(VAR_1)))
  return 1;
retry:
 if (FUNC_5(VAR_1->s_writers.frozen >= VAR_2)) {
  if (!VAR_3)
   return 0;
  FUNC_6(VAR_1->s_writers.wait_unfrozen,
      VAR_1->s_writers.frozen < VAR_2);
 }




 FUNC_2(&VAR_1->s_writers.counter[VAR_2-1]);




 FUNC_4();
 if (FUNC_5(VAR_1->s_writers.frozen >= VAR_2)) {
  FUNC_0(VAR_1, VAR_2);
  goto retry;
 }
 return 1;
}
