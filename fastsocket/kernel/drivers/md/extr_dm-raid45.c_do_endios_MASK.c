
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_cache {scalar_t__ lists; } ;
struct stripe {int dummy; } ;
struct raid_set {struct stripe_cache sc; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct list_head*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct raid_set*,struct stripe*,struct list_head*) ;
 int FUNC_2 (struct list_head*,scalar_t__) ;
 struct stripe* FUNC_3 (struct stripe_cache*) ;
 int FUNC_4 (struct stripe*) ;

__attribute__((used)) static void FUNC_5(struct raid_set *VAR_1)
{
 struct stripe_cache *VAR_2 = &VAR_1->sc;
 struct stripe *VAR_3;

 struct list_head VAR_4;

 FUNC_0(&VAR_4);

 while ((VAR_3 = FUNC_3(VAR_2))) {

  if (!FUNC_4(VAR_3))
   FUNC_1(VAR_1, VAR_3, &VAR_4);
 }





 FUNC_2(&VAR_4, VAR_2->lists + VAR_0);
}
