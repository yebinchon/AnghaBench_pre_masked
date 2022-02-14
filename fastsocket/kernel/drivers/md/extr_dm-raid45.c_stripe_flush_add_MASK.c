
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_cache {int lists; } ;
struct stripe {struct list_head* lists; struct stripe_cache* sc; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct stripe*) ;
 int FUNC_1 (struct list_head*,int) ;
 scalar_t__ FUNC_2 (struct list_head*) ;

__attribute__((used)) static void FUNC_3(struct stripe *VAR_1)
{
 struct stripe_cache *VAR_2 = VAR_1->sc;
 struct list_head *VAR_3 = VAR_1->lists + VAR_0;

 if (!FUNC_0(VAR_1) && FUNC_2(VAR_3))
  FUNC_1(VAR_3, VAR_2->lists + VAR_0);
}
