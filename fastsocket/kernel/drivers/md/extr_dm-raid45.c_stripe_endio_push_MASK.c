
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_cache {int * locks; struct list_head* lists; } ;
struct stripe {struct list_head* lists; struct stripe_cache* sc; } ;
struct list_head {int dummy; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct stripe_cache*) ;
 int FUNC_1 (struct list_head*,struct list_head*) ;
 scalar_t__ FUNC_2 (struct list_head*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct stripe *VAR_2)
{
 unsigned long VAR_3;
 struct stripe_cache *VAR_4 = VAR_2->sc;
 struct list_head *VAR_5 = VAR_2->lists + VAR_0,
    *VAR_6 = VAR_4->lists + VAR_0;
 spinlock_t *VAR_7 = VAR_4->locks + VAR_1;


 FUNC_3(VAR_7, VAR_3);
 if (FUNC_2(VAR_5))
  FUNC_1(VAR_5, VAR_6);
 FUNC_4(VAR_7, VAR_3);

 FUNC_5(FUNC_0(VAR_4));
}
