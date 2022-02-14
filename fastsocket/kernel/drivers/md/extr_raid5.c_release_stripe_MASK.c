
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {int count; struct r5conf* raid_conf; } ;
struct r5conf {int device_lock; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (struct r5conf*,struct stripe_head*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct stripe_head *VAR_0)
{
 struct r5conf *VAR_1 = VAR_0->raid_conf;
 unsigned long VAR_2;

 FUNC_3(VAR_2);
 if (FUNC_0(&VAR_0->count, &VAR_1->device_lock)) {
  FUNC_1(VAR_1, VAR_0);
  FUNC_4(&VAR_1->device_lock);
 }
 FUNC_2(VAR_2);
}
