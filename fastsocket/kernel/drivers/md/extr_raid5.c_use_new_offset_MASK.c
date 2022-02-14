
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {int generation; } ;
struct r5conf {scalar_t__ reshape_progress; int generation; } ;
typedef scalar_t__ sector_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(struct r5conf *VAR_1, struct stripe_head *VAR_2)
{
 sector_t VAR_3 = VAR_1->reshape_progress;




 FUNC_0();
 if (VAR_3 == VAR_0)
  return 0;
 if (VAR_2->generation == VAR_1->generation - 1)
  return 0;



 return 1;
}
